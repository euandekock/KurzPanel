#ifndef K_ENVB_H
#define K_ENVB_H

#include "../JuceLibraryCode/JuceHeader.h"

/*
 * envelope parameter block
 */
class k_envb
    {
public:
    uint8 envb_type;	/* = envType */
    uint8 envb_idno;
    int16 envb_size;
    uint8 envb_naSegs;	/* # attack segments */
    uint8 envb_nrSegs;	/* # release segments */
    uint8 envb_rfu[2];

    uint8 bytes_used;   /* How many bytes of the msg have we consumed */

    k_envb(uint8 *msg) : envb_type(msg[0]), envb_idno(msg[1]), envb_size((msg[2] << 8) | msg[3]), envb_naSegs(msg[4]), envb_nrSegs(msg[5]), envb_rfu(0), bytes_used(8)
        {
        }
    };


#endif // K_ENVB_H
