#include "k_direntry.h"

map<uint8, string> KurzDirEntry::kTypeName;

void KurzDirEntry::loadTypeName()
{
  if (kTypeName.size() == 0)
    {
      kTypeName.insert(pair<uint8, string>(unknownType, string("Unknown")));
      kTypeName.insert(pair<uint8, string>(blockType, string("Block")));
      kTypeName.insert(pair<uint8, string>(indexType, string("Internal Index")));
      kTypeName.insert(pair<uint8, string>(tableType, string("Master Table")));
      kTypeName.insert(pair<uint8, string>(shapeType, string("LFO Shape")));
      kTypeName.insert(pair<uint8, string>(soundType, string("Sound Block")));
      kTypeName.insert(pair<uint8, string>(keymapType, string("Keyboard Map")));
      kTypeName.insert(pair<uint8, string>(mlistType, string("MIDI Program List")));
      kTypeName.insert(pair<uint8, string>(menuType, string("Edit Menu Definition")));
      kTypeName.insert(pair<uint8, string>(mngType, string("Edit Menu Group")));
      kTypeName.insert(pair<uint8, string>(melType, string("Edit Menu Entry List")));
      kTypeName.insert(pair<uint8, string>(itblType, string("Intonation Table")));
      kTypeName.insert(pair<uint8, string>(fxType, string("Compiled Effects")));
      kTypeName.insert(pair<uint8, string>(vmapType, string("Velocity Map")));
      kTypeName.insert(pair<uint8, string>(pmapType, string("Pressure Map")));
      kTypeName.insert(pair<uint8, string>(editType, string("Editor Descriptor")));
      kTypeName.insert(pair<uint8, string>(progType, string("Program Data Block")));
      kTypeName.insert(pair<uint8, string>(layerType, string("Layer Data Block")));
      kTypeName.insert(pair<uint8, string>(asrType, string("ASR Parameter Block")));
      kTypeName.insert(pair<uint8, string>(lfoType, string("LFO Parameter Block")));
      kTypeName.insert(pair<uint8, string>(envType, string("Env Parameter Block")));
      kTypeName.insert(pair<uint8, string>(efxType, string("EFX Parameter Block")));
      kTypeName.insert(pair<uint8, string>(invType, string("Inv/Neg Parameter Block")));
      kTypeName.insert(pair<uint8, string>(mxrType, string("MXR Parameter Block")));
      kTypeName.insert(pair<uint8, string>(songType, string("Demo Song")));
      kTypeName.insert(pair<uint8, string>(plistType, string("Program List")));
      kTypeName.insert(pair<uint8, string>(bmapType, string("Bin Map")));
      kTypeName.insert(pair<uint8, string>(lastType, string("Last Type")));
    }
}

uint8 KurzDirEntry::sortCol;
bool KurzDirEntry::sortDir;

KurzDirEntry::KurzDirEntry() : ID(0), Name(""), Type((k_types)0), Size(0)
{
  sortCol = 0;
  sortDir = false;
  loadTypeName();
}
KurzDirEntry::KurzDirEntry(uint8 id) : ID(id), Name(""), Type((k_types)0), Size(0)
{
  sortCol = 0;
  sortDir = false;
  loadTypeName();
}
KurzDirEntry::KurzDirEntry(uint8 id, string name) : ID(id), Name(name), Type((k_types)0), Size(0)
{
  sortCol = 0;
  sortDir = false;
  loadTypeName();
}
KurzDirEntry::KurzDirEntry(uint8 *data) : Status(KITEM_EMPTY)
{
  const uint8 *ptr = data;
  sortCol = 0;
  sortDir = false;

  loadTypeName();

  Type = (k_types)ptr[2];
  TypeDesc = string(getTypeName(Type));

  ID = ptr[3];
  Size = ptr[4] << 24 | ptr[5] << 16 | ptr[6] << 8 | ptr[7];
  Zone = string((char *)&ptr[8], 4);
  Name = string((char *)&ptr[12]);

}
KurzDirEntry::~KurzDirEntry()
{
}

const string KurzDirEntry::getTypeName()
{
  return getTypeName(Type);
}
const string KurzDirEntry::getTypeName(const uint8 type)
{
  map<uint8, string>::iterator i;

  i = kTypeName.find(type);

  if (i != kTypeName.end())
    return i->second;
  else
    return NULL;
}
