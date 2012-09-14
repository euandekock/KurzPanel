/*
 * k_program.h
 *
 *  Created on: Jun 17, 2012
 *      Author: Euan de Kock
 */

#ifndef KURZPROGRAM_H_
#define KURZPROGRAM_H_

#include "k_object.h"

using namespace std;

class KurzProgram : KurzObject
    {
    //string msg; // The actual message - we will wait until we have the whole message before we try and process it...

    uint programLoc;
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

    KurzProgram();
    KurzProgram(const uint8 *sysex_msg, const uint8 sysex_len);
    KurzProgram(const KurzSysexMsg &sysMsg);

    ~KurzProgram();

    //void addMessage(const uint8 *sysex_msg, const uint8 sysex_len);
    //void addMessage(const KurzSysexMsg &sysMsg);
    void decodeMessage(string &msg);
    int decode(uint8 *msg);
    };


#endif /* KURZPROGRAM_H_ */
