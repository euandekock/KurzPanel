/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  23 Sep 2012 2:26:08am

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_KURZPROGRAMTAB_KURZPROGRAMTAB_FC528E91__
#define __JUCER_HEADER_KURZPROGRAMTAB_KURZPROGRAMTAB_FC528E91__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
#include "k_program.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class KurzProgramTab  : public Component,
                        public TableListBoxModel
{
public:
    //==============================================================================
    KurzProgramTab (KurzProgram &Prog);
    ~KurzProgramTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    // TableListBoxModel Virtual Overrides
    int getNumRows();
    void paintRowBackground(juce::Graphics&, int, int, int, bool);
    void paintCell(juce::Graphics&, int, int, int, int, bool);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Font font;
    KurzProgram &Program;
    uint8 rowCount;
    //[/UserVariables]

    //==============================================================================
    TableListBox* ProgramParam;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KurzProgramTab);
};


#endif   // __JUCER_HEADER_KURZPROGRAMTAB_KURZPROGRAMTAB_FC528E91__
