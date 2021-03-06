#include<map>
#include<ostream>


#ifndef K_PROGRAMLIST_H_
#define K_PROGRAMLIST_H_

#include "k_dirlist.h"
#include "k_program.h"

class KurzProgramList : public KurzDirList
	{
public:
	map<unsigned char, KurzProgram> Program;

	KurzProgramList();
	~KurzProgramList();
	int getItemStatus(uint8 rowId, uint8 getItem);
	};


#endif // K_PROGRAMLIST_H_
