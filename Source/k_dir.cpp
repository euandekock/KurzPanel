#include "k_dir.h"


KurzDir::KurzDir() :
    //MasterTable(progType, "Master Table"),
    //LFOShapes(shapeType, "LFO Shapes"),
    SoundBlock(soundType, "Sound Blocks"),
    KBDMap(keymapType, "Keyboard Maps"),
    MIDIProgList(mlistType, "MIDI Program Lists"),
    Intonations(itblType, "Intonations"),
    CompiledEffects(fxType, "Compiled Efects"),
    VelocityMaps(vmapType, "Velocity Maps"),
    PressureMaps(pmapType, "Pressure Maps"),
    EditorDescriptor(editType, "Editor Description"),
    //Programs(progType, "Programs"),
    Layers(layerType, "Layers"),
    SongList(songType, "Song Lists"),
    PLists(plistType, "PLists"),
    BinList(bmapType, "Bin Maps"),
    OtherItems(lastType, "Others")
    {
    }
KurzDir::~KurzDir()
    {
    }
void KurzDir::newMessage(KurzSysexMsg *sysMsg)
    {
    msg = string("");
    msgSize = 0;
    msgStatus = KMSG_EMPTY;
    addMessage(sysMsg);
    }

void KurzDir::addMessage(KurzSysexMsg *sysMsg)
    {
    if (sysMsg->Status == KSXMSG_OK)
        {
        if(sysMsg->pSize > 12) // Good Msg Payload process it.
            {
            if(msg.size() == 0)
                {
                msgSize = sysMsg->Data[14] << 8 | sysMsg->Data[15];
                }
            cout << "Processing an extra Msg, data size is: " << dec << sysMsg->pSize << endl;
            msg += string((char *)&sysMsg->Data[12], sysMsg->pSize - 12);

            }
        else if (sysMsg->pSize == 12) // End of Msg
            {
            if(msg.size() == msgSize)
                {
                msgStatus = KMSG_GOOD; // Should really have an override here to allow a status to be set
                cout << "Completed Building a FULL MSG" << endl;
                decodeMessage(msg);

                }
            else
                {
                msgStatus = KMSG_GOOD; // Should really have an override here to allow a status to be set
                cout << "Completed Processing a FULL MSG (Bad Size):" << dec << (int)msgSize << " Loc:" << (int) msg.size() << endl;
                }
            // Reset our message as we should have processed it by now...
            msg = string("");
            msgSize = 0;
            }
        }
    }

