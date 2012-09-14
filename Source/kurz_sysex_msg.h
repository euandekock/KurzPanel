/*
 * kurz_sysex_msg.h
 *
 *  Created on: Jun 25, 2012
 *      Author: Euan de Kock
 */

#ifndef KURZSYSEXMSG_H_
#define KURZSYSEXMSG_H_

#include "types.h"

#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

#define MaxDataSize 0x3fff  // Max Size is based on two 7 bit values - 14 bits = 0x3fff

enum kurzSysexMsgStatus
    {
    KSXMSG_EMPTY = 0,
    KSXMSG_BAD,
    KSXMSG_OK,
    KSXMSG_GOOD
    };

class KurzSysexMsg
    {


// Make everything public for now...
public:
    kurzSysexMsgStatus Status;
    uint8 pktNum;
    uint pSize;
    uint8 Data[MaxDataSize];

    KurzSysexMsg(const uint8 *sysex_msg, const uint8 sysex_len);
    ~KurzSysexMsg();

    static uint8 *chksum(const uint8 *msg, unsigned int len);
    };

#endif /* KURZSYSEXMSG_H_ */
