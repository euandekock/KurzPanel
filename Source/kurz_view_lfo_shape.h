/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  22 Jul 2012 1:20:44am

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_KURZVIEWLFOSHAPE_KURZVIEWLFOSHAPE_C7939084__
#define __JUCER_HEADER_KURZVIEWLFOSHAPE_KURZVIEWLFOSHAPE_C7939084__

//[Headers]     -- You can add your own extra header files here --

#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>
using namespace std;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class KurzViewLFOShape  : public Component
{
public:
    //==============================================================================
    KurzViewLFOShape (vector<int16> &wave);
    ~KurzViewLFOShape();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    vector<int16> &LFOShape;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    KurzViewLFOShape (const KurzViewLFOShape&);
    const KurzViewLFOShape& operator= (const KurzViewLFOShape&);
};


#endif   // __JUCER_HEADER_KURZVIEWLFOSHAPE_KURZVIEWLFOSHAPE_C7939084__
