#include "k_dirlist.h"

KurzDirList::KurzDirList(k_types type, string typeDesc) : Status(KDIR_EMPTY), Type(type), TypeDesc(typeDesc)
    {
    }
KurzDirList::~KurzDirList()
    {
    }
int KurzDirList::getItemStatus(uint8 itemId, uint8 getItem)
    {
    return KurzDirEntry::KITEM_EMPTY;
    }
/*
All View functionality is now handled externally.
void KurzDirList::ListReady(uint8 Context)
    {
    switch(Context)
        {
        case 0:
            ShowList();
            break;
        }
    }
*/
/*
All View functionality is now handled externally.

void KurzDirList::ShowList()
    {
    if(Status == KDIR_OK)
        {
        DialogWindow::showDialog(String(TypeDesc.c_str()), objListComp, objListComp, Colours::black, false, true, true);
        objListComp->resized();
        }
    }
*/

/*
void KurzDirList::ItemReady(uint8 Context)
    {
    }
void KurzDirList::ShowItem(uint8 itemID)
    {
    }
*/
