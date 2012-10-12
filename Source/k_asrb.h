#ifndef K_ASRB_H
#define K_ASRB_H
#include "../JuceLibraryCode/JuceHeader.h"

/*
 * ASR parameter block
 */
class KurzASRBlock : KurzObject
    {
public:
    uint8 asrbType;	/* = asrType */
    uint8 asrbID;
    uint8 asrbFlags;
    uint8 asrbTrig;	/* trigger input (enum table #1) */
    uint8 asrbDtime;	/* delay time (enum table #2) */
    uint8 asrbAtime;	/* attack time (enum table #2) */
    uint8 asrbStime;	/* sustain time (unused) */
    uint8 asrbRtime;	/* release time (enum table #2) */

    uint8 bytes_used;   /* How many bytes of the msg have we consumed */

    KurzASRBlock(uint8 *msg) :  asrbType(msg[0]), asrbID(msg[1]), asrbFlags(msg[2]), asrbTrig(msg[3]), asrbDtime(msg[4]), asrbAtime(msg[5]), asrbStime(msg[6]), asrbRtime(msg[7]), bytes_used(8)
        {
        }

    KurzASRBlock() :  asrbType(0), asrbID(0), asrbFlags(0), asrbTrig(0), asrbDtime(0), asrbAtime(0), asrbStime(0), asrbRtime(0), bytes_used(8)
        {
        }
    uint decode(uint8 *msg, uint loc)
        {
        asrbType = msg[loc++];
        asrbID   = msg[loc++];
        asrbFlags = msg[loc++];
        asrbTrig = msg[loc++];
        asrbDtime = msg[loc++];
        asrbAtime = msg[loc++];
        asrbStime = msg[loc++];
        asrbRtime = msg[loc++];

        return loc;
        }

    void display()
        {
        cout << "LFO Block ";
        if(asrbID > 0)
            {
            cout << "[" << (int)asrbID << "]" << endl;
            cout << "Flags: " << hex << (int)asrbFlags << endl;
            cout << "Trig: " << hex << (int)asrbTrig << endl;

            cout << "DTime: " << hex << (int)asrbDtime << endl;
            cout << "ATime: " << hex << (int)asrbAtime << endl;
            cout << "STime: " << hex << (int)asrbStime << endl;
            cout << "RTime: " << hex << (int)asrbRtime << endl;
            }
        else
            {
            cout << "empty" << endl;
            }
        }
    };
/*
 * asrb_flags
 */
#define asrb_hold 0x01	/* hold while trigger on */
#define asrb_rept 0x02	/* repeat while trigger on */
#define asrb_effect 0x80

#endif // K_ASRB_H
