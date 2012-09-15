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
KurzLFOShape::KurzLFOShape() : shapeLoc(0), Status(KLFO_MSG_EMPTY)
    {
    }

KurzLFOShape::~KurzLFOShape()
    {
    }

uint KurzLFOShape::decode(uint8 *msg)
    {
    uint loc;
    uint Size = 0;

    shapeType = msg[0];
    shapeID   = msg[1];

    Size = msg[2] << 8 | msg[3];
    shapeOffset = msg[4] << 8 | msg[5];

    loc = 6;
    shapeLoc = 0;
    shapeName.clear();

    while(msg[loc]) // Until we hit a NULL Terminator, extract the name value
        shapeName += msg[loc++];

    loc++; // Get past the NULL.

    // Get back on to an even keel ...
    if(loc%2)
        loc++;

    shapeSize = Size - loc; // True Shapesize after the Type, ID, Shapecount, Offset and Name Parameters.

    for(; loc < Size; loc++)
        {
        cout << " " << hex << (int)msg[loc];

        shapeWave[shapeLoc++] = msg[loc];
        }
    cout << endl;
    cout << "LFO Shape Table. ID: " << (int)shapeID << " Size: " << (int)shapeSize << " Offset: " << shapeOffset << " Name: " << shapeName << endl;
    for(uint count = 0; count < shapeSize; count += 2)
        {
        vectWave.push_back((int16)(shapeWave[count] << 8 | shapeWave[count+1]));
        }
    Status = KurzLFOShape::KLFO_MSG_GOOD;
    return Size;
    }
