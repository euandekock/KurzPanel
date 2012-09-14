/*
 * k_lfoshape.h
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#ifndef KURZLFOSHAPE_H_
#define KURZLFOSHAPE_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

#include "kurz_sysex_msg.h"

using namespace std;

class KurzLFOShape
    {
    uint shapeLoc;
public:

enum KurzLFOShapeStatus
    {
    KLFO_MSG_EMPTY = 0,
    KLFO_MSG_BAD,
    KLFO_MSG_OK,
    KLFO_MSG_GOOD
    };

    KurzLFOShapeStatus Status;
    uint8 shapeType;
    uint8 shapeID;
    uint  shapeSize;
    uint  shapeOffset;
    string shapeName;

    uint  shapeWave[1024];
    vector<int16> vectWave;


    KurzLFOShape();

    ~KurzLFOShape();

    void decode(uint8 *msg);
    };


#endif /* KURZLFOSHAPE_H_ */
