/*
 *
 *  Types.h 
 *  Tuesday, February 23, 1988 7:04 PM
 */
/*
 * object type numbers
 */

#ifndef TYPES_H
#define TYPES_H

// Include this here so we always get consistent data types...
#include "../JuceLibraryCode/JuceHeader.h"

enum k_types
    {
    unknownType = 0,
    blockType = 64,	/*  64  $40   - ignore */
    indexType,		/*  65  $41   - internal  index */
    tableType,		/*  66  $42   - Master Table */
    shapeType = 68,	/*  68  $44   - LFO Shape Table (named) */
    soundType,		/*  69  $45   - Sound Block (named) */
    keymapType,		/*  70  $46   - Keyboard Map (named) */
    mlistType,		/*  71  $47   - MIDI Program List (named) */
    menuType,		/*  72  $48   - Edit Menu */
    mngType,		/*  73  $49   - Edit Menu Group */
    melType,		/*  74  $4A   - Edit Menu Element */
    itblType,		/*  75  $4B   - Intonation Table (named) */
    fxType,		/*  76  $4C   - Compiled Effects */
    vmapType,		/*  77  $4D   - (Rcv) Velocity Map (named) */
    pmapType,		/*  78  $4E   - Rcv Pressure Map (named), V5 */
    editType = 79,	/*  79  $4F   - Editor */
    progType,		/*  80  $50   - Program Data (named) */
    layerType,		/*  81  $51   - Layer Data (named) */
    asrType,		/*  82  $52   - ASR Parameter Block */
    lfoType,		/*  83  $53   - LFO Parameter Block */
    envType,		/*  84  $54   - ENV Parameter Block */
    efxType,		/*  85  $55   - EFX Parameter Block */
    invType,		/*  86  $56   - INV/NEG Parameter Block */
    mxrType,		/*  87  $57   - MXR Parameter Block */
    songType = 91,	/*  91  $5B   - Demo Song (named), V5 */
    plistType = 94,	/*  94  $5E   - Program List, V5 */
    bmapType,		/*  95  $5F   - Bin Map, V5 */
    lastType
    /*  keep last! */
    };

#define baseType blockType
#define globidno 8
/* base id # for globals */

#endif //TYPES_H
