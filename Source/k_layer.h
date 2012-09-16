#ifndef K_LAYER_H
#define K_LAYER_H

#include "k_object.h"
#include "k_lfob.h"

/*
 * Layer Data block LDB
 */
class KurzLayer: KurzObject
    {
public:
    /*
     * layer data block (named)
     * contained in program data
     */
    uint8 ldbType;	/* = layerType */
    uint8 ldbID;
    int   ldbSize;
    uint8 ldbKeymap;	/* ID of keymapType object */
    uint8 ldbLokey;	/* lowest MIDI key # */
    uint8 ldbHikey;	/* highest MIDI key # */
    int8  ldbTrans;	/* transpose (+/- semi-tones) */
    int8  ldbDtune;	/* detune (+/- cents) */
    uint8 ldbDelay;	/* delay (enum table 23) */
    int8  ldbVolume;	/* volume adjust (+/-dB) */
    int8  ldbStereo;	/* stereo position */
    uint8 ldbEffect;	/* compiled effect ID */
    uint8 ldbNLink;	/* compiled effect linkage */
    uint8 ldbKflags;	/* key state flags */
    uint8 ldbXflags;	/* effects flags */
    uint8 ldbEnable;	/* enable switch (enum table #1) */
    uint8 ldbLegato;	/* alt attack switch (enum table #1) */
    uint8 ldbVflags;	/* velocity trigger stuff */
    uint8 ldbDynam;	/* dynamic range (dB) */
    int8  ldbKeyTilt;	/* amplitude tilt (+/-dB) */
    uint8 ldbBalCtl;	/* balance control (enum table #1) */
    int8  ldbSpRange;	/* soft pedal range (+/-dB) */
    int8  ldbPwRange;	/* pitch wheel range (+/- quarter-tones) */
    uint8 ldbLastOut;	/* used by compiled effects */
    uint8 ldbRfu[7];

    uint8 bytes_used;   /* How many bytes of the msg have we consumed */

    KurzLFOBlock LFO[2];

    KurzLayer() : ldbType(0),
                  ldbID(0),
                  ldbSize(0),
                  ldbKeymap(0),
                  ldbLokey(0),
                  ldbHikey(0),
                  ldbTrans(0),
                  ldbDtune(0),
                  ldbDelay(0),
                  ldbVolume(0),
                  ldbStereo(0),
                  ldbEffect(0),
                  ldbNLink(0),
                  ldbKflags(0),
                  ldbXflags(0),
                  ldbEnable(0),
                  ldbLegato(0),
                  ldbVflags(0),
                  ldbDynam(0),
                  ldbKeyTilt(0),
                  ldbBalCtl(0),
                  ldbSpRange(0),
                  ldbPwRange(0),
                  ldbLastOut(0),
                  bytes_used(32)
        {
        }

    uint decode(uint8 *msg, uint loc)
        {
        ldbType = msg[loc++];
        ldbID = msg[loc++];
        ldbSize = (uint8)msg[loc++] << 8 | (uint8)msg[loc++];
        ldbKeymap = msg[loc++];
        ldbLokey = msg[loc++];
        ldbHikey = msg[loc++];
        ldbTrans = msg[loc++];
        ldbDtune = msg[loc++];
        ldbDelay = msg[loc++];
        ldbVolume = msg[loc++];
        ldbStereo = msg[loc++];
        ldbEffect = msg[loc++];
        ldbNLink = msg[loc++];
        ldbKflags = msg[loc++];
        ldbXflags = msg[loc++];
        ldbEnable = msg[loc++];
        ldbLegato = msg[loc++];
        ldbVflags = msg[loc++];
        ldbDynam = msg[loc++];
        ldbKeyTilt = msg[loc++];
        ldbBalCtl = msg[loc++];
        ldbSpRange = msg[loc++];
        ldbPwRange = msg[loc++];
        ldbLastOut = msg[loc++];

        loc+=7; //Skip the RFU bytes.

        // Skip the name...
        while(msg[loc] != '\0')
            {
            cout << msg[loc];
            loc++;
            }
        loc++;

        if(loc%2)
            loc++;

        return loc;
        }

    void display()
        {
        cout << "Layer ";
        if(ldbID > 0)
            {
            cout << "[" << (int)ldbID << "]" << endl;
            cout << "Keymap : " << hex << (int)ldbKeymap << endl;
            cout << "Lo Key : " << hex << (int)ldbLokey << endl;
            cout << "Hi Key : " << hex << (int)ldbHikey << endl;
            cout << "Trans  : " << hex << (int)ldbTrans << endl;
            cout << "Detune : " << hex << (int)ldbDtune << endl;
            cout << "Delay  : " << hex << (int)ldbDelay << endl;
            cout << "Volume : " << hex << (int)ldbVolume << endl;
            cout << "Stereo : " << hex << (int)ldbStereo << endl;
            cout << "Effect : " << hex << (int)ldbEffect << endl;
            cout << "NLink  : " << hex << (int)ldbNLink << endl;
            cout << "KFlags : " << hex << (int)ldbKflags << endl;
            cout << "Xflags : " << hex << (int)ldbXflags << endl;
            cout << "Enable : " << hex << (int)ldbEnable << endl;
            cout << "Legato : " << hex << (int)ldbLegato << endl;
            cout << "Vflags : " << hex << (int)ldbVflags << endl;
            cout << "Dynam  : " << hex << (int)ldbDynam << endl;
            cout << "KeyTilt: " << hex << (int)ldbKeyTilt << endl;
            cout << "BalCtl : " << hex << (int)ldbBalCtl << endl;
            cout << "SpRange: " << hex << (int)ldbSpRange << endl;
            cout << "PwRange: " << hex << (int)ldbPwRange << endl;
            }
        else
            {
            cout << "empty" << endl;
            }
        }
    };
/*
 * ldb_kflags
 */
#define ldb_ignRels 0x01	/* ignore key release */
#define ldb_ignSust 0x02	/* ignore sustain pedal */
#define ldb_ignSost 0x04	/* ignore sostenuto pedal */
#define ldb_ignSusp 0x08	/* ignore suspend pedal */
/*
 * ldb_xflags
 */
#define ldb_pwlDis 0x01		/* pitch wheel disabled */
#define ldb_pwlKey 0x02		/* pitch bend only key down */
#define ldb_volDis 0x08		/* volume control disabled */
#define ldb_touchDis 0x10	/* touch sense disabled */
#define ldb_balRev 0x20		/* balance control reversed */
/*
 * ldb_vflags
 */
#define ldb_vt1Level 0x07	/* vtrig 1 level (fff -> ppp) */
#define ldb_vt1Sense 0x08	/* vtrig 1 sense */
#define ldb_vt2Level 0x70	/* vtrig 2 level */
#define ldb_vt2Sense 0x80	/* vtrig 2 sense */

#endif // K_LAYER_H
