/*
 * k_program.h
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#ifndef KURZPROGRAM_H_
#define KURZPROGRAM_H_

#include "k_object.h"
#include "k_layer.h"

using namespace std;

class KurzProgram : KurzObject
    {
public:

enum KurzProgramStatus
    {
    KPROG_MSG_EMPTY = 0,
    KPROG_MSG_BAD,
    KPROG_MSG_OK,
    KPROG_MSG_GOOD
    };

    KurzProgramStatus Status;
    uint8 programType;
    uint8 programID;
    uint  programSize;
    uint8 outputProg;
    uint8 stealing;
    uint8 polyLimit;

    string programName;

    KurzLFOBlock LFO[2];
    KurzASRBlock ASR[2];
    KurzLayer Layer[4];

    KurzProgram();
    KurzProgram(const uint8 *sysex_msg, const uint8 sysex_len);
    KurzProgram(const KurzSysexMsg &sysMsg);

    ~KurzProgram();

    uint decode(uint8 *msg, uint loc);
    void display();

    };


#endif /* KURZPROGRAM_H_ */
