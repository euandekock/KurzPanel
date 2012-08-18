#ifndef K_DIRLIST_H_
#define K_DIRLIST_H_

#include<vector>
#include<iostream>

#include "types.h"
#include "kurz_connection.h"
#include "k_direntry.h"

class KurzDirList
	{
private:

public:
  enum ListStatus
          {
          KDIR_EMPTY = 0,
          KDIR_FILLING,
          KDIR_OK
          };

	ListStatus Status;
	string TypeDesc;
	k_types Type;

	KurzDirList(k_types type, string typeDesc);
	~KurzDirList();
	virtual int getItemStatus(uint8 itemId, uint8 getItem);

/*
	virtual void ListReady(uint8 Context);
	virtual void ShowList();
	virtual void ItemReady(uint8 Context);
	virtual void ShowItem(uint8 itemID);
	ObjListComponent *objListComp;
*/
	void setSysexLink(KurzConnection *rLink)
		{
		remoteLink = rLink;
		}
	KurzConnection *remoteLink;
	vector<KurzDirEntry> List;
	};


#endif // K_DIRLIST_H_
