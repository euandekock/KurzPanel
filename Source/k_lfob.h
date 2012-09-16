#ifndef K_LFOB_H
#define K_LFOB_H

#include "k_object.h"
#include "k_lfoshape.h"

/*
 * LFOB parameter block
 */
class KurzLFOBlock : KurzObject
    {
public:
    uint8 lfobType;	/* = lfoType */
    uint8 lfobID;
    uint8 lfobRfu;
    uint8 lfobFlags;
    uint8 lfobShape;	/* ID of shapeType object */
    uint8 lfobRtCtl;	/* rate control (enum table #1) */
    uint8 lfobRtMin;	/* min rate (enum table #4) */
    uint8 lfobRtMax;	/* max rate (enum table #4) */

    uint8 bytes_used;   /* How many bytes of the msg have we consumed */

    KurzLFOBlock() : lfobType(0), lfobID(0), lfobRfu(0), lfobFlags(0), lfobShape(0), lfobRtCtl(0), lfobRtMin(0), lfobRtMax(0), bytes_used(8)
        {
        }
    KurzLFOBlock(uint8 *msg) : lfobType(msg[0]), lfobID(msg[1]), lfobRfu(0), lfobFlags(msg[3]), lfobShape(msg[4]), lfobRtCtl(msg[5]), lfobRtMin(msg[6]), lfobRtMax(msg[7]), bytes_used(8)
        {
        }
    uint decode(uint8 *msg, uint loc)
        {
        lfobType = msg[loc++];
        lfobID   = msg[loc++];
        loc++; // Skip the Rfu bytes
        lfobFlags = msg[loc++];
        lfobShape = msg[loc++];
        lfobRtCtl = msg[loc++];
        lfobRtMin = msg[loc++];
        lfobRtMax = msg[loc++];

        return loc;
        }

    void display()
        {
        cout << "LFO Block ";
        if(lfobID > 0)
            {
            cout << "[" << (int)lfobID << "]" << endl;
            cout << "Flags: " << hex << (int)lfobFlags << endl;
            cout << "Shape: " << hex << (int)lfobShape << endl;

            cout << "RtCtl: " << hex << (int)lfobRtCtl << endl;
            cout << "RtMin: " << hex << (int)lfobRtMin << endl;
            cout << "RtMax: " << hex << (int)lfobRtMax << endl;
            }
        else
            {
            cout << "empty" << endl;
            }
        }

    };
/*
 * lfob_flags
 */
#define lfob_phase 0x03	/* initial phase (0, 90, 180, 270) */
#define lfob_effect 0x80

#endif // K_LFOB_H

