#include<map>
#include<ostream>

#ifndef K_LFOSHAPELIST_H
#define K_LFOSHAPELIST_H

#include "k_dirlist.h"
#include "k_lfoshape.h"

class KurzLFOShapeList : public KurzDirList
	{
public:
	map<uint8, KurzLFOShape> LFOShapes;

	KurzLFOShapeList();
	~KurzLFOShapeList();
	int getItemStatus(uint8 rowId, uint8 getItem);

	//virtual void ItemReady(uint8 Context);
	//virtual void ShowItem(uint8 itemID);

	};


#endif // K_LFOSHAPELIST_H
