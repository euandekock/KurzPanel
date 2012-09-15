/*
 * kurz_program.cpp
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#include "k_program.h"

KurzProgram::KurzProgram() : Status(KPROG_MSG_EMPTY ),  programType(0), programID(0), programSize(0), outputProg(0), stealing(0), polyLimit(0), programName("")
    {
    //msg = string("");
    }
KurzProgram::~KurzProgram()
    {
    }

/*
The decodeMessage should process each segment of the message based on the type byte it encounters at each step.
The decodeMessage call for each sub-object will return a value indicating how much of the total message it has
processed.

This method can probably be extended to all our types, any type that is a master item - Program, LFO Object etc that can
be directly queried from the system, should be capable of handling a decodeMessage routine that will call any subsequent
processType messages it is required to embody. MAYBE... Lets get Program functioning before we rework LFOShape.

*/
void KurzProgram::decodeMessage(string &msg)
    {
    uint loc = 0;

    while(loc < msg.size())
        {
        switch(msg[loc])
            {
            case progType:
                cout << "Processing a Program Segment" << endl;
                loc += decode((uint8 *)msg.c_str());
                break;
            case unknownType:
                cout << "Skipping an Unknown Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case blockType:
                cout << "Skipping a block Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case indexType:
                cout << "Skipping a index Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case tableType:
                cout << "Skipping a table Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case shapeType:
                cout << "Skipping a shape Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case soundType:
                cout << "Skipping a sound Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case keymapType:
                cout << "Skipping a keymap Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case mlistType:
                cout << "Skipping a mlist Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case menuType:
                cout << "Skipping a menu Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case mngType:
                cout << "Skipping a mng Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case melType:
                cout << "Skipping a mel Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case itblType:
                cout << "Skipping a itbl Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case fxType:
                cout << "Skipping a fx Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case vmapType:
                cout << "Skipping a vmap Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case pmapType:
                cout << "Skipping a pmap Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case editType:
                cout << "Skipping a edit Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case layerType:
                cout << "Skipping a layer Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case asrType:
                cout << "Skipping a asr Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case lfoType:
                cout << "Skipping a lfo Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case envType:
                cout << "Skipping a env Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case efxType:
                cout << "Skipping a efx Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case invType:
                cout << "Skipping a inv Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case mxrType:
                cout << "Skipping a mxr Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case songType:
                cout << "Skipping a song Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case plistType:
                cout << "Skipping a  Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case bmapType:
                cout << "Skipping a plist Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            case lastType:
                cout << "Skipping a last Type Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;

            default:
                cout << "Skipping an Unknown Segment (" << hex << (int)msg[loc] << ")" << endl;
                loc = msg.size();
                break;
            }
        }
    }

int KurzProgram::decode(uint8 *msg)
	{
	programType = msg[0];
	programID   = msg[1];

	programSize = (uint8)msg[2] << 8 | (uint8)msg[3];

	outputProg = msg[5];
	stealing = msg[6];
	polyLimit = msg[7];

	programName.clear();

	uint loc = 16; // Point to the Start of the Name Parameter.
	while(msg[loc]) // Until we hit a NULL Terminator, extract the name value
	programName += msg[loc++];

	loc++; // Get past the NULL.

	// Get back on to an even keel ...
	if(loc%2)
		loc++;

	cout << "Program ID: " << dec << (unsigned int)programID << " Size: " << (unsigned int)programSize << " output Prog#: " << (int)outputProg << " Name: " << programName << endl;
	cout << "Stealing Opt: " << (int)stealing << " Poly Limit: " << (int)polyLimit << endl;
        Status = KPROG_MSG_GOOD;

        cout << "Next Parameter is " << hex << (int) msg[loc] << endl;
	return loc;
	}
