#ifndef K_OBJECT_H
#define K_OBJECT_H

#include <iostream>
#include <iomanip>

#include "kurz_sysex_msg.h"

using namespace std;

class KurzObject
    {
public:
        virtual uint decode(uint8 *msg, uint loc) = 0;
        virtual void display() = 0;
    };

#endif // K_OBJECT_H
