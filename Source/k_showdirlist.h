/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  30 Sep 2012 1:22:41am

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_KSHOWDIRLIST_KSHOWDIRLIST_9A469E7E__
#define __JUCER_HEADER_KSHOWDIRLIST_KSHOWDIRLIST_9A469E7E__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include "k_dir.h"
#include "k_direntry.h"
#include "k_dirlist.h"
#include "k_program.h"
#include "k_programlist.h"
#include "k_lfoshape.h"
#include "k_lfoshapelist.h"
#include "kurz_view_lfo_shape.h"
#include "KurzShowProgram.h"
using namespace std;

/*
 * We forward declare KurzDirList here, so we can reference it in the constructor
 * template in the header, and then include the actual header k_dirlist.h
 * in the .cpp file. This gets around the circular reference problem.
 */
//class KurzDirList;

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class k_ShowDirList  : public Component,
                       public TableListBoxModel
{
public:
    //==============================================================================
    k_ShowDirList (KurzDir &DirObj, KurzDirList *listQ);
    ~k_ShowDirList();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
     //KurzLFOShapeList &LFOShapeList;

    // TableListBoxModel Virtual Overrides
    int getNumRows();
    void paintRowBackground(juce::Graphics&, int, int, int, bool);
    void paintCell(juce::Graphics&, int, int, int, int, bool);
    void sortOrderChanged(int, bool);
    static bool compareKL(const KurzDirEntry &a, const KurzDirEntry &b);
    void cellDoubleClicked(int rowNumber, int columnId, const MouseEvent &e);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Font font;
    //vector <KurzDirEntry> *internalQ;
    KurzDir &Dir;
    KurzDirList *internalQ;
    //[/UserVariables]

    //==============================================================================
    TableListBox* DirTableList;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (k_ShowDirList);
};


#endif   // __JUCER_HEADER_KSHOWDIRLIST_KSHOWDIRLIST_9A469E7E__