void KurzDir::decodeMessage(string &msg)
    {
    uint loc = 0;

    uint type = 0;
    uint size = 0;
    uint ID = 0;

    KurzProgram *CurrentProgram = NULL; // Determines what Layer Object we are currently processing.
    int CurrentLayer = -1; // Determines what Layer Object we are currently processing.

    while(loc < msg.size())
        {
        type = msg[loc];
        ID   = msg[loc+1];
        size = (uint8)msg[loc+2] << 8 | (uint8)msg[loc+3];

        switch(type)
            {
            case progType:
                {
                cout << "Creating a new ProgramType Object here, and adding it to our Directory List." << endl;

                CurrentLayer = -1; // New Program, reset the layer reference...

                KurzProgram prog_item = KurzProgram();
                loc = prog_item.decode((uint8 *)msg.c_str(), loc);

                if(prog_item.Status == KurzProgram::KPROG_MSG_GOOD)
                    {
                    cout << "Adding a new Program ID: " << dec << (int)prog_item.programID << endl;
                    Programs.Program.insert(pair<uint8, KurzProgram>(prog_item.programID, prog_item));

                    map<uint8, KurzProgram>::iterator i;

                    i = Programs.Program.find(prog_item.programID);

                    if(i != Programs.Program.end())
                        {
                        CurrentProgram = &i->second;
                        }

                    // Lookup our ID as the list order may have changed...
                    for(int count = 0; count < Programs.List.size(); count++)
                        {
                        if(prog_item.programID == Programs.List[count].ID)
                            {
                            Programs.List[count].Status = KurzDirEntry::KITEM_FULL;
                            break;
                            }
                        }

                    msgStatus = KMSG_GOOD; // Should really have an override here to allow a status to be set
                    }
                }
                break;
            case unknownType:
                cout << "Skipping an Unknown Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                loc = msg.size();
                break;
            case blockType:
                cout << "Skipping a block Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case indexType:
                cout << "Skipping a index Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case tableType:
                {
                cout << "Creating a new TableType Object here, and adding it to our Directory List." << endl;
                KurzTable table_item = KurzTable();

                loc = table_item.decode((uint8 *)msg.c_str(), loc);
                if(table_item.Status == KurzTable::KTAB_MSG_GOOD)
                    {
                    cout << "Adding a new Table ID: " << dec << (int)table_item.tabID << endl;
                    MasterTable.Tables.insert(pair<uint8, KurzTable>(table_item.tabID, table_item));

                    // Lookup our ID as the list order may have changed...
                    for(int count = 0; count < MasterTable.List.size(); count++)
                        {
                        if(table_item.tabID == MasterTable.List[count].ID)
                            {
                            MasterTable.List[count].Status = KurzDirEntry::KITEM_FULL;
                            break;
                            }
                        }

                    msgStatus = KMSG_GOOD; // Should really have an override here to allow a status to be set
                    }
                }
                break;
            case shapeType:
                {
                cout << "Creating a new ShapeType Object here, and adding it to our Directory List." << endl;
                KurzLFOShape shape_item = KurzLFOShape();

                loc = shape_item.decode((uint8 *)msg.c_str(), loc);
                if(shape_item.Status == KurzLFOShape::KLFO_MSG_GOOD)
                    {
                    cout << "Adding a new Shape ID: " << dec << (int)shape_item.shapeID << endl;
                    LFOShapes.LFOShapes.insert(pair<uint8, KurzLFOShape>(shape_item.shapeID, shape_item));

                    // Lookup our ID as the list order may have changed...
                    for(int count = 0; count < LFOShapes.List.size(); count++)
                        {
                        if(shape_item.shapeID == LFOShapes.List[count].ID)
                            {
                            LFOShapes.List[count].Status = KurzDirEntry::KITEM_FULL;
                            break;
                            }
                        }

                    msgStatus = KMSG_GOOD; // Should really have an override here to allow a status to be set
                    }
                }
                break;
            case soundType:
                cout << "Skipping a sound Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case keymapType:
                cout << "Skipping a keymap Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case mlistType:
                cout << "Skipping a mlist Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case menuType:
                cout << "Skipping a menu Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case mngType:
                cout << "Skipping a mng Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case melType:
                cout << "Skipping a mel Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case itblType:
                cout << "Skipping a itbl Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case fxType:
                cout << "Skipping a fx Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case vmapType:
                cout << "Skipping a vmap Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case pmapType:
                cout << "Skipping a pmap Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case editType:
                cout << "Skipping a edit Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case layerType:

                if(CurrentProgram)
                    {
                    CurrentLayer++;
                    jassert(CurrentLayer < 4);

                    cout << "Processing Layer[" << (int)CurrentLayer << "] Type Segment (" << hex << (int)msg[loc] << ") Size " << dec << (int)size << endl;

                    loc = CurrentProgram->Layer[CurrentLayer].decode((uint8 *)msg.c_str(), loc);
                    }
                break;
            case asrType:
                if(CurrentProgram)
                    {
                    cout << "Processing asrType[" << (int)msg[loc+1] << "] Type Segment (" << hex << (int)msg[loc] << ") Size " << dec << (int)size << endl;

                    if(msg[loc+1] == 1)
                        loc = CurrentProgram->Layer[CurrentLayer].ASR[0].decode((uint8 *)msg.c_str(), loc);
                    else if(msg[loc+1] == 2)
                        loc = CurrentProgram->Layer[CurrentLayer].ASR[1].decode((uint8 *)msg.c_str(), loc);
                    else if(msg[loc+1] == 9)
                        loc = CurrentProgram->ASR[0].decode((uint8 *)msg.c_str(), loc);
                    else if(msg[loc+1] == 10)
                        loc = CurrentProgram->ASR[1].decode((uint8 *)msg.c_str(), loc);
                    }
                else
                    {
                    loc += 8;
                    }
                break;
            case lfoType:
                if(CurrentProgram)
                    {
                    cout << "Processing lfoType[" << (int)msg[loc+1] << "] Type Segment (" << hex << (int)msg[loc] << ") Size " << dec << (int)size << endl;

                    if(msg[loc+1] == 1)
                        loc = CurrentProgram->Layer[CurrentLayer].LFO[0].decode((uint8 *)msg.c_str(), loc);
                    else if(msg[loc+1] == 2)
                        loc = CurrentProgram->Layer[CurrentLayer].LFO[1].decode((uint8 *)msg.c_str(), loc);
                    else if(msg[loc+1] == 9)
                        loc = CurrentProgram->LFO[0].decode((uint8 *)msg.c_str(), loc);
                    else if(msg[loc+1] == 10)
                        loc = CurrentProgram->LFO[1].decode((uint8 *)msg.c_str(), loc);
                    }
                else
                    {
                    loc += 8;
                    }
                break;
            case envType:
                cout << "Skipping a env Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case efxType:
                cout << "Skipping a efx Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID << endl;
                loc += 16;
                break;
            case invType:
                cout << "Skipping a inv Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case mxrType:
                cout << "Skipping a mxr Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case songType:
                cout << "Skipping a song Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case plistType:
                cout << "Skipping a  Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
                break;
            case lastType:
                cout << "Skipping a last Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;

            default:
                cout << "Skipping an Unknown Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            }
        }
    }
