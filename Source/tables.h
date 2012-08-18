/*
 *
 *  Tables.h
 *  Tuesday, February 23, 1988 7:15 PM
 */
/*
 * standard table header
 */
typedef struct TBLHDR
    {
    uByte tbl_type;	/* = tableType */
    uByte tbl_idno;
    sWord tbl_size;
    } TBLHDR;
/* 
 * time enumeration entry
 */
struct enumTime
    {
    uWord ticks;	/* msec / 10 */
    uWord delta;	/* 32767 / ticks */
    uWord slop;		/* 32767 % ticks */
    uWord rfu;
    };
/* 
 * lfo rate enumeration
 */
struct enumRate
    {
    uWord roffs;	/* offset into rate table entry */
    uWord hertz;	/* hertz * 100 */
    };
/* 
 * control source enumeration
 */
struct enumCtls
    {
    uByte type;
    uByte idno;
    sWord offs;	/* offset to name string */
    };
/* 
 * envelope scale factor table header
 */
struct envScaleHdr
    {
    sWord base;		/* offset to 0th entry */
    sWord low, high;	/* valid index range */
    sWord dispNom;	/* display value denominator */
    }
/* 
 * table entry
 */
struct envScaleEnt
    {
    sWord multOff;	/* offset into log multiplier table */
    sWord dispNum;	/* display value numerator */
    }
/* 
 * table IDs
 */
enum
    {
    enumCtlsID = 1,	/*   1  - control source enum */
    enumTimeID,		/*   2  - ENV/ASR time enum */
    enumDelayID,	/*   3  - layer delay enum */
    enumRateID,		/*   4  - LFO rate enum */
    envScaleID,		/*   5  - EMU rate scale factor anum */
    logScaleID,		/*   6  - log multiplier table */
    prcTableID,		/*   7  - playback rate compensation */
    pidTableID,		/*   8  - parameter ID table */
    mnpTableID,		/*   9  - menu position table ID */
    defTableID,		/*  10  - default object table */
    ctlMapID,		/*  11  - MIDI control mapping table */
    btnTableID,		/*  12  - front panel button table */
    diagTblID,		/*  13  - diagnostic table */
    productID,		/*  14  - product  ID/configuration */
    arcTableID,		/*  15  - Arnold configuration */
    masterID,		/*  16  - initial master parameters */
    omtID,		/*  17  - object mapping table (program only) */
    pseudoID,		/*  18  - Pseudo parameters (program only) */
    attenMapID = 21,	/*  21  - velocity -> attenuation table */
    velocMapID,		/*  22  - velocity -> control value table */
    pressMapID,		/*  23  - pressure -> control value table */
    volTableID,		/*  24  - volume control table */
    balTableID,		/*  25  - balance control table */
    playRateID,		/*  26  - playback rate table */
    lfoDeltaID,		/*  27  - LFO phase increment table */
    envValueID,		/*  28  - bi-polar EMU level enumeration */
    ampValueID,		/*  29  - amplitude EMU level enumeration */
    atkTableID,		/*  30  - amplitude EMU attack table */
    typeTableID
    };
