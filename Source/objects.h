/* 
 *
 *  Objects.h
 *  Tuesday, February 23, 1988 7:35 PM
 */

/*
 * Database definitions for K1000 Database Objects
 * To insure future compatability, all RFU items must be zero!
 */
typedef char sByte;		/* signed byte */
typedef unsigned char uByte;	/* unsigned byte */
typedef int sWord;		/* signed word   (a 'short') */
typedef unsigned int uWord;	/* unsigned word (a 'short') */

#define nDYNAM 8

/* # dynamic range marks */
/*
 * generalized data block header
 */
typedef struct
    {
    uByte gdb_type;
    uByte gdb_idno;
    sWord gdb_size;
    } GDB;
/*
 * extended data block header
 */
typedef struct
    {
    uByte xdb_type;
    uByte xdb_idno;
    sWord xdb_rfu;
    long xdb_size;
    } XDB;
/*
 * Master data block
 */
typedef struct
    {
    uByte mdb_type;		/* tabletype */
    uByte mdb_idno;		/* 16 */
    sWord mdb_size;
    uByte mdb_mode;		/* MIDI mode */
    uByte mdb_chan;		/* basic MIDI channel # 1...16) */
    uByte mdb_devI0;		/* sys-ex device ID 0...126 */
    uByte mdb_dchan;		/* displayed channel # 1...16 */
    uByte mdb_velMap;		/* ID of vmapType object */
    uByte mdb_ctlMap;
    uByte mdb_flags;
    uByte mdb_bflags;
    sByte mdb_tune;		/* master tune (+/- cents) */
    sByte mdb_trans;		/* master transpose (+/- semi-tones) */
    uByte mdb_intTab;		/* ID of itabType object */
    uByte mdb_refKey;		/* intonation reference key */
    uByte mdb_txPList;		/* transmit program change map */
    uByte mdb_rxPList;		/* receive program change map */
    uByte mdb_bbPList;		/* bin bank program map (K1000 only) */
    uByte mdb_bbentry;		/* current entry */
    uByte mdb_editPos[4];
    sByte mdb_pwRange;		/* global pitch wheel range (+/- QT) */
    sByte mdb_spRange;		/* global soft pedal range (+/- dB) */
    sByte mdb_dynam;		/* additive dynamic range adjust (+/-dB) */
    uByte mdb_rfu1;
    uByte mdb_version[4];	/* software version stamp */
    uByte mdb_cprogs[16];	/* programs/channel */
    /*
     * local keyboard control assignments (K1000 only)
     */
    uByte mdb_pedal1;	/* sustain pedal */
    uByte mdb_pedal2;	/* other pedal */
    uByte mdb_wheelUp;	/* mod wheel - up */
    uByte mdb_wheelDn;	/* mod wheel - * down */
    uByte mdb_slider;	/* data slider */
    uByte mdb_rfu2;
    uByte mdb_rfu3[10];
    /*
     * more per channel stuff
     */
    uByte mdb_cflags[16];	/* flags */
    sByte mdb_volume[16];	/* volume adjust (+/-dB) */
    sByte mdb_stereo[16];	/* stereo position */
    uByte mdb_plimit[16];	/* poly limit */
    uByte mdb_range[16][2];	/* low/hi MIDI keys */
    } MDB;
/* Flag definitions for mdb_flags */
#define mdb_monoOut 0x01	/* force monophonic output */
#define mdb_ignNOff 0x02	/* ignore MIDI all notes off */
#define mdb_mRefKey 0x04	/* MIDI intonation ref key */
#define mdb_parEdit 0x08	/* MIDI parameter editing */
#define mdb_confirm 0x10	/* ~confirm deletes */
#define mdb_echoPChg 0x20	/* echo program changes */
#define mdb_stealSame 0x40	/* steal same note */
/* 
 * Flag definitions for mdb_bflags
 */
#define mdb_btnRept 0x01	/* button repeats */
#define mdb_btnRate 0x02	/* button repeat rate (slow/fast) */
#define mdb_btnAccl 0x04	/* button acceleration */
/* 
 * Flag definitions for mdb_cflags
 */
