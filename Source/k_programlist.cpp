#include "k_programlist.h"

KurzProgramList::KurzProgramList() :KurzDirList(progType, "Program Lists")
    {
    }
KurzProgramList::~KurzProgramList()
    {
    }
int KurzProgramList::getItemStatus(uint8 rowId, uint8 getItem)
    {
    KurzDirEntry entry = List[rowId];
    if(entry.Status == KurzDirEntry::KITEM_EMPTY)
        {
        if(getItem > 0)
            {
            uint8 msg_PROG[16] = {0x00, 0x0C, 0x64, 0x02, progType, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

            //Calculate the 7 Bit field and mask values
            msg_PROG[5] = entry.ID & 0x7f;

            msg_PROG[6] = (entry.Size >> 24) & 0x7f;
            msg_PROG[7] = (entry.Size >> 16) & 0x7f;
            msg_PROG[8] = (entry.Size >> 8) & 0x7f;

            msg_PROG[9] = (entry.ID & 0x80) >> 4;
            msg_PROG[9] |= ((entry.Size >> 24) & 0x80) >> 5;
            msg_PROG[9] |= ((entry.Size >> 16) & 0x80) >> 6;
            msg_PROG[9] |= ((entry.Size >> 8) & 0x80) >> 7;

            msg_PROG[10] = entry.Size & 0x7f;
            msg_PROG[15] = ((entry.Size) & 0x80) >> 3;
            remoteLink->sendDataPacket(msg_PROG, 16);
            }



        return KurzDirEntry::KITEM_EMPTY;
        }
    else
        {
        return KurzDirEntry::KITEM_FULL;
        }
    }

