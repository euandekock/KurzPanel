#include<map>
#include<ostream>

#ifndef K_TABLELIST_H
#define K_TABLELIST_H

#include "k_dirlist.h"
#include "k_table.h"

class KurzTableList : public KurzDirList
	{
public:
    map<uint8, KurzTable> Tables;

    KurzTableList();
    ~KurzTableList();
	int getItemStatus(uint8 rowId, uint8 getItem);

	};


#endif // K_TABLELIST_H