#define mdb_volDis 0x01		/* volume disabled */
#define mdb_panOver 0x02	/* stereo pan override */
#define mdb_rngOver 0x04	/* MIDI kbd range override */
/* 
 * program data block
 * just a shell to enclose the layer definitions
 */
typedef struct
    {
    uByte pdb_type;
    uByte pdb_idno;
    sWord pdb_size;
    uByte pdb_rfu1;
    uByte pdb_midiProg;	/* output program */
    uByte pdb_stealOpt;	/* assignment algorithm */
    uByte pdb_phLimit;	/* polyphonicity limit */
    uByte pdb_rfu3[8];
    } PDB;
/* 
 * layer data block (named)
 * contained in program data
 */
typedef struct
    {
    uByte ldb_type;	/* = layerType */
    uByte ldb_idno;
    sWord ldb_size;
    uByte ldb_keymap;	/* ID of keymapType object */
    uByte ldb_lokey;	/* lowest MIDI key # */
    uByte ldb_hikey;	/* highest MIDI key # */
    sByte ldb_trans;	/* transpose (+/- semi-tones) */
    sByte ldb_dtune;	/* detune (+/- cents) */
    uByte ldb_delay;	/* delay (enum table 23) */
    sByte ldb_volume;	/* volume adjust (+/-dB) */
    sByte ldb_stereo;	/* stereo position */
    uByte ldb_effect;	/* compiled effect ID */
    uByte ldb_nLink;	/* compiled effect linkage */
    uByte ldb_kflags;	/* key state flags */
    uByte ldb_xflags;	/* effects flags */
    uByte ldb_enable;	/* enable switch (enum table #1) */
    uByte ldb_legato;	/* alt attack switch (enum table #1) */
    uByte ldb_vflags;	/* velocity trigger stuff */
    uByte ldb_dynam;	/* dynamic range (dB) */
    sByte ldb_keyTilt;	/* amplitude tilt (+/-dB) */
    uByte ldb_balCtl;	/* balance control (enum table #1) */
    sByte ldb_spRange;	/* soft pedal range (+/-dB) */
    sByte ldb_pwRange;	/* pitch wheel range (+/- quarter-tones) */
    uByte ldb_lastOut;	/* used by compiled effects */
    uByte ldb_rfu[7];
    } LDB;
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
/* 
 * Amplitude control patch block
 */
typedef struct
    {
    uByte type, idno;	/* = efxtype,1 */
    uByte rfu1[2];
    uByte amInput;	/* mod source (enum table #1) */
    uByte amDepth;	/* mod depth (enum table #1) */
    sByte amMin ,	/* min depth (dB) */
    sByte amMax;	/* max depth (dB) */
    uByte rfu2[8];
    } AFXB;
/*
 * Pitch control patch block
 */
typedef struct PFXB
    {
    uByte type, idno;	/* = efxType,2 */
    uByte rfu1[2];
    uByte fmInput;	/* mod source (enum table #1 */
    uByte fmDepth;	/* mod depth (enum table @1) */
    sByte fmMin;	/* min depth (cents) */
    sByte fmMax;	/* max depth (cents) */
    uByte rfu3;
    uByte dtCtl;	/* detune control (enum table #1 */
    sByte dtMin,	/* min value (cents) */
    sByte dtMax;	/* max value (cents) */
    uByte rfu2[4];
    } PFXB;
/* 
 * Envelope control patch block
 */
typedef struct ENCB
    {
    uByte type, idno;	/* = efxType,3 */
    uByte rfu1[2];
    struct
	{
	uByte rfu;
	uByte rateCtl;	/* control (enum table #1) */
	uByte minScale	/* min rate (enum table #5) */
	uByte maxScale;	/* max scale (enum table #5) */
	} atCtl,	/* attack rate */
    dtCtl,		/* decay rate */
    rtCtl;		/* release rate */
    } ENCB;
/*
 * ASR parameter block
 */
