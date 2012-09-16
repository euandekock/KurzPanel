/*
 * kurz_program.cpp
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#include "k_program.h"

KurzProgram::KurzProgram() : Status(KPROG_MSG_EMPTY ),  programType(0), programID(0), programSize(0), outputProg(0), stealing(0), polyLimit(0), programName("")
    {
    }
KurzProgram::~KurzProgram()
    {
    }

uint KurzProgram::decode(uint8 *msg, uint loc)
	{
    programType = msg[loc++];
    programID   = msg[loc++];

    programSize = (uint8)msg[loc++] << 8 | (uint8)msg[loc++];

    loc++; // Skip Rfu

    outputProg = msg[loc++];
    stealing = msg[loc++];
    polyLimit = msg[loc++];
     loc += 8; // Skip Rfu3

	programName.clear();

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

void KurzProgram::display()
    {
    cout << "Program ";
    if(programID > 0)
        {
        cout << programName << endl;
        cout << "OutputProg: " << hex << (int)outputProg << endl;
        cout << "Stealing  : " << hex << (int)stealing << endl;
        cout << "Poly Limit: " << hex << (int)polyLimit << endl;
        }
    else
        {
        cout << "empty" << endl;
        }
    }
