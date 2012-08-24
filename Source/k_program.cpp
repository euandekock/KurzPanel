/*
 * kurz_program.cpp
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#include "k_program.h"

//KurzProgram::KurzProgram(const KurzSysexMsg &sysMsg) : programLoc(0), Status(KPROG_MSG_EMPTY)
KurzProgram::KurzProgram() : Status(KPROG_MSG_EMPTY ),  programType(0), programID(0), programSize(0), outputProg(0), stealing(0), polyLimit(0), programName("")
    {
    //msg = string((char *)&sysMsg.Data[12], sysMsg.pSize - 12);
    msg = string("");
    }
KurzProgram::~KurzProgram()
    {
    }

void KurzProgram::addMessage(const KurzSysexMsg &sysMsg)
    {
    if (sysMsg.Status == K_MSG_OK)
	{
	if (sysMsg.pSize > 12)
	    {
	    if(msg.size() == 0)
		{
		programSize = sysMsg.Data[14] << 8 | sysMsg.Data[15];
		}
	    cout << "Processing an extra Msg, data size is: " << dec << sysMsg.pSize << endl;
	    msg += string((char *)&sysMsg.Data[12], sysMsg.pSize - 12);

	    }
	else if (sysMsg.pSize == 12)
	    {
	    if(msg.size() == programSize)
		{
		Status = KPROG_MSG_GOOD; // Should really have an override here to allow an PROG status
		cout << "Completed Processing a FULL PROG program" << endl;
		decodeMessage();
		}
	    else
		{
		Status = KPROG_MSG_GOOD; // Should really have an override here to allow an PROG status
		cout << "Completed Processing a FULL PROG program (Bad Size):" << dec << (int)programSize << " Loc:" << (int) msg.size() << endl;
		}
	    }
	}
    }
/*
The decodeMessage should process each segment of the message based on the type byte it encounters at each step.
The decodeMessage call for each sub-object will return a value indicating how much of the total message it has
processed.

This method can probably be extended to all our types, any type that is a master item - Program, LFO Object etc that can
be directly queried from the system, should be capable of handling a decodeMessage routine that will call any subsequent
processType messages it is required to embody. MAYBE... Lets get Program functioning before we rework LFOShape.

*/
void KurzProgram::decodeMessage()
	{
	uint loc = 0;

	while(loc < msg.size())
		{
		switch(msg[loc])
			{
			case progType:
				cout << "Processing a Program Segment" << endl;
				loc += decodeProgram((uint8 *)msg.c_str());
				break;
			default:
				cout << "Skipping an Unknown Segment (" << hex << (int)msg[loc] << ")" << endl;
				loc = msg.size();
				break;
			}
		}
	}

int KurzProgram::decodeProgram(uint8 *msg)
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
	cout << "Next Parameter is " << hex << (int) msg[loc] << endl;

	return loc;
	}
