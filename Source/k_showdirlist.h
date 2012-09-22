/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  18 Aug 2012 5:55:41pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_KSHOWDIRLIST_KSHOWDIRLIST_6B20DB6A__
#define __JUCER_HEADER_KSHOWDIRLIST_KSHOWDIRLIST_6B20DB6A__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
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
    k_ShowDirList (KurzDirList *listQ);
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



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Font font;
    //vector <KurzDirEntry> *internalQ;
    KurzDirList *internalQ;
    //[/UserVariables]

    //==============================================================================
    TableListBox* DirTableList;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    k_ShowDirList (const k_ShowDirList&);
    const k_ShowDirList& operator= (const k_ShowDirList&);
};


#endif   // __JUCER_HEADER_KSHOWDIRLIST_KSHOWDIRLIST_6B20DB6A__
