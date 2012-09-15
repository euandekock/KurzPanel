#include "k_dir.h"


KurzDir::KurzDir() :
    MasterTable(progType, "Master Table"),
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

//                switch(sysMsg->Data[2])
//                    {
//                    case progType:
//                        {
//                        cout << "Creating a new ProgramType Object here, and adding it to our Directory List." << endl;
//                        KurzProgram prog_item = KurzProgram();
//                        prog_item.decodeMessage(msg);
//                        if(prog_item.Status == KurzProgram::KPROG_MSG_GOOD)
//                            {
//                            cout << "Adding a new Program ID: " << dec << (int)prog_item.programID << endl;
//                            Programs.Program.insert(pair<uint8, KurzProgram>(prog_item.programID, prog_item));

//                            // Lookup our ID as the list order may have changed...
//                            for(int count = 0; count < Programs.List.size(); count++)
//                                {
//                                if(prog_item.programID == Programs.List[count].ID)
//                                    {
//                                    Programs.List[count].Status = KurzDirEntry::KITEM_FULL;
//                                    break;
//                                    }
//                                }

//                            msgStatus = KMSG_GOOD; // Should really have an override here to allow a status to be set
//                            }
//                        }
//                        break;
//                    case shapeType:
//                        {
//                        cout << "Creating a new ShapeType Object here, and adding it to our Directory List." << endl;
//                        KurzLFOShape shape_item = KurzLFOShape();

//                        shape_item.decode((uint8 *)msg.c_str());
//                        if(shape_item.Status == KurzLFOShape::KLFO_MSG_GOOD)
//                            {
//                            cout << "Adding a new Shape ID: " << dec << (int)shape_item.shapeID << endl;
//                            LFOShapes.LFOShapes.insert(pair<uint8, KurzLFOShape>(shape_item.shapeID, shape_item));

//                            // Lookup our ID as the list order may have changed...
//                            for(int count = 0; count < LFOShapes.List.size(); count++)
//                                {
//                                if(shape_item.shapeID == LFOShapes.List[count].ID)
//                                    {
//                                    LFOShapes.List[count].Status = KurzDirEntry::KITEM_FULL;
//                                    break;
//                                    }
//                                }

//                            msgStatus = KMSG_GOOD; // Should really have an override here to allow a status to be set
//                            }
//                        }
//                        break;
//                    }
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
                KurzProgram prog_item = KurzProgram();
                //prog_item.decodeMessage(msg);
                loc += prog_item.decode((uint8 *)msg.c_str());
                if(prog_item.Status == KurzProgram::KPROG_MSG_GOOD)
                    {
                    cout << "Adding a new Program ID: " << dec << (int)prog_item.programID << endl;
                    Programs.Program.insert(pair<uint8, KurzProgram>(prog_item.programID, prog_item));

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
                cout << "Skipping a table Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                if(size > 0)
                    loc += size;
                else
                    loc = msg.size();
                break;
            case shapeType:
                {
                cout << "Creating a new ShapeType Object here, and adding it to our Directory List." << endl;
                KurzLFOShape shape_item = KurzLFOShape();

                loc += shape_item.decode((uint8 *)msg.c_str());
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
                cout << "Skipping a layer Type Segment (" << hex << (int)msg[loc] << ") Size " << dec << (int)size << endl;
                loc += 32; // Only skip the Layer header...
                // Skip the name...
                while(msg[loc] != '\0')
                    {
                    cout << msg[loc];
                    loc++;
                    }
                loc++;

                if(loc%2)
                    loc++;
                cout << endl;

                //if(size > 0)
                //    loc += size;
                //else
                //        loc = msg.size();
                break;
            case asrType:
                cout << "Skipping a asr Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID  << endl;
                loc += 8;
                break;
            case lfoType:
                cout << "Skipping a lfo Type Segment (" << hex << (int)msg[loc] << ") ID " << dec << (int)ID << endl;
                loc += 8;
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
