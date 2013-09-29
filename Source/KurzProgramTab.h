/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  14 Oct 2012 11:02:51pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_KURZPROGRAMTAB_KURZPROGRAMTAB_4A73F109__
#define __JUCER_HEADER_KURZPROGRAMTAB_KURZPROGRAMTAB_4A73F109__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "FilmStripKnob.h"
#include "k_dir.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class KurzProgramTab  : public Component,
                        public ComboBoxListener
{
public:
    //==============================================================================
    KurzProgramTab (KurzDir &DirObj, KurzProgram &Prg);
    ~KurzProgramTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);

    // Binary resources:
    static const char* greenWrap40_png;
    static const int greenWrap40_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    KurzDir &Dir;
    KurzProgram &Program;
    //[/UserVariables]

    //==============================================================================
    GroupComponent* gLFO1grp;
    GroupComponent* gASR2grp;
    GroupComponent* gASR1grp;
    GroupComponent* gLFO2grp1;
    FilmStripKnob* gLFO1Phase;
    FilmStripKnob* gLFO1Min;
    FilmStripKnob* gLFO1Max;
    Label* lShape;
    Label* lPhase1;
    Label* lMin1;
    Label* lMax1;
    FilmStripKnob* gLFO2Phase;
    FilmStripKnob* gLFO2Min;
    FilmStripKnob* gLFO2Max;
    Label* lShape2;
    Label* lPhase2;
    Label* lMin2;
    Label* lMax2;
    FilmStripKnob* gASR1Delay;
    FilmStripKnob* gASR1Attack;
    FilmStripKnob* gASR1Release;
    FilmStripKnob* gASR1Sustain;
    Label* lDelay1;
    Label* lAttack1;
    Label* lRelease1;
    Label* lSustain1;
    FilmStripKnob* gASR2Delay;
    FilmStripKnob* gASR2Attack;
    FilmStripKnob* gASR2Release;
    FilmStripKnob* gASR2Sustain;
    Label* lDelay2;
    Label* lAttack2;
    Label* lRelease2;
    Label* lSustain2;
    ComboBox* gLFO1Shape;
    ComboBox* gLFO2Shape;
    Label* lRateC;
    ComboBox* gLFO1RateC;
    Label* lRateC2;
    ComboBox* gLFO2RateC;
    ComboBox* gASR1Trig;
    Label* lRateC3;
    ComboBox* gASR2Trig;
    Label* lRateC4;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KurzProgramTab);
};


#endif   // __JUCER_HEADER_KURZPROGRAMTAB_KURZPROGRAMTAB_4A73F109__
