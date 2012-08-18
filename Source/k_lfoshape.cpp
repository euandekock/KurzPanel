/*
 * kurz_lfo_shape.cpp
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#include "k_lfoshape.h"
#include "kurz_view_lfo_shape.h"

/*
 *
 */
//KurzLFOShape::KurzLFOShape(const uint8 *sysex_msg, const uint8 sysex_len) : KurzSysexMsg(sysex_msg, sysex_len) , shapeLoc(0)
KurzLFOShape::KurzLFOShape(const KurzSysexMsg &sysMsg) : shapeLoc(0), Status(KLFO_MSG_EMPTY)
    {
    /*
     * Process an LFO Shape DUMP, and assign all the appropriate values.
     */
    uint loc;
    shapeType = sysMsg.Data[12];
    shapeID   = sysMsg.Data[13];

    shapeSize = sysMsg.Data[14] << 8 | sysMsg.Data[15];
    shapeOffset = sysMsg.Data[16] << 8 | sysMsg.Data[17];

    loc = 18; // Point to the Start of the Name Parameter.
    shapeName.clear();

    while(sysMsg.Data[loc]) // Until we hit a NULL Terminator, extract the name value
        shapeName += sysMsg.Data[loc++];

    loc++; // Get past the NULL.

    // Get back on to an even keel ...
    if(loc%2)
	loc++;

    shapeSize -= (loc-12); // True Shapesize after the Type, ID, Shapecount, Offset and Name Parameters.
    //for(; loc < sysMsg.pSize + 12; loc++)
    for(; loc < sysMsg.pSize; loc++)
	{
	cout << " " << hex << (int)sysMsg.Data[loc];

	shapeWave[shapeLoc++] = sysMsg.Data[loc];
	}
    cout << endl;
    cout << "LFO Shape Table. ID: " << (int)shapeID << " Size: " << (int)shapeSize << " Offset: " << shapeOffset << " Name: " << shapeName << endl;

    }
KurzLFOShape::~KurzLFOShape()
    {
    }

void KurzLFOShape::addMessage(const KurzSysexMsg &sysMsg)
    {
    if (sysMsg.Status == K_MSG_OK)
	{
	if (sysMsg.pSize > 12)
	    {
	    uint loc;
	    cout << "Processing an extra Msg, data size is: " << dec
		    << sysMsg.pSize << endl;

	    //for (loc = 12; shapeLoc < shapeSize, loc < sysMsg.pSize + 12; loc++)
	      for (loc = 12; shapeLoc < shapeSize, loc < sysMsg.pSize; loc++)
		{
		cout << " " << hex << (int) sysMsg.Data[loc];
		shapeWave[shapeLoc++] = sysMsg.Data[loc];
		}
	    cout << endl;
	    cout << "Added extra message, new length is: " << dec
		    << (int) shapeLoc << " expected Size: " << shapeSize
		    << endl;
	    }
	else if (sysMsg.pSize == 12)
	    {
	    if(shapeLoc == shapeSize)
		{
		Status = KLFO_MSG_GOOD; // Should really have an override here to allow an LFO status
		cout << "Completed Processing a FULL LFO shape" << endl;

		uint count = 0;

		for(; count < shapeSize; count += 2)
		    {
		    vectWave.push_back((int16)(shapeWave[count] << 8 | shapeWave[count+1]));
		    /*
		    cout << hex << ((count == shapeOffset) ? '+' : '-') << (int)wVal << ":";
		    for(uint8 x = 0; x < (7f - wVal); x++)
			cout << "*";
		    cout << endl;
		    */
		    //cout << dec << wVal << endl;


		    }
		}
	    }
	}
    }
