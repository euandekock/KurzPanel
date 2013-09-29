/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  29 Sep 2012 12:13:47am

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_TESTKNOB_TESTKNOB_F4884EF1__
#define __JUCER_HEADER_TESTKNOB_TESTKNOB_F4884EF1__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "FilmStripKnob.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class testKnob  : public Component,
                  public SliderListener
{
public:
    //==============================================================================
    testKnob ();
    ~testKnob();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);

    // Binary resources:
    static const char* greenWrap40_png;
    static const int greenWrap40_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Image greenFilmStrip;
    FilmStripKnob *greenKnob[10];
    //[/UserVariables]

    //==============================================================================
    Slider* slider;
    FilmStripKnob* greenKnob2;
    FilmStripKnob* greenKnob3;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (testKnob);
};


#endif   // __JUCER_HEADER_TESTKNOB_TESTKNOB_F4884EF1__
