/*
  TODO 24-Sep-2012
  Ensure our sending status is tracked differently for normal key pad functions,
  playing and SYSEX programming/reading.

  We should use the SYSEX status to pop up a progress message dialog, effectively
  disabling any input controls while we send/receive data.
*/
/*
 * Kurz.cpp
 *
 *  Created on: Jun 16, 2012
 *      Author: Euan de Kock
 */

#include "kurz_connection.h"
#include "k_lfoshape.h"
#include "k_dir.h"


using namespace std;

KurzConnection::KurzConnection(uint8 localID, uint8 remoteID, MidiOutput *midiOutChannel, deque<string> &inQueue, KurzDir &outDir) :
    localConnectID(localID),
    remoteConnectID(remoteID),
    midiOutput(midiOutChannel),
    sendQueue(inQueue),
    listDir(outDir),
    state(KSTATE_INIT),
    packetCount(0),
    item(0),
    lfo_item(0)
    {
    // Initiate a connection
    if(sendQueue.size() > 0)
        processMessage(nullptr, 0);
    return;
    }

KurzConnection::~KurzConnection()
    {
    return;
    }
/*
 * Build up a Packet of data, apply the chksum and queue it for sending
 * Based on receiving a message starting with the PSize bytes
 */
void KurzConnection::sendDataPacket(const uint8 *in_msg, unsigned int in_len)
    {
    uint8 msg_head[5] = {0x07, remoteConnectID, 0x7C, localConnectID, 0};

    string msg;

    msg = string((char *)msg_head, 5) +
          string((char *)in_msg, in_len) +
          string((char *)KurzSysexMsg::chksum(&in_msg[2], in_len-2), 2);

    sendQueue.push_back(msg);

    processMessage(nullptr, 0);
    }

