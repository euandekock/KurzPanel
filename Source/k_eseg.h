#ifndef K_ESEG_H
#define K_ESEG_H

#include "../JuceLibraryCode/JuceHeader.h"

/*
 * envelope segments immediately follow the header
 *
 * for all segments but last
 * level and time are enumerated
 *
 * last segment of each section is special:
 *
 * if (level > 0)
 *  jump back and repeat going forward
 * level is segment # to jump to
 * time is repeat count (0 means infinite)
 *
 * else if (level < 0)
 * loop back and repeat (ie, backward, then forward)
 * -level is segment # to stop at and change direction
 * time is repeat count (0 means infinite)
 *
 * else (level == 0)
 * if (time > 0)
 * time is decay/release time
 * else if (attack section)
 * infinite sustain
 * else
 * instant release
 *
 */
class k_eseg
    {
    int8 eseg_level;	/* level (enum table #28 or #29) */
    uint8 eseg_time;	/* time (enum table #2) */

    uint8 bytes_used;

    k_eseg(uint8 *msg) : eseg_level(msg[0]), eseg_time(msg[1]), bytes_used(2)
        {
        }
    };

#endif // K_ESEG_H
