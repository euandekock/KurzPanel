/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  4 Oct 2012 10:36:53pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_KURZSHOWPROGRAM_KURZSHOWPROGRAM_21649525__
#define __JUCER_HEADER_KURZSHOWPROGRAM_KURZSHOWPROGRAM_21649525__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
#include "k_dir.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class KurzShowProgram  : public Component
{
public:
    //==============================================================================
    KurzShowProgram (KurzProgram &Prog, KurzDir &DirObj);
    ~KurzShowProgram();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    KurzProgram &Program;
    KurzDir &Dir;
    Font font;
    //[/UserVariables]

    //==============================================================================
    TabbedComponent* tabbedComponent;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KurzShowProgram);
};


#endif   // __JUCER_HEADER_KURZSHOWPROGRAM_KURZSHOWPROGRAM_21649525__