void KurzConnection::processMessage(const uint8 *in_msg, unsigned int in_len)
    {
    static uint8 sysex_connect[8] = {0x07, 0x00, 0x78, 0xFF, 0x01, 0x01, 0x01, 0x00};
    static uint8 sysex_ack[5] =     {0x07, 0x00, 0x7E, 0xFF, 0x00};

    string sysex_str;
    uint8 msg_type;

    uint8 *sysex;
    unsigned int len = 0;
    /*
     * If processMessage is called with a blank message parameter, it is generally
     * used to nudge the system back into action after we have added an extra message
     * to the sendQueue
     */
    if(in_len == 0)
        {
        msg_type = 0x00;
        }
    else
        {
        msg_type = in_msg[3];
        print_data(in_msg, in_len);
        }

    if(state < KSTATE_LVL3) // Disconnected State, still negotiating
        {
        switch(msg_type)
            {
            case 0x00:
                if(state == KSTATE_INIT)
                    {
                    state = KSTATE_LVL0;
                    sysex = sysex_connect;
                    len = 8;
                    sysex[1] = remoteConnectID;
                    sysex[2] = 0x78;
                    sysex[3] = localConnectID;
                    }
                break;
            case 0x79:
                state = KSTATE_LVL1;
                sysex = sysex_connect;
                len = 8;
                sysex[1] = remoteConnectID;
                sysex[2] = 0x79;
                sysex[3] = localConnectID;
                break;
            case 0x7A:
                state = KSTATE_LVL2;
                sysex = sysex_connect;
                len = 8;
                sysex[1] = remoteConnectID;
                sysex[2] = 0x7A;
                sysex[3] = localConnectID;
                break;
            case 0x7B:
                state = KSTATE_LVL3; // Now connected, we can prepare to send our next queued message
                processMessage(nullptr, 0); // Recurse back on ourself to process any new messages in the queue
                break;
            default:
                cout << "Unhandled Message type received: " << hex << msg_type << endl;
                break;
            }

        // Did we create an outgoing response message to handle
        if(len > 0)
            {
            cout << "Sending a Handshake MIDI message:" << (int)sysex[2] << " Length(" << (int)len << ")" << endl;
            print_data((uint8 *)sysex, len);

            MidiMessage newMsg = MidiMessage::createSysExMessage(sysex, len);
            midiOutput->sendMessageNow(newMsg);
            }
        }
    // Connected State - Handle an incoming message
    else
        {
        switch(msg_type)
            {
            case 0x00:
                // Can we send a new outgoing request (and do we have one ?)
                if(state == KSTATE_LVL3 && sendQueue.size() > 0)
                    {
                    sysex_str = sendQueue.front();
                    sendQueue.pop_front();

                    sysex = (uint8 *) sysex_str.c_str();
                    len = sysex_str.length();

                    /*
         *Push in our locally configured parameter values
         */
                    sysex[1] = remoteConnectID;
                    sysex[3] = localConnectID;
                    sysex[4] = packetCount++;

                    state = KSTATE_NEWMSG;
                    }
                break;
            case 0x7C: // Data Packet

                /*
         * When we receive a valid 0x7C message, we should be able to automatically
         * instantiate a sysex class from the data. This will allow us to verify the
         * chksum before we send back the ACK message
         */
                {
                KurzSysexMsg *tmpMsg = new KurzSysexMsg(in_msg, in_len);
                //tmpMsg = KurzSysexMsg

                if(tmpMsg->Status == KSXMSG_OK)
                    {
                    sysex = sysex_ack;
                    len = 5;

                    sysex[1] = remoteConnectID;
                    sysex[3] = localConnectID;
                    sysex[4] = tmpMsg->pktNum; // Which block number are we Acknowledging
                    }

                // If it's a list item response...
                if(tmpMsg->Data[1] == 0x01)
                    {
                    KurzDirList *ListQueue = &listDir.OtherItems;
                    /*
                     * TODO - This should probably also move into the k_dir class...
                     */
                    cout << "Processing a List Item of type: " << hex << tmpMsg->Data[2] << endl;
                    item = new KurzDirEntry(tmpMsg->Data);

                    switch(item->Type)
                        {
                        case unknownType:
                        case blockType:
                        case indexType:
                            break;
                        case tableType:
                            ListQueue = &listDir.MasterTable;
                            break;
                        case shapeType:
                            ListQueue = &listDir.LFOShapes;
                            break;
                        case soundType:
                            ListQueue = &listDir.SoundBlock;
                            break;
                        case keymapType:
                            ListQueue = &listDir.KBDMap;
                            break;
                        case mlistType:
                            ListQueue = &listDir.MIDIProgList;
                            break;
                        case menuType:
                            break;
                        case mngType:
                            break;
                        case melType:
                            break;
                        case itblType:
                            ListQueue = &listDir.Intonations;
                            break;
                        case fxType:
                            ListQueue = &listDir.CompiledEffects;
                            break;
                        case vmapType:
                            ListQueue = &listDir.VelocityMaps;
                            break;
                        case pmapType:
                            ListQueue = &listDir.PressureMaps;
                            break;
                        case editType:
                            ListQueue = &listDir.EditorDescriptor;
                            break;
                        case progType:
                            ListQueue = &listDir.Programs;
                            break;
                        case layerType:
                            ListQueue = &listDir.Layers;
                            break;
                        case asrType:
                            break;
                        case lfoType:
                            break;
                        case envType:
                            break;
                        case efxType:
                            break;
                        case invType:
                            break;
                        case mxrType:
                            break;
                        case songType:
                            ListQueue = &listDir.SongList;
                            break;
                        case plistType:
                            ListQueue = &listDir.PLists;
                            break;
                        case bmapType:
                            ListQueue = &listDir.BinList;
                            break;
                        case lastType:
                            break;
                        }
                    if(ListQueue != nullptr)
                        {
                        if(item->ID > 0)
                            {
                            ListQueue->List.push_back(*item);
                            ListQueue->Status = KurzDirList::KDIR_FILLING;
                            }
                        else
                            {
                            ListQueue->Status = KurzDirList::KDIR_OK;
                            state = KSTATE_LVL3;
                            if(ListQueue->List.size() > 0)
                                {
                                //ListQueue->ListReady(0); // Call the ListDir's ListReady function now.
                                }
                            }
                        }
                    }
                /*
                 * Need to allow the message to be built up, so we don't necessarily use the constructor
                 * to add the 2nd and subsequent message parts. Need to set the state when we create
                 * the message and then track it's status - setting the queue_status when we are done.
                 */

                // Received Dump Data Response
                else if(tmpMsg->Data[1] == 0x03)
                    {
                    listDir.addMessage(tmpMsg);

                    if(listDir.msgStatus == KurzDir::KMSG_GOOD)
                        state = KSTATE_LVL3;
                    else
                        state = KSTATE_INMSG;

                    }


                }
                break;
            case 0x7E: // Data Ack, silently continue
                break;
            default:
                cout << "Unhandled Message type received: " << hex << msg_type << endl;
                break;
            }
        if(len > 0)
            {
            cout << "Sending a Connected Sysex MIDI message:" << (int)sysex[2]  << " Length(" << (int)len << ")" << endl;
            print_data(sysex, len);


            MidiMessage newMsg = MidiMessage::createSysExMessage(sysex, len);
            midiOutput->sendMessageNow(newMsg);

            // Loop around to see if we can send another queued message
            if(state == KSTATE_LVL3)
                {
                cout << "SYSEX Process Complete Queue size: " << endl;
                processMessage(nullptr, 0);
                }

            }
        }
    }

void KurzConnection::print_data(const uint8 *msg, unsigned int len)
    {
    int count;
    uint8 msb;
    uint8 lsb;

    for(count = 0; count < len; count++)
        {
        cout << uppercase << setfill('0') << setw(2) << hex << (int)(msg[count]) << " ";
        }
    cout << endl;

    for(count = 0; count < len; count++)
        {
        cout << nouppercase << setfill(' ') << setw(2) << (uint8)(isprint(msg[count]) ? msg[count] : '.') << " ";
        }
    cout << endl;
    }
