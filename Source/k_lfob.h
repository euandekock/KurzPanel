#ifndef K_LFOB_H
#define K_LFOB_H

#include "../JuceLibraryCode/JuceHeader.h"

/*
 * LFOB parameter block
 */
class k_lfob
    {
public:
    uint8 lfob_type;	/* = lfoType */
    uint8 lfob_idno;
    uint8 lfob_rfu;
    uint8 lfob_flags;
    uint8 lfob_shape;	/* ID of shapeType object */
    uint8 lfob_rtCtl;	/* rate control (enum table #1) */
    uint8 lfob_rtMin;	/* min rate (enum table #4) */
    uint8 lfob_rtMax;	/* max rate (enum table #4) */

    uint8 bytes_used;   /* How many bytes of the msg have we consumed */

    k_lfob(uint8 *msg) : lfob_type(msg[0]), lfob_idno(msg[1]), lfob_rfu(0), lfob_flags(msg[3]), lfob_shape(msg[4]), lfob_rtCtl(msg[5]), lfob_rtMin(msg[6]), lfob_rtMax(msg[7]), bytes_used(8)
        {
        }
    };
/*
 * lfob_flags
 */
#define lfob_phase 0x03	/* initial phase (0, 90, 180, 270) */
#define lfob_effect 0x80

#endif // K_LFOB_H