typedef struct ASRB
    {
    uByte asrb_type;	/* = asrType */
    uByte asrb_idno;
    uByte asrb_flags;
    uByte asrb_trig;	/* trigger input (enum table #1) */
    uByte asrb_dtime;	/* delay time (enum table #2) */
    uByte asrb_atime;	/* attack time (enum table #2) */
    uByte asrb_stime;	/* sustain time (unused) */
    uByte asrb_rtime;	/* release time (enum table #2) */
    } ASRB;
/*
 * asrb_flags
 */
#define asrb_hold 0x01	/* hold while trigger on */
#define asrb_rept 0x02	/* repeat while trigger on */
#define asrb_effect 0x80
/* 
 * LFO parameter block
 */
typedef struct
    {
    uByte lfob_type;	/* = lfoType */
    uByte lfob_idno;
    uByte lfob_rfu;
    uByte lfob_flags;
    uByte lfob_shape;	/* ID of shapeType object */
    uByte lfob_rtCtl;	/* rate control (enum table #1) */
    uByte lfob_rtMin;	/* min rate (enum table #4) */
    uByte lfob_rtMax;	/* max rate (enum table #4) */
    } LFOB;
/* 
 * lfob_flags
 */
#define lfob_phase 0x03	/* initial phase (0, 90, 180, 270) */
#define lfob_effect 0x80
/* 
 * envelope parameter block
 */
typedef struct
    {
    uByte envb_type;	/* = envType */
    uByte envb_idno;
    sWord envb_size;
    uByte envb_naSegs;	/* # attack segments */
    uByte envb_nrSegs;	/* # release segments */
    uByte envb_rfu[2];
    } ENVB;
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
typedef struct
    {
    sByte eseg_level;	/* level (enum table #28 or #29) */
    uByte eseg_time;	/* time (enum table #2) */
    } ESEG;
/*
 * INV/NEG data block
 */
typedef struct
    {
    uByte invb_type;	/* = invType */
    uByte invb_idno;
    uByte invb_rfu[2];
    uByte inub_inv1in;	/* input (enum table #1) */
    uByte invb_inv2in;
    uByte invb_neg1in;
    uByte invb_neg2in;
    }IHVB,
/*
 * MXR data block
 */
typedef struct
    {
    uByte mxrb_type;	/* = mxrType */
    uByte mxrb_ldno;
    uByte mxrb_rfu[2];
    uByte mxrb_in1A;	/* input (enum table #1) */
    uByte mxrb_in1B;
    Objects.h
    5
    uByte mxrb_in2A;
    uByte mxrb_in2B;
    }MXRB;
/* 
 * keymap (named)
 * converts key number and velocity to sound file, pitch, and amplitude
 */
typedef struct
    {
    uByte kmap_type;		/* = keymapType */
    uByte kmap_idno;
    sWord kmap_size;
    sWord kmap_loKey;		/* low MIDI key # */
    sWord kmap_nKeys;		/* # keys - 1 */
    sWord kmap_keyOff;		/* offset to key data */
    sWord kmap_nOctv;		/* notes/octove */
    sWord kmap_pitch;		/* pitch of lowest key */
    sWord kmap_cents;		/* cents/key */
    uByte kmap_flags;
    uByte kmap_sound;		/* ID of soundType object */
    uByte kmap_rfu1;
    uByte kmap_level;		/* # timbre levels */
    uByte kmap_timbre[nDYNAM];	/* timbre level map */
    uByte kmap_rfu2[4];
    } KMAP;
/* 
 * kmap_flags
 */
#define kmap_atten 0x01	/* 1 means separate atten/key */
#define kmap_tune 0x0C	/* tuning type */
/* 
 * the keymap data consists of byte/key arrays
 * 
 * switch (kmap_flags & kmap_tune)
 *   case 0x00: no tuning adjust
 *   case 0x04: relative byte (LSB only)
 *   case 0x08: relative word (MSB/LSB)
 *   case 0x0C: absolute word (MSB/LSB)
 * 
 * for (each timbre level) {
 * if (kmap_flags & kmap_atten)
 * amplitude adjust (1 byte/key) (8 * dB / 6)
 * if (kmap_sound == 0)
 * sound block ID (1 byte/key)
 * sound file header ID (1 byte/key)
 */
/* 
 * sound block (named)
 */
