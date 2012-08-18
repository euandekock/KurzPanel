#include<map>
#include<string>
using namespace std;

#include "types.h"


#ifndef k_direntry_h
#define k_direntry_h


class KurzDirEntry
	{
private:
	static map<uint8, string> kTypeName;
	void loadTypeName();

public:
  enum ItemStatus
          {
          KITEM_EMPTY = 0,
          KITEM_FULL
          };
        KurzDirEntry();
	KurzDirEntry(uint8 id);
	KurzDirEntry(uint8 id, string name);
	KurzDirEntry(uint8 *data);
	~KurzDirEntry();

	k_types Type;
	string TypeDesc;
	uint8 ID;
	string Zone;
	string Name;
	int Size;
	ItemStatus Status;

	/*
	 * Get the Type name for a message
	 */

	const string getTypeName();
	const string getTypeName(const uint8 type);

	static uint8 sortCol;
	static bool sortDir;
	};

#endif // k_direntry_h
