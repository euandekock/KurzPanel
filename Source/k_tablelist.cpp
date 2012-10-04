#include "k_tablelist.h"

KurzTableList::KurzTableList() : KurzDirList(tableType, "Table List")
    {
    }
KurzTableList::~KurzTableList()
    {
    }

int KurzTableList::getItemStatus(uint8 rowId, uint8 getItem)
    {
    KurzDirEntry entry = List[rowId];
    if(entry.Status == KurzDirEntry::KITEM_EMPTY)
        {
        if(getItem > 0)
            {
            uint8 msg_Tab[16] = {0x00, 0x0C, 0x64, 0x02, tableType, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

            //Calculate the 7 Bit field and mask values
            msg_Tab[5] = entry.ID & 0x7f;

            msg_Tab[6] = (entry.Size >> 24) & 0x7f;
            msg_Tab[7] = (entry.Size >> 16) & 0x7f;
            msg_Tab[8] = (entry.Size >> 8) & 0x7f;

            msg_Tab[9] = (entry.ID & 0x80) >> 3;
            msg_Tab[9] |= ((entry.Size >> 24) & 0x80) >> 4;
            msg_Tab[9] |= ((entry.Size >> 16) & 0x80) >> 5;
            msg_Tab[9] |= ((entry.Size >> 8) & 0x80) >> 6;

            msg_Tab[10] = entry.Size & 0x7f;
            msg_Tab[15] = ((entry.Size) & 0x80) >> 3;
            remoteLink->sendDataPacket(msg_Tab, 16);
            }


        return KurzDirEntry::KITEM_EMPTY;
        }
    else
        {
        return KurzDirEntry::KITEM_FULL;
        }
    }
