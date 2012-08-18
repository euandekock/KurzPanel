#include "k_dir.h"


KurzDir::KurzDir() :
	MasterTable(progType, "Master Table"),
	//LFOShapes(shapeType, "LFO Shapes"),
	SoundBlock(soundType, "Sound Blocks"),
	KBDMap(keymapType, "Keyboard Maps"),
	MIDIProgList(mlistType, "MIDI Program Lists"),
	Intonations(itblType, "Intonations"),
	CompiledEffects(fxType, "Compiled Efects"),
	VelocityMaps(vmapType, "Velocity Maps"),
	PressureMaps(pmapType, "Pressure Maps"),
	EditorDescriptor(editType, "Editor Description"),
	//Programs(progType, "Programs"),
	Layers(layerType, "Layers"),
	SongList(songType, "Song Lists"),
	PLists(plistType, "PLists"),
	BinList(bmapType, "Bin Maps"),
	OtherItems(lastType, "Others")
	{
	}
KurzDir::~KurzDir()
	{
	}
