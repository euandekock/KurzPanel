#include "k_lfoshapelist.h"

	KurzLFOShapeList::KurzLFOShapeList() : KurzDirList(shapeType, "LFO Shape List")
		{
		}
	KurzLFOShapeList::~KurzLFOShapeList()
		{
		}

	int KurzLFOShapeList::getItemStatus(uint8 rowId, uint8 getItem)
		{
		KurzDirEntry entry = List[rowId];
		if(entry.Status == KurzDirEntry::KITEM_EMPTY)
			{
			if(getItem > 0)
				{
				uint8 msg_LFO[16] = {0x00, 0x0C, 0x64, 0x02, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

				//Calculate the 7 Bit field and mask values
				msg_LFO[5] = entry.ID & 0x7f;

				msg_LFO[6] = (entry.Size >> 24) & 0x7f;
				msg_LFO[7] = (entry.Size >> 16) & 0x7f;
				msg_LFO[8] = (entry.Size >> 8) & 0x7f;

				msg_LFO[9] = (entry.ID & 0x80) >> 3;
				msg_LFO[9] |= ((entry.Size >> 24) & 0x80) >> 4;
				msg_LFO[9] |= ((entry.Size >> 16) & 0x80) >> 5;
				msg_LFO[9] |= ((entry.Size >> 8) & 0x80) >> 6;

				msg_LFO[10] = entry.Size & 0x7f;
				msg_LFO[15] = ((entry.Size) & 0x80) >> 3;
				remoteLink->sendDataPacket(msg_LFO, 16);
				}


			return KurzDirEntry::KITEM_EMPTY;
			}
		else
			{
			return KurzDirEntry::KITEM_FULL;
			}
		}
/*
All view functionality is being removed from the main k_dir data objects
The fetch functionality should probably be rewritten here or elsewhere to build up a fetch sysex message
if the data item is empty.

EG:
getFetchReq(itemID, sysexMsg)
isItemReady(itemID)


	void KurzLFOShapeList::ShowItem(uint8 itemID)
		{
		map<uint8, KurzLFOShape>::iterator i;
		KurzDirEntry &entry = List[itemID];

		if(entry.Status == KurzDirEntry::KITEM_FULL)
			{

			i = LFOShapes.find(itemID);

			if(i != LFOShapes.end())
				{
				KurzLFOShape &shape = i->second;
				KurzViewLFOShape *LFOView = new KurzViewLFOShape(shape.vectWave);

				DialogWindow::showModalDialog(String(entry.Name.c_str()), LFOView, LFOView, Colours::black, false, true, true);

				delete LFOView;
				}
			}
		else
			{

			uint8 msg_LFO[16] = {0x00, 0x0C, 0x64, 0x02, 0x44, 0x0F, 0x00, 0x00, 0x02, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00};

			//Calculate the 7 Bit field and mask values
			msg_LFO[5] = entry.ID & 0x7f;

			msg_LFO[6] = (entry.Size >> 24) & 0x7f;
			msg_LFO[7] = (entry.Size >> 16) & 0x7f;
			msg_LFO[8] = (entry.Size >> 8) & 0x7f;

			msg_LFO[9] = (entry.ID & 0x80) >> 3;
			msg_LFO[9] |= ((entry.Size >> 24) & 0x80) >> 4;
			msg_LFO[9] |= ((entry.Size >> 16) & 0x80) >> 5;
			msg_LFO[9] |= ((entry.Size >> 8) & 0x80) >> 6;

			msg_LFO[10] = entry.Size & 0x7f;
			msg_LFO[15] = ((entry.Size) & 0x80) >> 3;

			//remoteLink->sendDataPacket(msg_LFO, 16);
			}
		}
	void KurzLFOShapeList::ItemReady(uint8 Context)
		{
		if(Context > 0)
			ShowItem(Context);
		}
*/
