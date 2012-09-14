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
                cout << "Completed Processing a FULL MSG" << endl;
                switch(sysMsg->Data[2])
                    {
                    case progType:
                        {
                        cout << "Creating a new ProgramType Object here, and adding it to our Directory List." << endl;
                        KurzProgram prog_item = KurzProgram();
                        prog_item.decodeMessage(msg);
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
                    case shapeType:
                        {
                        cout << "Creating a new ShapeType Object here, and adding it to our Directory List." << endl;
                        KurzLFOShape shape_item = KurzLFOShape();

                        shape_item.decode((uint8 *)msg.c_str());
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
                    }
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
