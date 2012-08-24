#ifndef K_ASRB_H
#define K_ASRB_H
#include "../JuceLibraryCode/JuceHeader.h"

/*
 * ASR parameter block
 */
class k_asrb
    {
public:
    uint8 asrb_type;	/* = asrType */
    uint8 asrb_idno;
    uint8 asrb_flags;
    uint8 asrb_trig;	/* trigger input (enum table #1) */
    uint8 asrb_dtime;	/* delay time (enum table #2) */
    uint8 asrb_atime;	/* attack time (enum table #2) */
    uint8 asrb_stime;	/* sustain time (unused) */
    uint8 asrb_rtime;	/* release time (enum table #2) */

    uint8 bytes_used;   /* How many bytes of the msg have we consumed */

    k_lfob(uint8 *msg) :  asrb_type(msg[0]), asrb_idno(msg[1]), asrb_flags(msg[2]), asrb_trig(msg[3]), asrb_dtime(msg[4]), asrb_atime(msg[5]), asrb_stime(msg[6]), asrb_rtime(msg[7]), bytes_used(8)
        {
        }
    };
/*
 * asrb_flags
 */
#define asrb_hold 0x01	/* hold while trigger on */
#define asrb_rept 0x02	/* repeat while trigger on */
#define asrb_effect 0x80

#endif // K_ASRB_H
