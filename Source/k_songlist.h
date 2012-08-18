#include<map>
#include<ostream>


#ifndef K_SONGLIST_H
#define K_SONGLIST_H

#include "k_dirlist.h"
#include "k_songobj.h"

class KurzSongList : public KurzDirList
	{
public:
	map<unsigned char, KurzSongObj> Song;

	KurzSongList();
	~KurzSongList();
	};


#endif // K_SONGLIST_H
