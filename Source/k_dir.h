#include "k_dirlist.h"
#include "k_tablelist.h"
#include "k_lfoshapelist.h"
#include "k_programlist.h"
#include "k_songlist.h"

#ifndef  K_DIR_H
#define  K_DIR_H

/*
TODO:
See kurz_connection.cpp

We need to move all the generic message buildup and processing to this class
*/

class KurzDir
	{
    string msg;
    uint msgSize;

    public:

    enum KurzMsgStatus
        {
        KMSG_EMPTY = 0,
        KMSG_BAD,
        KMSG_OK,
        KMSG_GOOD
        };

	KurzDir();
    ~KurzDir();

    void addMessage(KurzSysexMsg *Msg);
    void newMessage(KurzSysexMsg *Msg);
    void decodeMessage(string &msg);

    KurzMsgStatus msgStatus;
    /*
	 * Holds a set of classes, one for each allowable Directory Type
	 */
    KurzTableList MasterTable;
	KurzLFOShapeList LFOShapes;
	KurzDirList SoundBlock;
	KurzDirList KBDMap;
	KurzDirList MIDIProgList;
	KurzDirList Intonations;
	KurzDirList CompiledEffects;
	KurzDirList VelocityMaps;
	KurzDirList PressureMaps;
	KurzDirList EditorDescriptor;
	KurzProgramList Programs;
	KurzDirList Layers;
	KurzDirList SongList;
	KurzDirList PLists;
	KurzDirList BinList;
	KurzDirList OtherItems;
	};
#endif // K_DIR_H

/*
42 MasterTable
44 LFOShapes
45 SoundBlock
46 KBDMap
47 MIDIProgList
4B Intonations
4C CompiledEffects
4D VelocityMaps
4E PressureMaps
4F EditorDescriptor
50 Programs
51 Layers
5B SongList
5E PLists
5F Bin List
*/

