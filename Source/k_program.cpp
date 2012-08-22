/*
 * kurz_program.cpp
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#include "k_program.h"
//#include "kurz_view_lfo_program.h"

/*
 *
 */
//KurzProgram::KurzProgram(const uint8 *sysex_msg, const uint8 sysex_len) : KurzSysexMsg(sysex_msg, sysex_len) , programLoc(0)
KurzProgram::KurzProgram(const KurzSysexMsg &sysMsg) : programLoc(0), Status(KPROG_MSG_EMPTY)
    {
    /*
     * Process an Program DUMP, and assign all the appropriate values.
     */
    uint loc;
    programType = sysMsg.Data[12];
    programID   = sysMsg.Data[13];

    programSize = sysMsg.Data[14] << 8 | sysMsg.Data[15];

    outputProg = sysMsg.Data[17];
    stealing = sysMsg.Data[18];
    polyLimit = sysMsg.Data[19];

    loc = 28; // Point to the Start of the Name Parameter.
    programName.clear();

    while(sysMsg.Data[loc]) // Until we hit a NULL Terminator, extract the name value
        programName += sysMsg.Data[loc++];

    loc++; // Get past the NULL.

    // Get back on to an even keel ...
    if(loc%2)
	loc++;

    cout << "Program ID: " << dec << (int)programID << " Size: " << (int)programSize << " output Prog#: " << (int)outputProg << " Name: " << programName << endl;
    cout << "Stealing Opt: " << (int)stealing << " Poly Limit: " << (int)polyLimit << endl;

    //Status = KPROG_MSG_GOOD; // Should really have an override here to allow an PROG status
    //cout << "Completed Processing a FULL PROG program" << endl;
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
	    uint loc;
	    cout << "Processing an extra Msg, data size is: " << dec
		    << sysMsg.pSize << endl;

	    /* EDK
	    //for (loc = 12; programLoc < programSize, loc < sysMsg.pSize + 12; loc++)
	      for (loc = 12; programLoc < programSize, loc < sysMsg.pSize; loc++)
		{
		cout << " " << hex << (int) sysMsg.Data[loc];
		programWave[programLoc++] = sysMsg.Data[loc];
		}
	    cout << endl;
	    cout << "Added extra message, new length is: " << dec
		    << (int) programLoc << " expected Size: " << programSize
		    << endl;
	    */
	    }
	else if (sysMsg.pSize == 12)
	    {
	    if(programLoc == programSize)
		{
		Status = KPROG_MSG_GOOD; // Should really have an override here to allow an PROG status
		cout << "Completed Processing a FULL PROG program" << endl;

		/*
		uint count = 0;

		for(; count < programSize; count += 2)
		    {
		    vectWave.push_back((int16)(programWave[count] << 8 | programWave[count+1]));
		    //cout << dec << wVal << endl;
		    }
		*/
		}
	    else
		{
		Status = KPROG_MSG_GOOD; // Should really have an override here to allow an PROG status
		cout << "Completed Processing a FULL PROG program (Bad Size):" << dec << (int)programSize << " Loc:" << (int) programLoc << endl;
		}
	    }
	}
    }
