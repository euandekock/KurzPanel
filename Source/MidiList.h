/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  14 Dec 2012 11:03:12pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_MIDILIST_MIDILIST_4382BBC6__
#define __JUCER_HEADER_MIDILIST_MIDILIST_4382BBC6__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
using namespace std;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MidiList  : public Component,
                  public ComboBoxListener,
                  public ButtonListener
{
public:
    //==============================================================================
    MidiList (int &inSelection, int &outSelection);
    ~MidiList();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    int *inSel, *outSel;
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    GroupComponent* groupComponent;
    Label* label;
    Label* label2;
    ComboBox* cbOutput;
    ComboBox* cbInput;
    TextButton* btOK;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MidiList);
};


#endif   // __JUCER_HEADER_MIDILIST_MIDILIST_4382BBC6__