typedef struct sblk
    {
    uByte sblk_type;	/* = soundType */
    uByte sblk_idno;
    sWord sblk_size;
    sWord sblk_hBase;	/* base sound file ID # */
    sWord sblk_nHdrs;	/* # sound file headers - 1 */
    sWord sblk_hdrOff;	/* offset to 1st header */
    uByte sblk_rfu[6];
    } SBLK;
/* 
 * block header is followed by NUL-terminated name
 * then by array of sound file headers
 */
typedef struct sfh
    {
    uByte sfh_rootKey;	/* root MIDI key # */
    uByte sfh_flags;
    sWord sfh_atten;	/* amp adjust (dons) */
    sWord sfh_pitch;	/* pitch at highest play rate */
    uByte sfh_rfu1[2];
    long sfh_start1;	/* normal start sample address */
    long sfh_start2;	/* alternate start sample address */
    long sfh_loop;	/* loop point sample address */
    long sfh_end;	/* last sample address + 2 */
    sWord sfh_env1;	/* offset to normal envelope */
    sWord sfh_env2;	/* offset to alternate envelope */
    uByte sfh_rfu2[4];
    } SFH;
/* 
 * header array is followed by natural envelopes
 * each segment is two words:
 * 
 * delta-a,delta-s
 * 
 * where delta-s is the segment length in samples
 * and delta-a is the attack/decay rate computed as
 * 
 * delta-a = (2048 * delta-dB) / (6 * delta-s)
 * 
 * if the delta-a of the 1st segment is > 0,
 * a starting amplitude of 0 is assumed
 * otherwise, the amplitude starts at the maximum value
 * 
 * the last two segments are the decay and release segments
 * the delta-s for these must be 0
 * the delta-a should be computed using a delta-s which corresponds
 * to the # of samples in 10 msec at the highest playback rate
 * for the decay segment, delta-a may be zero (for infinite sustain)
 */
/* 
 * LFO shape table (named)
 *
 * header followed by name, then waveshape (256 words)
 * signed indexing is used so the offset is to the 0th entry
 * (ie, the middle of the table)
 */
typedef struct
    {
    char shapeTYPE;	/* shapeType */
    char shapeID;	/* ID # */
    sWord shapeSize;	/* size (bytes) */
    sWord shapeOffs;	/* offset to center point (0th entry) */
    } SHAPE;
/* 
 * MIDI List (named)
 * used to map MIDI Program change numbers to real program numbers
 */
typedef struct
    {
    uByte mlistTYPE;
    uByte mlistID;
    sWord mlistSize;
    sWord mlistBase;	/* base MIDI program */
    sWord mlistN;	/* # table entries - 1  */
    sWord mlistOff;	/* offset to 1st entry (byte) */
    } MLIST;
/* 
 * Intonation table (named)
 */
typedef struct
    {
    uByte itblTYPE;
    uByte itblID;
    sWord itblSize;
    sWord itblTbl[12];	/* [0] always 0 */
    /* entries in cents rel to equal temp */
    } ITBL;
/* 
 * Velocity map (named)
 */
typedef struct
    {
    uByte vmapTYPE;
    uByte vmapID;
    sWord vmapSize;
    uByte vmapVels[nDYNAM];	/* fff -> ppp */
    } VMAP;
/*
 * Data structure definitions for 1200 Demo objects
 * (from the V5 manual addendum)
 */
/* 
 * file type, first longword in file
 */
#define SROM 0x53524F4D
/* 
 * Demo object type and id declarations
 */
#define Demo1200 0x5B
#define DemoIDBase 1
/* 
 * object file header, one per file
 */
typedef struct
    {
    long DO_type;	/* Demo (SROM) */
    word DO_rfu[14];	/* must be 0 */
    long DO_blockSize;	/* negative block size */
    } dFHdr;
/* 
 * song header, one per song
 */
typedef struct
    {
    char DS_objType;	/* 0x5B is a Demo song */
    char DS_objID;	/* is (1..255) */
    word DS_objSize;	/* size of object */
    long DS_tempo;	/* actual initial beat increment */
    } demoSong;
/* name of the object goes here, before the song itself */
/* (must be null terminated, even number of bytes) */
