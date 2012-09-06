#ifndef K_OBJECT_H
#define K_OBJECT_H

#include <iostream>
#include <iomanip>

#include "kurz_sysex_msg.h"

using namespace std;

class KurzObject
    {
public:
        virtual int decode(uint8 *msg) = 0;
    };

#endif // K_OBJECT_H
