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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "KurzProgramTab1.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
KurzProgramTab::KurzProgramTab (KurzDir &DirObj, KurzProgram &Prg)
    : Component ("Program Tab"),
      Dir(DirObj), Program(Prg),
      gLFO1grp (0),
      gASR2grp (0),
      gASR1grp (0),
      gLFO2grp1 (0),
      gLFO1Phase (0),
      gLFO1Min (0),
      gLFO1Max (0),
      lShape (0),
      lPhase1 (0),
      lMin1 (0),
      lMax1 (0),
      gLFO2Phase (0),
      gLFO2Min (0),
      gLFO2Max (0),
      lShape2 (0),
      lPhase2 (0),
      lMin2 (0),
      lMax2 (0),
      gASR1Delay (0),
      gASR1Attack (0),
      gASR1Release (0),
      gASR1Sustain (0),
      lDelay1 (0),
      lAttack1 (0),
      lRelease1 (0),
      lSustain1 (0),
      gASR2Delay (0),
      gASR2Attack (0),
      gASR2Release (0),
      gASR2Sustain (0),
      lDelay2 (0),
      lAttack2 (0),
      lRelease2 (0),
      lSustain2 (0),
      gLFO1Shape (0),
      gLFO2Shape (0),
      lRateC (0),
      gLFO1RateC (0),
      lRateC2 (0),
      gLFO2RateC (0),
      gASR1Trig (0),
      lRateC3 (0),
      gASR2Trig (0),
      lRateC4 (0)
{
    addAndMakeVisible (gLFO1grp = new GroupComponent ("gLFO1",
                                                      "gLFO1"));
    gLFO1grp->setTextLabelPosition (Justification::centred);

    addAndMakeVisible (gASR2grp = new GroupComponent ("gASR2",
                                                      "gASR2"));
    gASR2grp->setTextLabelPosition (Justification::centred);

    addAndMakeVisible (gASR1grp = new GroupComponent ("gASR1",
                                                      "gASR1"));
    gASR1grp->setTextLabelPosition (Justification::centred);

    addAndMakeVisible (gLFO2grp1 = new GroupComponent ("gLFO2",
                                                       "gLFO2"));
    gLFO2grp1->setTextLabelPosition (Justification::centred);

    addAndMakeVisible (gLFO1Phase = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gLFO1Phase->setExplicitFocusOrder (2);
    gLFO1Phase->setName ("gLFO1 Phase");

    addAndMakeVisible (gLFO1Min = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gLFO1Min->setExplicitFocusOrder (3);
    gLFO1Min->setName ("gLFO1 Min");

    addAndMakeVisible (gLFO1Max = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gLFO1Max->setExplicitFocusOrder (4);
    gLFO1Max->setName ("gLFO1 Max");

    addAndMakeVisible (lShape = new Label ("lShape",
                                           "Shape"));
    lShape->setFont (Font (15.0000f, Font::plain));
    lShape->setJustificationType (Justification::centredLeft);
    lShape->setEditable (false, false, false);
    lShape->setColour (TextEditor::textColourId, Colours::black);
    lShape->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lPhase1 = new Label ("lPhase",
                                            "Phase"));
    lPhase1->setFont (Font (15.0000f, Font::plain));
    lPhase1->setJustificationType (Justification::centredLeft);
    lPhase1->setEditable (false, false, false);
    lPhase1->setColour (TextEditor::textColourId, Colours::black);
    lPhase1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lMin1 = new Label ("lMin1",
                                          "Min"));
    lMin1->setFont (Font (15.0000f, Font::plain));
    lMin1->setJustificationType (Justification::centredLeft);
    lMin1->setEditable (false, false, false);
    lMin1->setColour (TextEditor::textColourId, Colours::black);
    lMin1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lMax1 = new Label ("lMax1",
                                          "Max"));
    lMax1->setFont (Font (15.0000f, Font::plain));
    lMax1->setJustificationType (Justification::centredLeft);
    lMax1->setEditable (false, false, false);
    lMax1->setColour (TextEditor::textColourId, Colours::black);
    lMax1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (gLFO2Phase = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gLFO2Phase->setExplicitFocusOrder (6);
    gLFO2Phase->setName ("gLFO2 Phase");

    addAndMakeVisible (gLFO2Min = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gLFO2Min->setExplicitFocusOrder (7);
    gLFO2Min->setName ("gLFO2 Min");

    addAndMakeVisible (gLFO2Max = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gLFO2Max->setExplicitFocusOrder (8);
    gLFO2Max->setName ("gLFO2 Max");

    addAndMakeVisible (lShape2 = new Label ("lShape",
                                            "Shape"));
    lShape2->setFont (Font (15.0000f, Font::plain));
    lShape2->setJustificationType (Justification::centredLeft);
    lShape2->setEditable (false, false, false);
    lShape2->setColour (TextEditor::textColourId, Colours::black);
    lShape2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lPhase2 = new Label ("lPhase",
                                            "Phase"));
    lPhase2->setFont (Font (15.0000f, Font::plain));
    lPhase2->setJustificationType (Justification::centredLeft);
    lPhase2->setEditable (false, false, false);
    lPhase2->setColour (TextEditor::textColourId, Colours::black);
    lPhase2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lMin2 = new Label ("lMin1",
                                          "Min"));
    lMin2->setFont (Font (15.0000f, Font::plain));
    lMin2->setJustificationType (Justification::centredLeft);
    lMin2->setEditable (false, false, false);
    lMin2->setColour (TextEditor::textColourId, Colours::black);
    lMin2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lMax2 = new Label ("lMax1",
                                          "Max"));
    lMax2->setFont (Font (15.0000f, Font::plain));
    lMax2->setJustificationType (Justification::centredLeft);
    lMax2->setEditable (false, false, false);
    lMax2->setColour (TextEditor::textColourId, Colours::black);
    lMax2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (gASR1Delay = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR1Delay->setExplicitFocusOrder (9);
    gASR1Delay->setName ("gASR1 Delay");

    addAndMakeVisible (gASR1Attack = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR1Attack->setExplicitFocusOrder (10);
    gASR1Attack->setName ("gASR1 Attack");

    addAndMakeVisible (gASR1Release = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR1Release->setExplicitFocusOrder (11);
    gASR1Release->setName ("gASR1 Release");

    addAndMakeVisible (gASR1Sustain = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR1Sustain->setExplicitFocusOrder (12);
    gASR1Sustain->setName ("gASR1 Sustain");

    addAndMakeVisible (lDelay1 = new Label ("lDelay",
                                            "Delay"));
    lDelay1->setFont (Font (15.0000f, Font::plain));
    lDelay1->setJustificationType (Justification::centredLeft);
    lDelay1->setEditable (false, false, false);
    lDelay1->setColour (TextEditor::textColourId, Colours::black);
    lDelay1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lAttack1 = new Label ("lAttack",
                                             "Attack"));
    lAttack1->setFont (Font (15.0000f, Font::plain));
    lAttack1->setJustificationType (Justification::centredLeft);
    lAttack1->setEditable (false, false, false);
    lAttack1->setColour (TextEditor::textColourId, Colours::black);
    lAttack1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lRelease1 = new Label ("lRelease 1",
                                              "Release"));
    lRelease1->setFont (Font (15.0000f, Font::plain));
    lRelease1->setJustificationType (Justification::centredLeft);
    lRelease1->setEditable (false, false, false);
    lRelease1->setColour (TextEditor::textColourId, Colours::black);
    lRelease1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lSustain1 = new Label ("lSustain",
                                              "Sustain"));
    lSustain1->setFont (Font (15.0000f, Font::plain));
    lSustain1->setJustificationType (Justification::centredLeft);
    lSustain1->setEditable (false, false, false);
    lSustain1->setColour (TextEditor::textColourId, Colours::black);
    lSustain1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (gASR2Delay = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR2Delay->setExplicitFocusOrder (13);
    gASR2Delay->setName ("gASR2 Delay");

    addAndMakeVisible (gASR2Attack = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR2Attack->setExplicitFocusOrder (14);
    gASR2Attack->setName ("gASR2 Attack");

    addAndMakeVisible (gASR2Release = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR2Release->setExplicitFocusOrder (15);
    gASR2Release->setName ("gASR2 Release");

    addAndMakeVisible (gASR2Sustain = new FilmStripKnob (greenWrap40_png, greenWrap40_pngSize, 128, false));
    gASR2Sustain->setExplicitFocusOrder (16);
    gASR2Sustain->setName ("gASR2 Sustain");

    addAndMakeVisible (lDelay2 = new Label ("lDelay",
                                            "Delay"));
    lDelay2->setFont (Font (15.0000f, Font::plain));
    lDelay2->setJustificationType (Justification::centredLeft);
    lDelay2->setEditable (false, false, false);
    lDelay2->setColour (TextEditor::textColourId, Colours::black);
    lDelay2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lAttack2 = new Label ("lAttack",
                                             "Attack"));
    lAttack2->setFont (Font (15.0000f, Font::plain));
    lAttack2->setJustificationType (Justification::centredLeft);
    lAttack2->setEditable (false, false, false);
    lAttack2->setColour (TextEditor::textColourId, Colours::black);
    lAttack2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lRelease2 = new Label ("lRelease 1",
                                              "Release"));
    lRelease2->setFont (Font (15.0000f, Font::plain));
    lRelease2->setJustificationType (Justification::centredLeft);
    lRelease2->setEditable (false, false, false);
    lRelease2->setColour (TextEditor::textColourId, Colours::black);
    lRelease2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lSustain2 = new Label ("lSustain",
                                              "Sustain"));
    lSustain2->setFont (Font (15.0000f, Font::plain));
    lSustain2->setJustificationType (Justification::centredLeft);
    lSustain2->setEditable (false, false, false);
    lSustain2->setColour (TextEditor::textColourId, Colours::black);
    lSustain2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (gLFO1Shape = new ComboBox ("gLFO1Shape"));
    gLFO1Shape->setExplicitFocusOrder (1);
    gLFO1Shape->setEditableText (false);
    gLFO1Shape->setJustificationType (Justification::centredLeft);
    gLFO1Shape->setTextWhenNothingSelected (String::empty);
    gLFO1Shape->setTextWhenNoChoicesAvailable ("(no choices)");
    gLFO1Shape->addListener (this);

    addAndMakeVisible (gLFO2Shape = new ComboBox ("gLFO2Shape"));
    gLFO2Shape->setExplicitFocusOrder (5);
    gLFO2Shape->setEditableText (false);
    gLFO2Shape->setJustificationType (Justification::centredLeft);
    gLFO2Shape->setTextWhenNothingSelected (String::empty);
    gLFO2Shape->setTextWhenNoChoicesAvailable ("(no choices)");
    gLFO2Shape->addListener (this);

    addAndMakeVisible (lRateC = new Label ("lRateC",
                                           "Rate Control"));
    lRateC->setFont (Font (15.0000f, Font::plain));
    lRateC->setJustificationType (Justification::centredLeft);
    lRateC->setEditable (false, false, false);
    lRateC->setColour (TextEditor::textColourId, Colours::black);
    lRateC->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (gLFO1RateC = new ComboBox ("gLFO1RateC"));
    gLFO1RateC->setExplicitFocusOrder (1);
    gLFO1RateC->setEditableText (false);
    gLFO1RateC->setJustificationType (Justification::centredLeft);
    gLFO1RateC->setTextWhenNothingSelected (String::empty);
    gLFO1RateC->setTextWhenNoChoicesAvailable ("(no choices)");
    gLFO1RateC->addListener (this);

    addAndMakeVisible (lRateC2 = new Label ("lRateC",
                                            "Rate Control"));
    lRateC2->setFont (Font (15.0000f, Font::plain));
    lRateC2->setJustificationType (Justification::centredLeft);
    lRateC2->setEditable (false, false, false);
    lRateC2->setColour (TextEditor::textColourId, Colours::black);
    lRateC2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (gLFO2RateC = new ComboBox ("gLFO2RateC"));
    gLFO2RateC->setExplicitFocusOrder (1);
    gLFO2RateC->setEditableText (false);
    gLFO2RateC->setJustificationType (Justification::centredLeft);
    gLFO2RateC->setTextWhenNothingSelected (String::empty);
    gLFO2RateC->setTextWhenNoChoicesAvailable ("(no choices)");
    gLFO2RateC->addListener (this);

    addAndMakeVisible (gASR1Trig = new ComboBox ("gASR1Trig"));
    gASR1Trig->setExplicitFocusOrder (1);
    gASR1Trig->setEditableText (false);
    gASR1Trig->setJustificationType (Justification::centredLeft);
    gASR1Trig->setTextWhenNothingSelected (String::empty);
    gASR1Trig->setTextWhenNoChoicesAvailable ("(no choices)");
    gASR1Trig->addListener (this);

    addAndMakeVisible (lRateC3 = new Label ("lRateC",
                                            "Trigger"));
    lRateC3->setFont (Font (15.0000f, Font::plain));
    lRateC3->setJustificationType (Justification::centredLeft);
    lRateC3->setEditable (false, false, false);
    lRateC3->setColour (TextEditor::textColourId, Colours::black);
    lRateC3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (gASR2Trig = new ComboBox ("gASR2Trig"));
    gASR2Trig->setExplicitFocusOrder (1);
    gASR2Trig->setEditableText (false);
    gASR2Trig->setJustificationType (Justification::centredLeft);
    gASR2Trig->setTextWhenNothingSelected (String::empty);
    gASR2Trig->setTextWhenNoChoicesAvailable ("(no choices)");
    gASR2Trig->addListener (this);

    addAndMakeVisible (lRateC4 = new Label ("lRateC",
                                            "Trigger"));
    lRateC4->setFont (Font (15.0000f, Font::plain));
    lRateC4->setJustificationType (Justification::centredLeft);
    lRateC4->setEditable (false, false, false);
    lRateC4->setColour (TextEditor::textColourId, Colours::black);
    lRateC4->setColour (TextEditor::backgroundColourId, Colour (0x0));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 470);


    //[Constructor] You can add your own custom stuff here..
    gLFO1Shape->setColour(gLFO1Shape->backgroundColourId, Colours::grey);
    gLFO1Shape->setColour(gLFO1Shape->arrowColourId, Colours::black);
    gLFO1Shape->setColour(gLFO1Shape->buttonColourId, Colours::darkgrey);
    gLFO1Shape->setColour(gLFO1Shape->outlineColourId, Colours::black);

    gLFO1RateC->setColour(gLFO1RateC->backgroundColourId, Colours::grey);
    gLFO1RateC->setColour(gLFO1RateC->arrowColourId, Colours::black);
    gLFO1RateC->setColour(gLFO1RateC->buttonColourId, Colours::darkgrey);
    gLFO1RateC->setColour(gLFO1RateC->outlineColourId, Colours::black);

    gASR1Trig->setColour(gASR1Trig->backgroundColourId, Colours::grey);
    gASR1Trig->setColour(gASR1Trig->arrowColourId, Colours::black);
    gASR1Trig->setColour(gASR1Trig->buttonColourId, Colours::darkgrey);
    gASR1Trig->setColour(gASR1Trig->outlineColourId, Colours::black);

    gLFO1Min->setRange(0, 127, 1);
    gLFO1Max->setRange(0, 127, 1);
    gLFO1Phase->setRange(0, 126, 42);

    gASR1Delay->setRange(0, 127, 1);
    gASR1Attack->setRange(0, 127, 1);
    gASR1Sustain->setRange(0, 127, 1);
    gASR1Release->setRange(0, 127, 1);

    gLFO2Shape->setColour(gLFO2Shape->backgroundColourId, Colours::grey);
    gLFO2Shape->setColour(gLFO2Shape->arrowColourId, Colours::black);
    gLFO2Shape->setColour(gLFO2Shape->buttonColourId, Colours::darkgrey);
    gLFO2Shape->setColour(gLFO2Shape->outlineColourId, Colours::black);

    gLFO2RateC->setColour(gLFO2RateC->backgroundColourId, Colours::grey);
    gLFO2RateC->setColour(gLFO2RateC->arrowColourId, Colours::black);
    gLFO2RateC->setColour(gLFO2RateC->buttonColourId, Colours::darkgrey);
    gLFO2RateC->setColour(gLFO2RateC->outlineColourId, Colours::black);

    gASR2Trig->setColour(gASR1Trig->backgroundColourId, Colours::grey);
    gASR2Trig->setColour(gASR1Trig->arrowColourId, Colours::black);
    gASR2Trig->setColour(gASR1Trig->buttonColourId, Colours::darkgrey);
    gASR2Trig->setColour(gASR1Trig->outlineColourId, Colours::black);

    gLFO2Min->setRange(0, 127, 1);
    gLFO2Max->setRange(0, 127, 1);
    gLFO2Phase->setRange(0, 126, 42);

    gASR2Delay->setRange(0, 127, 1);
    gASR2Attack->setRange(0, 127, 1);
    gASR2Sustain->setRange(0, 127, 1);
    gASR2Release->setRange(0, 127, 1);

    vector <KurzDirEntry>::const_iterator i;

    for(i = Dir.LFOShapes.List.begin(); i != Dir.LFOShapes.List.end(); i++)
        {
        gLFO1Shape->addItem(String(i->Name.c_str()), i->ID);
        gLFO2Shape->addItem(String(i->Name.c_str()), i->ID);
        }

    map <uint8, KurzTable>::iterator tab_i;
    map <uint, string>::iterator src_i;
    if((tab_i = Dir.MasterTable.Tables.find(1)) != Dir.MasterTable.Tables.end())
        {
        KurzTable &tablist = tab_i->second;
        src_i = tablist.Values.begin();
        while(src_i != tablist.Values.end())
            {
            if(src_i->first > 0)
                {
                gLFO1RateC->addItem(String(src_i->second.c_str()), src_i->first);
                gLFO2RateC->addItem(String(src_i->second.c_str()), src_i->first);

                gASR1Trig->addItem(String(src_i->second.c_str()), src_i->first);
                gASR2Trig->addItem(String(src_i->second.c_str()), src_i->first);
                }
            src_i++;
            }

        }

    if(Program.LFO[0].lfobID > 0)
        {
        gLFO1Shape->setSelectedId(Program.LFO[0].lfobShape);
        gLFO1RateC->setSelectedId(Program.LFO[0].lfobRtCtl);
        gLFO1Min->setValue(Program.LFO[0].lfobRtMin);
        gLFO1Max->setValue(Program.LFO[0].lfobRtMax);
        gLFO1Phase->setValue((Program.LFO[0].lfobFlags & 0x03) * 42); // Phase 0 = 0, 90 = 42, 180 = 84, 270 = 126
        //gLFO1Max->setValue(127);
        //gLFO1Phase->setValue(2 * 42); // Phase 0 = 0, 90 = 42, 180 = 84, 270 = 126
        }
    if(Program.LFO[1].lfobID > 0)
        {
        gLFO2Shape->setSelectedId(Program.LFO[1].lfobShape);
        gLFO2RateC->setSelectedId(Program.LFO[1].lfobRtCtl);
        gLFO2Min->setValue(Program.LFO[1].lfobRtMin);
        gLFO2Max->setValue(Program.LFO[1].lfobRtMax);
        gLFO2Phase->setValue((Program.LFO[1].lfobFlags & 0x03) * 42); // Phase 0 = 0, 90 = 42, 180 = 84, 270 = 126
        }
    if(Program.ASR[0].asrbID > 0)
        {
        gASR1Trig->setSelectedId(Program.ASR[0].asrbTrig);
        gASR1Delay->setValue(Program.ASR[0].asrbDtime);
        gASR1Attack->setValue(Program.ASR[0].asrbAtime);
        gASR1Sustain->setValue(Program.ASR[0].asrbStime);
        gASR1Release->setValue(Program.ASR[0].asrbRtime);
        }
    if(Program.ASR[1].asrbID > 0)
        {
        gASR2Trig->setSelectedId(Program.ASR[1].asrbTrig);
        gASR2Delay->setValue(Program.ASR[1].asrbDtime);
        gASR2Attack->setValue(Program.ASR[1].asrbAtime);
        gASR2Sustain->setValue(Program.ASR[1].asrbStime);
        gASR2Release->setValue(Program.ASR[1].asrbRtime);
        }

    //[/Constructor]
}

KurzProgramTab::~KurzProgramTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (gLFO1grp);
    deleteAndZero (gASR2grp);
    deleteAndZero (gASR1grp);
    deleteAndZero (gLFO2grp1);
    deleteAndZero (gLFO1Phase);
    deleteAndZero (gLFO1Min);
    deleteAndZero (gLFO1Max);
    deleteAndZero (lShape);
    deleteAndZero (lPhase1);
    deleteAndZero (lMin1);
    deleteAndZero (lMax1);
    deleteAndZero (gLFO2Phase);
    deleteAndZero (gLFO2Min);
    deleteAndZero (gLFO2Max);
    deleteAndZero (lShape2);
    deleteAndZero (lPhase2);
    deleteAndZero (lMin2);
    deleteAndZero (lMax2);
    deleteAndZero (gASR1Delay);
    deleteAndZero (gASR1Attack);
    deleteAndZero (gASR1Release);
    deleteAndZero (gASR1Sustain);
    deleteAndZero (lDelay1);
    deleteAndZero (lAttack1);
    deleteAndZero (lRelease1);
    deleteAndZero (lSustain1);
    deleteAndZero (gASR2Delay);
    deleteAndZero (gASR2Attack);
    deleteAndZero (gASR2Release);
    deleteAndZero (gASR2Sustain);
    deleteAndZero (lDelay2);
    deleteAndZero (lAttack2);
    deleteAndZero (lRelease2);
    deleteAndZero (lSustain2);
    deleteAndZero (gLFO1Shape);
    deleteAndZero (gLFO2Shape);
    deleteAndZero (lRateC);
    deleteAndZero (gLFO1RateC);
    deleteAndZero (lRateC2);
    deleteAndZero (gLFO2RateC);
    deleteAndZero (gASR1Trig);
    deleteAndZero (lRateC3);
    deleteAndZero (gASR2Trig);
    deleteAndZero (lRateC4);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void KurzProgramTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::darkgrey);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void KurzProgramTab::resized()
{
    gLFO1grp->setBounds (8, 8, 184, 216);
    gASR2grp->setBounds (208, 232, 184, 232);
    gASR1grp->setBounds (8, 232, 184, 232);
    gLFO2grp1->setBounds (208, 8, 184, 216);
    gLFO1Phase->setBounds (24, 96, 40, 40);
    gLFO1Min->setBounds (80, 96, 40, 40);
    gLFO1Max->setBounds (136, 96, 40, 40);
    lShape->setBounds (24, 32, 40, 24);
    lPhase1->setBounds (24, 136, 40, 24);
    lMin1->setBounds (80, 136, 40, 24);
    lMax1->setBounds (136, 136, 40, 24);
    gLFO2Phase->setBounds (224, 96, 40, 40);
    gLFO2Min->setBounds (280, 96, 40, 40);
    gLFO2Max->setBounds (336, 96, 40, 40);
    lShape2->setBounds (224, 32, 40, 24);
    lPhase2->setBounds (224, 136, 40, 24);
    lMin2->setBounds (280, 136, 40, 24);
    lMax2->setBounds (336, 136, 40, 24);
    gASR1Delay->setBounds (32, 256, 40, 40);
    gASR1Attack->setBounds (128, 256, 40, 40);
    gASR1Release->setBounds (32, 336, 40, 40);
    gASR1Sustain->setBounds (128, 336, 40, 40);
    lDelay1->setBounds (24, 296, 56, 24);
    lAttack1->setBounds (120, 296, 56, 24);
    lRelease1->setBounds (24, 376, 56, 24);
    lSustain1->setBounds (120, 376, 56, 24);
    gASR2Delay->setBounds (232, 264, 40, 40);
    gASR2Attack->setBounds (328, 264, 40, 40);
    gASR2Release->setBounds (232, 336, 40, 40);
    gASR2Sustain->setBounds (328, 336, 40, 40);
    lDelay2->setBounds (224, 304, 56, 24);
    lAttack2->setBounds (320, 304, 56, 24);
    lRelease2->setBounds (224, 376, 56, 24);
    lSustain2->setBounds (320, 376, 56, 24);
    gLFO1Shape->setBounds (24, 56, 152, 24);
    gLFO2Shape->setBounds (224, 56, 152, 24);
    lRateC->setBounds (24, 160, 152, 24);
    gLFO1RateC->setBounds (24, 184, 152, 24);
    lRateC2->setBounds (224, 160, 152, 24);
    gLFO2RateC->setBounds (224, 184, 152, 24);
    gASR1Trig->setBounds (24, 424, 152, 24);
    lRateC3->setBounds (24, 400, 152, 24);
    gASR2Trig->setBounds (224, 424, 152, 24);
    lRateC4->setBounds (224, 400, 152, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void KurzProgramTab::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == gLFO1Shape)
    {
        //[UserComboBoxCode_gLFO1Shape] -- add your combo box handling code here..
        //[/UserComboBoxCode_gLFO1Shape]
    }
    else if (comboBoxThatHasChanged == gLFO2Shape)
    {
        //[UserComboBoxCode_gLFO2Shape] -- add your combo box handling code here..
        //[/UserComboBoxCode_gLFO2Shape]
    }
    else if (comboBoxThatHasChanged == gLFO1RateC)
    {
        //[UserComboBoxCode_gLFO1RateC] -- add your combo box handling code here..
        //[/UserComboBoxCode_gLFO1RateC]
    }
    else if (comboBoxThatHasChanged == gLFO2RateC)
    {
        //[UserComboBoxCode_gLFO2RateC] -- add your combo box handling code here..
        //[/UserComboBoxCode_gLFO2RateC]
    }
    else if (comboBoxThatHasChanged == gASR1Trig)
    {
        //[UserComboBoxCode_gASR1Trig] -- add your combo box handling code here..
        //[/UserComboBoxCode_gASR1Trig]
    }
    else if (comboBoxThatHasChanged == gASR2Trig)
    {
        //[UserComboBoxCode_gASR2Trig] -- add your combo box handling code here..
        //[/UserComboBoxCode_gASR2Trig]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="KurzProgramTab" componentName="Program Tab"
                 parentClasses="public Component" constructorParams="KurzDir &amp;DirObj, KurzProgram &amp;Prg"
                 variableInitialisers="Dir(DirObj), Program(Prg)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="400" initialHeight="470">
  <BACKGROUND backgroundColour="ff555555"/>
  <GROUPCOMPONENT name="gLFO1" id="65867dd2975cf695" memberName="gLFO1grp" virtualName=""
                  explicitFocusOrder="0" pos="8 8 184 216" title="gLFO1" textpos="36"/>
  <GROUPCOMPONENT name="gASR2" id="692ad7f6c9d38405" memberName="gASR2grp" virtualName=""
                  explicitFocusOrder="0" pos="208 232 184 232" title="gASR2" textpos="36"/>
  <GROUPCOMPONENT name="gASR1" id="dd294df1c8c1ed4f" memberName="gASR1grp" virtualName=""
                  explicitFocusOrder="0" pos="8 232 184 232" title="gASR1" textpos="36"/>
  <GROUPCOMPONENT name="gLFO2" id="efd8cb3a65ad821e" memberName="gLFO2grp1" virtualName=""
                  explicitFocusOrder="0" pos="208 8 184 216" title="gLFO2" textpos="36"/>
  <GENERICCOMPONENT name="gLFO1 Phase" id="b28de2d08369bb59" memberName="gLFO1Phase"
                    virtualName="" explicitFocusOrder="2" pos="24 96 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gLFO1 Min" id="5211831dec7c5c94" memberName="gLFO1Min"
                    virtualName="" explicitFocusOrder="3" pos="80 96 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gLFO1 Max" id="12bce62e6142e757" memberName="gLFO1Max"
                    virtualName="" explicitFocusOrder="4" pos="136 96 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <LABEL name="lShape" id="b8e395f57af69f27" memberName="lShape" virtualName=""
         explicitFocusOrder="0" pos="24 32 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Shape" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lPhase" id="771e84d9080b6343" memberName="lPhase1" virtualName=""
         explicitFocusOrder="0" pos="24 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Phase" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lMin1" id="6e9fa5df424f4c39" memberName="lMin1" virtualName=""
         explicitFocusOrder="0" pos="80 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Min" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lMax1" id="760df49bfa560e05" memberName="lMax1" virtualName=""
         explicitFocusOrder="0" pos="136 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Max" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <GENERICCOMPONENT name="gLFO2 Phase" id="46e3fb85ecc60311" memberName="gLFO2Phase"
                    virtualName="" explicitFocusOrder="6" pos="224 96 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gLFO2 Min" id="f7f182398bfd925d" memberName="gLFO2Min"
                    virtualName="" explicitFocusOrder="7" pos="280 96 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gLFO2 Max" id="66f53cb1729a8b1a" memberName="gLFO2Max"
                    virtualName="" explicitFocusOrder="8" pos="336 96 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <LABEL name="lShape" id="9d8e9df82deac390" memberName="lShape2" virtualName=""
         explicitFocusOrder="0" pos="224 32 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Shape" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lPhase" id="ee4c45d97e079fa3" memberName="lPhase2" virtualName=""
         explicitFocusOrder="0" pos="224 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Phase" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lMin1" id="98ab31f6bb19cfa9" memberName="lMin2" virtualName=""
         explicitFocusOrder="0" pos="280 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Min" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lMax1" id="fc6827ab8826f83e" memberName="lMax2" virtualName=""
         explicitFocusOrder="0" pos="336 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Max" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <GENERICCOMPONENT name="gASR1 Delay" id="23ae3b924db42c14" memberName="gASR1Delay"
                    virtualName="" explicitFocusOrder="9" pos="32 256 40 40" posRelativeX="1b4049104dd61935"
                    posRelativeY="1b4049104dd61935" class="FilmStripKnob" params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gASR1 Attack" id="7a1a95d1cf664369" memberName="gASR1Attack"
                    virtualName="" explicitFocusOrder="10" pos="128 256 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gASR1 Release" id="adc3a6e635cf1d45" memberName="gASR1Release"
                    virtualName="" explicitFocusOrder="11" pos="32 336 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gASR1 Sustain" id="465728b145bad61a" memberName="gASR1Sustain"
                    virtualName="" explicitFocusOrder="12" pos="128 336 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <LABEL name="lDelay" id="e8021a32385ca648" memberName="lDelay1" virtualName=""
         explicitFocusOrder="0" pos="24 296 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Delay" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lAttack" id="ceb18ba1e41becb3" memberName="lAttack1" virtualName=""
         explicitFocusOrder="0" pos="120 296 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Attack" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lRelease 1" id="7043747243c63f1e" memberName="lRelease1"
         virtualName="" explicitFocusOrder="0" pos="24 376 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Release" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lSustain" id="606d30789b9960d9" memberName="lSustain1"
         virtualName="" explicitFocusOrder="0" pos="120 376 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Sustain" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <GENERICCOMPONENT name="gASR2 Delay" id="b7f4fcc72a274430" memberName="gASR2Delay"
                    virtualName="" explicitFocusOrder="13" pos="232 264 40 40" posRelativeX="1b4049104dd61935"
                    posRelativeY="1b4049104dd61935" class="FilmStripKnob" params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gASR2 Attack" id="883964a9ff2562e4" memberName="gASR2Attack"
                    virtualName="" explicitFocusOrder="14" pos="328 264 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gASR2 Release" id="9e940a1a19a06499" memberName="gASR2Release"
                    virtualName="" explicitFocusOrder="15" pos="232 336 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <GENERICCOMPONENT name="gASR2 Sustain" id="8723ff1bf0b23c2c" memberName="gASR2Sustain"
                    virtualName="" explicitFocusOrder="16" pos="328 336 40 40" class="FilmStripKnob"
                    params="greenWrap40_png, greenWrap40_pngSize, 128, false"/>
  <LABEL name="lDelay" id="4392ec9b328f952" memberName="lDelay2" virtualName=""
         explicitFocusOrder="0" pos="224 304 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Delay" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lAttack" id="365f736f68997e14" memberName="lAttack2" virtualName=""
         explicitFocusOrder="0" pos="320 304 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Attack" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lRelease 1" id="7e656782df79648f" memberName="lRelease2"
         virtualName="" explicitFocusOrder="0" pos="224 376 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Release" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lSustain" id="7da546fa45ea0a96" memberName="lSustain2"
         virtualName="" explicitFocusOrder="0" pos="320 376 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Sustain" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="gLFO1Shape" id="ab0b5dbd9c01165" memberName="gLFO1Shape"
            virtualName="" explicitFocusOrder="1" pos="24 56 152 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="gLFO2Shape" id="a05f363a129c014c" memberName="gLFO2Shape"
            virtualName="" explicitFocusOrder="5" pos="224 56 152 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="lRateC" id="7fa9dfc4233f8a74" memberName="lRateC" virtualName=""
         explicitFocusOrder="0" pos="24 160 152 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Rate Control" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="gLFO1RateC" id="26f505bf4c5c2a76" memberName="gLFO1RateC"
            virtualName="" explicitFocusOrder="1" pos="24 184 152 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="lRateC" id="8f3629a366ba88c9" memberName="lRateC2" virtualName=""
         explicitFocusOrder="0" pos="224 160 152 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Rate Control" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="gLFO2RateC" id="d148445b65670ef1" memberName="gLFO2RateC"
            virtualName="" explicitFocusOrder="1" pos="224 184 152 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="gASR1Trig" id="953683e2961a99f9" memberName="gASR1Trig"
            virtualName="" explicitFocusOrder="1" pos="24 424 152 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="lRateC" id="29cb232a12361987" memberName="lRateC3" virtualName=""
         explicitFocusOrder="0" pos="24 400 152 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="gASR2Trig" id="7c41251ef346deec" memberName="gASR2Trig"
            virtualName="" explicitFocusOrder="1" pos="224 424 152 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="lRateC" id="725919d2622dab1e" memberName="lRateC4" virtualName=""
         explicitFocusOrder="0" pos="224 400 152 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: greenWrap40_png, 29795, "../Images/GreenWrap40.png"
static const unsigned char resource_KurzProgramTab_greenWrap40_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,40,0,0,20,0,8,6,0,0,0,244,144,135,235,0,0,0,9,112,72,89,115,0,0,14,196,0,0,
14,196,1,149,43,14,27,0,0,32,0,73,68,65,84,120,156,236,221,121,124,19,117,254,63,240,215,36,105,122,37,61,105,122,112,180,165,208,114,21,185,21,69,1,21,253,10,120,236,42,138,138,23,174,2,194,122,124,61,
119,197,213,245,88,244,183,135,34,199,170,43,139,120,236,126,61,214,85,17,215,3,5,143,21,148,75,129,66,185,74,75,75,143,180,165,103,146,54,215,252,254,104,39,228,152,164,109,160,205,199,221,215,219,71,
31,164,153,36,243,234,103,38,115,124,158,126,102,36,89,150,17,78,73,146,52,25,192,121,0,38,68,69,69,13,51,26,141,3,244,122,125,2,0,216,237,246,230,150,150,150,10,135,195,81,12,96,59,128,175,100,89,222,
18,214,124,122,18,80,146,164,92,0,183,198,199,199,223,80,80,80,48,200,104,52,118,235,125,45,45,45,56,112,224,192,49,139,197,242,26,128,53,178,44,31,61,173,1,37,73,74,3,176,52,59,59,251,206,156,156,156,
238,126,182,106,149,150,150,162,172,172,236,249,168,168,168,39,237,118,123,237,41,7,148,36,233,198,148,148,148,229,133,133,133,73,167,148,204,175,14,28,56,208,104,179,217,238,106,108,108,124,53,236,128,
146,36,45,31,55,110,220,157,221,93,148,61,45,171,213,138,138,138,138,231,43,43,43,239,234,113,64,73,146,222,158,58,117,234,85,106,211,52,26,13,12,6,3,250,245,235,135,236,236,108,164,167,167,3,0,90,91,
91,225,112,56,160,209,104,96,179,217,96,54,155,97,54,155,209,220,220,12,135,195,129,96,243,170,168,168,120,231,240,225,195,115,186,29,48,84,184,204,204,76,140,28,57,18,58,157,14,22,139,5,85,85,85,112,
185,92,112,187,221,158,31,151,203,5,167,211,9,183,219,13,131,193,0,173,86,11,135,195,129,250,250,122,216,108,54,213,144,39,78,156,120,103,247,238,221,1,33,3,2,74,146,180,124,234,212,169,119,170,125,200,
148,41,83,208,175,95,63,148,149,149,193,98,177,0,0,220,110,55,100,89,246,9,167,4,118,58,157,158,31,0,136,143,143,135,195,225,64,67,67,131,106,200,182,182,182,231,183,110,221,234,179,184,125,2,74,146,116,
227,184,113,227,214,249,175,115,177,177,177,184,248,226,139,81,83,83,227,243,225,222,225,148,127,149,112,46,151,11,14,135,195,211,154,202,143,44,203,48,24,12,104,110,110,14,88,228,178,44,67,163,209,220,
180,105,211,38,207,23,71,227,21,46,45,37,37,101,185,90,184,25,51,102,160,172,172,12,141,141,141,144,36,9,146,36,41,239,241,60,14,85,202,235,36,73,130,203,229,194,137,19,39,160,215,235,85,95,167,211,233,
150,207,154,53,43,45,32,32,128,165,106,155,146,139,47,190,24,229,229,229,104,107,107,83,13,231,253,156,44,203,158,86,9,181,117,112,187,221,158,63,214,191,28,14,71,146,94,175,95,234,19,80,146,164,220,236,
236,236,128,245,110,202,148,41,168,169,169,241,132,243,188,73,163,241,9,167,209,104,60,161,149,0,74,121,135,86,74,146,36,200,178,140,198,198,70,207,98,247,11,121,231,188,121,243,114,61,1,1,220,234,191,
135,200,204,204,68,191,126,253,2,86,104,37,148,86,171,133,86,171,245,9,235,61,35,255,214,244,255,93,121,125,75,75,11,92,46,151,207,60,90,91,91,161,215,235,111,245,4,140,143,143,191,193,251,5,26,141,6,
35,71,142,68,89,89,153,207,12,189,91,76,249,87,105,61,255,32,202,183,218,251,57,181,85,192,225,112,160,181,181,53,160,21,221,110,247,13,0,160,145,36,105,114,65,65,193,32,239,137,6,131,193,179,157,243,
254,48,37,164,210,146,254,211,188,195,169,61,86,251,145,36,9,86,171,53,160,21,107,106,106,6,221,115,207,61,147,53,0,206,243,255,230,166,164,164,4,108,231,212,90,192,127,187,231,255,211,85,104,229,115,
236,118,59,218,218,218,124,50,216,108,54,232,245,250,243,52,0,38,192,175,114,115,115,81,85,85,165,26,206,127,111,161,4,244,222,56,171,133,245,15,238,253,88,146,36,213,141,183,94,175,159,160,137,138,138,
26,230,63,33,61,61,29,46,151,75,181,149,148,13,176,247,198,87,173,21,189,67,168,253,238,253,28,0,52,53,53,5,4,4,48,76,103,52,26,7,168,77,81,222,232,189,174,185,221,238,128,223,189,91,208,187,245,130,45,
246,96,161,219,219,219,3,50,216,108,182,1,58,229,48,221,187,90,91,91,85,3,42,155,6,255,197,173,44,218,80,161,188,167,121,47,13,239,231,252,203,233,116,38,232,212,90,207,225,112,248,172,31,74,64,165,188,
3,170,173,115,93,181,158,218,31,168,182,231,209,106,181,208,217,237,246,102,0,62,187,56,141,70,3,151,203,229,179,151,240,94,236,106,235,147,90,235,132,250,241,127,141,247,124,148,50,24,12,205,186,150,
150,150,10,255,128,54,155,13,78,167,19,90,173,54,96,195,234,127,244,162,60,246,95,92,254,33,212,14,197,188,183,6,49,49,49,1,1,211,210,210,42,116,157,167,134,163,188,39,152,205,230,160,205,174,182,77,235,
73,43,6,155,158,152,152,168,214,130,197,26,116,156,183,250,84,117,117,53,12,6,67,192,118,206,251,139,208,213,34,244,223,4,5,155,238,116,58,225,112,56,144,148,20,120,78,166,211,233,182,235,0,124,213,210,
210,2,239,189,73,107,107,43,18,19,19,225,116,58,85,15,167,130,125,147,253,23,113,176,63,204,59,188,211,233,132,94,175,71,92,92,156,79,56,147,201,4,157,78,247,149,70,150,229,45,7,14,28,56,230,61,209,225,
112,192,110,183,3,128,234,6,89,167,211,169,182,146,218,107,131,157,2,40,175,119,56,28,48,26,141,136,138,138,242,9,120,254,249,231,31,155,59,119,238,22,13,0,116,158,241,251,172,103,39,78,156,64,124,124,
188,207,135,58,157,78,196,198,198,226,169,167,158,130,201,100,10,185,56,189,223,227,189,157,244,94,172,118,187,29,26,141,6,38,147,41,224,224,53,35,35,227,53,224,228,241,224,154,210,210,82,159,23,216,108,
54,216,237,118,200,178,12,135,195,225,249,89,184,112,33,190,255,254,123,28,59,118,44,32,188,255,143,127,88,255,93,164,221,110,71,86,86,86,192,226,157,50,101,10,180,90,237,26,79,64,89,150,143,150,149,149,
61,239,191,146,54,54,54,34,62,62,222,179,255,125,232,161,135,224,118,187,241,215,191,254,85,117,134,222,191,251,7,83,251,49,153,76,200,204,204,12,104,189,179,207,62,251,249,75,47,189,244,168,119,11,34,
42,42,234,201,3,7,14,52,250,135,108,105,105,65,76,76,12,230,94,59,23,153,153,153,120,236,177,199,60,51,240,159,185,119,56,255,233,254,175,77,78,78,70,118,118,182,255,236,48,103,206,156,70,73,146,158,84,
126,247,4,180,219,237,181,54,155,237,46,171,213,234,243,6,89,150,81,180,184,8,205,249,205,88,184,112,33,218,219,219,97,183,219,97,183,219,125,102,238,189,210,219,237,118,213,112,202,113,95,106,106,42,
114,115,115,161,211,249,238,105,51,51,51,49,116,232,208,187,46,185,228,18,79,167,146,207,254,165,177,177,241,213,138,138,10,159,69,125,244,214,163,168,186,162,10,111,175,127,219,179,103,241,14,224,61,
115,239,22,82,254,8,187,221,142,246,246,118,207,1,105,78,78,14,242,242,242,2,194,1,192,252,249,243,159,191,232,162,139,124,58,147,84,187,62,134,12,25,242,246,128,1,3,174,170,190,184,26,7,30,56,128,97,
207,12,67,250,167,233,158,93,90,107,107,43,172,86,43,236,118,187,207,153,156,218,193,172,195,225,128,94,175,135,209,104,132,201,100,66,92,92,156,234,233,230,210,165,75,223,185,240,194,11,187,238,250,80,
106,212,164,81,239,90,22,90,126,22,213,16,133,172,245,89,62,211,148,160,54,155,13,141,141,141,104,106,106,66,123,123,187,231,32,87,163,209,32,38,38,6,70,163,17,73,73,73,136,139,139,67,84,84,84,208,147,
252,96,225,66,6,4,128,137,211,38,174,140,147,227,22,119,167,247,32,156,202,204,204,196,252,249,243,159,159,49,99,70,207,187,223,148,154,62,125,250,141,58,157,110,185,195,225,56,173,29,152,115,230,204,
105,28,58,116,232,93,254,235,92,143,3,2,192,172,89,179,210,244,122,253,82,135,195,113,103,107,107,235,41,5,155,50,101,10,206,62,251,236,231,37,73,122,210,251,219,122,74,1,149,154,55,111,94,174,94,175,
191,213,237,118,223,80,83,83,51,40,88,95,159,127,153,76,38,156,127,254,249,199,50,50,50,94,211,106,181,107,148,141,112,119,170,71,1,189,235,158,123,238,153,172,215,235,207,211,235,245,19,0,12,179,217,
108,3,156,78,103,130,86,171,133,193,96,104,78,75,75,171,48,24,12,197,58,157,110,187,78,167,251,106,238,220,185,189,207,16,62,111,164,147,244,32,32,157,36,220,128,116,146,206,162,147,208,73,58,195,209,
73,148,114,187,233,36,116,18,184,233,36,110,58,9,157,132,78,18,116,157,163,147,208,73,232,36,162,59,73,70,70,134,184,78,50,119,238,92,220,115,207,61,62,45,37,140,147,156,119,222,121,152,48,97,2,126,245,
171,95,121,250,169,133,113,146,105,211,166,97,241,226,197,120,246,217,103,209,208,208,32,152,147,156,21,131,219,111,191,29,247,220,115,15,246,238,221,219,167,78,226,217,213,217,237,246,218,164,164,164,
187,172,86,235,58,239,38,47,157,87,138,138,107,43,112,243,171,55,163,118,119,109,192,134,219,123,155,168,182,157,243,110,77,133,37,76,38,19,178,179,179,131,58,201,69,23,93,212,61,39,169,184,170,2,165,
183,150,194,25,231,132,185,200,140,248,248,120,113,156,36,225,194,132,171,138,30,47,130,61,213,46,166,147,12,187,120,216,250,246,107,218,103,211,73,232,36,61,44,58,137,82,116,146,112,2,210,73,194,9,72,
39,161,147,208,73,232,36,116,18,58,9,157,68,53,156,218,99,181,31,58,9,157,132,78,162,18,152,78,18,172,111,186,171,30,126,58,137,127,192,80,189,252,193,90,49,216,116,58,137,127,11,70,204,73,6,13,26,132,
9,19,38,136,233,36,121,121,121,88,182,108,25,162,162,162,84,131,69,212,73,242,242,242,240,196,19,79,96,197,138,21,216,184,113,99,151,70,210,167,78,18,165,143,194,178,101,203,176,124,249,114,124,252,241,
199,65,103,216,27,78,226,57,171,211,235,245,105,169,169,169,7,11,10,10,124,190,78,53,151,212,224,202,51,174,132,125,179,29,155,191,216,28,114,119,231,189,125,244,94,180,106,118,146,156,156,172,58,100,
99,206,156,57,141,131,7,15,206,87,58,55,67,58,73,229,101,149,56,244,191,135,240,140,245,25,228,253,144,135,88,71,172,56,78,82,125,81,53,14,221,125,8,0,224,140,115,34,230,120,140,56,78,50,248,140,193,239,
58,30,114,252,204,124,129,153,78,18,42,92,200,128,0,157,132,78,66,39,57,165,128,116,146,158,4,164,147,132,27,144,78,210,89,116,18,255,110,57,58,137,127,56,58,137,87,209,73,212,130,169,117,192,211,73,232,
36,116,18,149,78,242,96,65,1,58,9,157,132,78,162,122,40,230,189,53,160,147,208,73,188,39,134,114,146,171,175,190,26,133,133,133,98,58,201,189,247,222,139,172,172,44,108,223,190,93,60,39,185,255,254,251,
225,118,187,241,212,83,79,117,203,72,78,151,147,232,58,91,236,168,36,73,207,231,228,228,248,28,85,55,54,54,34,58,47,26,119,255,236,110,184,221,110,60,249,228,147,33,55,55,202,254,219,255,139,228,31,220,
223,73,252,235,236,179,207,126,126,230,204,153,71,61,1,1,207,120,146,27,189,157,164,246,220,90,28,124,232,32,134,126,54,20,223,63,245,61,224,66,200,221,157,119,224,238,56,201,41,93,119,171,250,127,170,
177,239,137,125,112,198,59,241,226,69,47,162,249,242,142,222,129,190,190,238,150,207,43,26,27,27,95,205,202,202,26,159,113,121,198,157,71,231,31,5,220,29,127,130,183,147,180,180,180,192,225,112,248,180,
100,168,205,140,247,98,213,104,52,200,201,201,81,93,172,0,148,14,245,174,157,36,123,106,246,122,247,66,247,108,58,73,23,225,66,6,4,232,36,116,18,58,201,41,5,164,147,244,36,32,157,36,220,128,116,146,206,
162,147,248,31,85,211,73,252,195,209,73,188,138,78,162,22,76,173,3,158,78,66,39,161,147,168,116,146,7,11,10,208,73,232,36,116,18,213,67,49,239,173,1,157,164,183,156,68,131,78,39,241,174,214,214,86,104,
181,90,213,153,196,196,196,132,156,113,168,48,222,139,180,87,156,36,47,47,15,47,190,248,34,140,70,163,120,78,114,222,121,231,225,241,199,31,199,195,15,63,140,186,186,58,177,156,228,186,235,174,195,101,
151,93,134,7,31,124,16,69,69,69,226,56,73,69,74,5,198,94,63,22,99,134,142,193,189,247,222,235,115,220,166,182,185,233,83,39,169,155,92,135,226,165,197,248,81,250,17,91,95,216,138,216,166,216,136,56,137,
234,120,146,214,75,91,177,255,215,251,1,109,199,180,226,133,197,200,179,231,33,246,205,190,31,79,18,224,36,153,185,153,147,98,250,199,44,214,215,235,97,239,103,167,147,40,69,39,9,167,232,36,225,20,157,
68,41,58,73,56,1,233,36,225,4,164,147,208,73,232,36,94,1,233,36,116,18,229,77,116,18,58,9,157,132,78,226,243,28,64,39,161,147,208,73,84,15,197,188,183,6,116,146,96,244,208,213,244,211,238,36,67,135,14,
237,83,39,209,201,178,188,197,96,48,28,155,48,97,130,103,127,236,239,36,146,36,193,96,48,96,209,162,69,112,187,221,216,179,103,79,192,58,168,182,249,232,174,147,244,235,215,239,212,156,36,47,47,15,143,
63,254,56,202,203,203,241,244,211,79,7,101,134,136,56,201,248,241,227,241,212,83,79,225,31,255,248,7,214,174,93,219,109,35,233,117,39,177,228,88,176,243,129,157,24,115,98,12,238,188,231,78,28,62,112,216,
231,160,84,109,115,211,27,78,162,122,221,173,218,169,181,40,126,168,24,238,88,55,116,86,29,134,189,48,12,177,111,159,126,39,233,206,117,183,2,198,147,212,13,168,67,233,45,165,112,235,59,246,26,206,56,
39,138,23,22,71,108,60,73,192,117,183,234,118,212,253,217,244,133,9,250,122,125,199,120,18,8,120,221,45,58,73,55,195,133,12,8,208,73,232,36,116,146,83,10,72,39,233,73,64,58,73,184,1,233,36,157,69,39,241,
63,170,166,147,248,135,163,147,120,21,157,68,45,152,90,7,60,157,132,78,66,39,161,147,168,4,164,147,248,21,157,36,212,99,58,137,144,78,50,101,202,20,204,154,53,171,79,157,164,219,227,73,174,185,230,26,
44,88,176,0,187,118,237,10,218,74,106,27,239,238,56,201,41,141,39,137,141,141,197,159,254,244,39,100,102,102,226,230,155,111,198,161,67,135,250,212,73,148,237,224,154,210,210,210,135,189,143,9,109,54,
27,218,46,107,195,170,169,171,176,117,235,86,172,91,183,206,231,15,232,234,75,210,21,69,40,78,146,147,147,211,115,39,105,30,222,140,67,119,31,66,107,65,43,22,255,109,49,28,175,56,32,59,101,159,131,82,
181,205,77,159,56,73,202,109,41,73,251,31,217,15,57,170,227,121,225,156,196,166,177,33,246,120,71,24,64,64,39,177,190,105,165,147,208,73,78,87,209,73,194,41,58,137,82,116,146,112,2,210,73,194,9,72,39,
161,147,208,73,232,36,116,18,58,9,157,68,53,156,218,99,181,31,58,9,157,132,78,162,18,152,78,18,172,227,210,191,117,232,36,106,205,174,182,77,235,73,43,6,155,254,159,239,36,177,177,177,184,251,238,187,
49,109,218,52,241,156,228,220,115,207,197,139,47,190,136,227,199,143,227,147,79,62,233,83,39,209,1,30,39,121,216,123,61,59,113,226,4,18,77,137,248,197,13,191,64,255,254,253,241,235,95,255,26,7,14,28,8,
186,235,243,95,7,213,194,133,227,36,170,227,73,92,177,46,252,184,232,71,180,220,221,130,189,123,247,98,209,162,69,216,187,119,111,192,46,174,171,31,255,150,61,45,227,73,234,206,169,195,225,95,30,70,123,
70,59,170,80,133,234,31,171,17,43,199,70,204,73,60,91,199,168,168,168,39,139,218,138,90,142,95,121,28,246,84,187,231,197,187,175,222,141,166,203,155,224,112,7,231,5,239,223,213,76,68,237,181,97,221,159,
196,81,236,88,146,252,65,50,157,132,78,66,39,233,110,64,128,78,66,39,161,147,208,73,252,139,78,114,58,139,78,66,39,241,15,72,39,161,147,40,111,162,147,208,73,232,36,116,18,159,231,0,58,9,157,132,78,162,
122,40,230,189,53,248,239,112,146,148,148,20,49,157,36,54,54,22,87,95,125,53,254,248,199,63,194,100,50,137,229,36,138,145,100,100,100,224,214,91,111,69,121,121,185,24,78,114,112,216,65,220,156,115,51,
206,159,112,190,199,72,148,105,125,233,36,1,227,73,44,217,22,28,189,237,40,234,207,169,71,212,182,40,188,187,228,221,128,141,104,119,3,122,63,86,115,148,238,140,39,209,116,206,240,104,89,89,217,243,245,
103,214,99,231,159,119,162,126,74,61,32,1,91,38,109,65,227,13,141,112,202,190,29,230,193,96,198,159,34,252,93,196,255,71,113,18,255,214,59,251,236,179,159,87,186,232,124,156,164,114,95,101,107,66,113,
2,36,199,201,55,8,229,36,174,175,93,139,233,36,116,18,208,73,186,31,16,160,147,208,73,232,36,116,18,255,162,147,156,206,162,147,208,73,252,3,210,73,232,36,202,155,232,36,116,18,58,9,157,196,231,57,128,
78,66,39,161,147,168,30,138,121,111,13,254,243,157,36,54,54,22,151,95,126,185,152,78,114,245,213,87,99,245,234,213,65,239,89,210,155,78,18,244,254,36,109,82,27,166,78,157,138,203,46,187,12,149,149,149,
184,245,214,91,61,59,117,181,3,2,181,205,71,119,157,36,212,253,73,84,157,164,236,154,50,236,189,100,47,102,255,56,27,43,86,172,192,193,131,7,125,214,193,238,50,196,105,119,18,227,53,70,28,185,227,8,108,
217,54,64,6,158,58,254,20,50,139,51,5,113,146,250,178,213,39,38,159,64,123,90,231,46,71,2,246,159,189,95,32,39,105,143,122,172,109,77,27,157,132,78,66,39,233,110,64,128,78,66,39,161,147,156,82,64,58,73,
79,2,210,73,194,13,72,39,233,44,58,137,127,183,28,157,196,63,28,157,196,171,232,36,106,193,212,58,224,233,36,116,18,58,9,157,68,37,32,157,196,175,232,36,161,30,255,119,57,73,108,108,44,174,186,234,42,
220,119,223,125,226,57,201,156,57,115,176,122,245,106,100,102,102,98,249,242,229,98,56,201,137,236,19,72,57,39,5,127,251,217,223,176,99,199,14,60,242,200,35,30,138,8,118,64,160,182,249,56,237,78,98,201,
181,224,216,220,99,48,95,108,70,169,185,20,119,63,125,55,202,183,149,251,28,11,6,219,245,249,175,131,167,203,73,60,215,221,58,168,63,136,226,95,23,195,124,145,25,0,80,159,86,143,239,46,253,14,178,44,171,
246,228,119,231,199,127,17,251,191,191,59,215,221,242,56,73,213,246,170,63,39,20,37,64,99,235,204,44,156,147,180,70,61,74,39,161,147,208,73,2,139,78,18,172,232,36,116,146,83,13,72,39,233,73,64,58,73,184,
1,233,36,157,69,39,161,147,116,134,163,147,40,229,118,211,73,232,36,112,211,73,220,116,18,58,9,157,36,232,58,71,39,17,201,73,52,157,167,134,62,165,56,137,119,31,95,76,76,140,231,138,81,106,93,188,93,181,
80,87,78,162,118,90,209,45,39,81,140,100,197,138,21,152,56,113,98,159,59,137,14,157,78,226,253,23,180,182,182,34,161,127,2,174,190,248,106,92,122,233,165,216,185,115,39,30,123,236,49,28,60,120,48,172,
94,126,239,111,248,41,59,73,213,204,42,84,93,94,133,69,173,139,224,222,239,198,252,249,243,61,187,61,101,29,140,136,147,52,140,107,120,248,240,93,135,97,205,182,2,0,214,152,215,224,156,53,231,192,210,
104,17,195,73,170,79,84,67,99,215,0,157,155,163,250,180,122,28,154,119,72,28,39,49,127,96,166,147,208,73,232,36,116,146,30,22,157,36,156,162,147,40,69,39,9,39,32,157,36,156,128,116,18,58,9,157,132,78,
66,39,161,147,208,73,84,195,209,73,232,36,110,58,9,157,132,78,18,242,241,105,119,146,201,147,39,99,196,136,17,98,57,73,76,76,12,174,186,234,42,172,93,187,22,99,199,142,69,69,69,69,228,157,164,61,173,29,
251,47,222,143,187,83,239,198,181,23,92,139,245,235,215,99,193,130,5,1,151,180,234,115,39,41,184,182,96,80,197,213,21,48,207,48,67,227,214,96,195,166,13,248,252,182,207,209,220,212,28,148,33,252,183,103,
189,225,36,26,0,176,216,45,111,84,207,172,70,221,185,117,0,0,183,198,141,111,11,191,69,123,106,123,143,152,33,216,34,244,222,78,134,231,36,14,252,197,249,190,19,113,229,113,116,18,58,9,157,132,78,66,39,
241,43,58,73,23,69,39,161,147,248,133,162,147,244,56,32,157,132,78,66,39,161,147,208,73,232,36,116,18,213,112,116,18,58,137,155,78,66,39,161,147,132,124,124,218,156,36,58,58,26,103,157,117,22,158,120,
226,137,136,56,137,14,29,231,173,62,71,207,165,174,82,140,29,57,22,51,46,152,129,113,227,198,97,215,174,93,248,203,95,254,226,115,229,168,96,155,142,238,44,222,176,156,36,62,53,30,53,23,214,192,124,129,
25,206,2,39,110,250,238,38,108,219,182,13,47,188,240,130,207,46,47,34,78,18,55,58,174,50,250,119,209,89,141,227,27,1,9,208,184,53,88,105,95,137,132,47,19,224,114,186,34,239,36,182,131,182,117,113,229,
113,208,180,119,124,147,220,26,55,246,143,223,15,221,32,157,32,78,210,78,39,161,147,208,73,0,58,9,157,68,189,232,36,93,20,157,132,78,226,23,138,78,210,227,128,116,18,58,9,157,132,78,66,39,161,147,208,
73,84,195,209,73,232,36,110,58,9,157,228,167,225,36,154,78,39,241,95,246,62,142,225,114,185,208,191,127,127,0,8,250,237,237,233,227,238,58,73,200,251,147,228,229,229,97,220,184,113,152,57,115,38,170,170,
170,176,98,197,10,28,63,126,60,232,98,234,78,43,6,155,30,236,254,36,62,78,210,222,175,29,117,83,234,224,30,227,198,75,153,47,65,130,132,157,59,119,226,241,199,31,199,161,67,135,66,106,147,127,192,211,
234,36,102,147,25,245,183,213,195,60,163,227,198,21,213,173,213,120,238,133,231,80,190,169,92,245,112,170,47,157,68,35,203,242,150,163,181,71,171,219,211,218,61,61,252,214,56,43,138,70,22,1,18,84,55,200,
193,248,33,212,107,149,245,78,205,73,140,70,99,104,39,105,219,210,182,54,254,104,60,157,132,78,66,39,161,147,168,28,204,210,73,232,36,116,146,110,20,157,68,245,141,116,146,30,4,164,147,132,27,144,78,210,
89,116,18,58,73,103,56,58,137,82,110,55,157,132,78,2,55,157,196,77,39,161,147,208,73,130,174,115,116,18,111,39,137,137,137,193,89,103,157,133,91,111,189,21,90,173,54,242,78,226,72,116,160,44,174,12,231,
156,115,14,198,143,31,143,177,99,199,98,215,174,93,216,185,115,39,108,54,155,234,54,173,39,173,24,108,122,72,39,105,51,181,93,101,190,208,140,19,103,157,64,211,232,38,196,86,198,226,230,195,55,99,251,
246,237,120,233,165,151,160,116,119,68,204,73,170,206,168,130,249,82,51,218,50,59,182,230,223,37,124,135,213,159,175,70,235,246,86,49,156,196,188,209,92,29,93,19,237,227,36,149,103,85,210,73,232,36,116,
18,208,73,232,36,116,18,58,73,143,139,78,162,20,157,36,156,128,116,146,112,2,210,73,232,36,116,18,58,9,157,132,78,66,39,81,13,71,39,161,147,184,233,36,116,146,158,57,73,84,84,148,103,49,244,165,147,132,
188,238,86,126,126,62,198,142,29,139,49,99,198,32,57,57,25,119,223,125,55,236,118,187,234,55,209,127,113,157,118,39,105,41,104,65,227,232,70,52,141,110,194,12,195,12,172,189,119,45,170,170,170,176,107,
215,46,188,252,242,203,168,174,174,142,156,147,148,44,40,185,170,226,202,10,200,250,142,245,224,141,242,55,80,246,64,25,106,42,107,124,14,18,34,230,36,82,137,132,232,250,104,143,147,148,39,151,163,201,
212,4,231,49,39,157,132,78,66,39,81,158,164,147,208,73,232,36,116,146,158,21,157,132,78,114,170,1,233,36,61,9,72,39,9,55,32,157,164,179,232,36,116,146,206,112,116,18,165,220,110,58,9,157,4,110,58,137,
155,78,66,39,161,147,4,93,231,78,167,147,104,58,157,196,167,20,39,81,102,148,147,147,131,252,252,124,213,30,212,158,244,240,159,178,147,180,165,181,161,181,160,21,237,169,237,248,217,207,126,134,113,227,
198,33,35,35,3,213,213,213,40,47,47,71,81,81,145,106,15,127,239,58,137,193,113,248,216,117,199,70,85,94,81,137,118,83,199,138,154,88,156,8,249,7,217,227,35,222,189,9,125,239,36,13,216,218,222,175,253,
10,123,146,221,51,97,121,220,114,76,249,100,10,154,78,52,69,220,73,52,0,190,210,237,215,33,186,62,218,51,161,54,165,22,237,131,218,3,182,115,193,122,244,187,27,198,123,145,210,73,232,36,116,18,58,9,157,
196,183,232,36,225,20,157,36,156,162,147,40,69,39,9,39,32,157,36,156,128,116,18,58,9,157,132,78,66,39,161,147,208,73,84,195,209,73,232,36,110,58,9,157,36,248,120,18,73,43,33,38,38,6,153,153,153,200,204,
204,196,152,49,99,96,177,88,176,118,237,90,159,197,219,211,30,254,176,156,164,89,106,174,170,59,167,46,233,196,196,19,176,230,88,97,205,177,226,238,146,187,177,120,209,98,84,87,87,163,166,166,6,59,119,
238,68,121,121,185,234,209,139,242,184,215,156,196,153,228,44,169,249,159,154,225,117,83,234,128,206,221,237,43,45,175,224,213,155,94,85,221,153,247,181,147,104,112,4,95,235,107,245,190,189,170,185,187,
97,72,52,168,118,140,119,119,17,118,197,21,116,18,58,9,157,132,78,66,39,161,147,208,73,186,14,8,208,73,232,36,116,18,58,137,127,209,73,78,103,209,73,232,36,254,1,233,36,116,18,229,77,116,18,58,9,157,132,
78,226,243,28,64,39,17,192,73,52,26,141,103,167,223,167,78,210,110,111,111,105,75,107,75,180,102,91,209,150,209,134,182,140,54,152,52,38,44,58,119,17,210,211,211,145,145,145,1,0,216,178,101,75,132,156,
100,120,115,221,129,135,14,36,54,142,111,244,76,176,110,180,98,199,142,29,168,169,169,65,77,77,13,44,22,75,192,230,165,207,156,196,85,237,42,214,89,117,121,144,225,113,146,207,162,62,131,238,75,157,184,
78,178,55,119,47,157,132,78,66,39,161,147,208,73,232,36,190,69,39,9,167,232,36,225,20,157,68,41,58,73,56,1,233,36,225,4,164,147,208,73,232,36,116,18,58,9,157,132,78,162,26,142,78,66,39,113,211,73,34,224,
36,174,104,23,236,201,118,56,156,14,196,198,198,34,35,35,3,153,153,153,158,128,223,126,251,173,231,113,159,57,137,117,184,213,186,239,55,251,12,39,38,157,128,43,174,227,175,88,241,227,10,12,31,60,28,213,
213,213,48,155,205,0,128,31,126,248,193,243,87,246,169,147,88,236,150,26,141,81,99,80,194,1,192,155,251,223,68,217,19,101,208,106,181,170,219,59,181,111,98,159,58,201,161,204,67,208,185,117,170,205,78,
39,241,42,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,226,95,116,146,211,89,116,18,58,137,127,64,58,9,157,68,121,19,157,132,78,66,39,161,147,248,60,7,208,73,122,209,73,156,185,78,
169,252,154,114,88,114,44,112,197,186,224,138,115,225,127,107,254,23,147,39,79,246,44,110,0,104,104,104,192,242,229,203,61,97,251,204,73,218,77,237,150,186,243,234,12,205,35,79,222,166,164,230,173,26,
148,237,44,131,36,73,168,169,169,1,0,148,151,151,71,198,73,172,117,214,26,99,155,209,224,61,161,216,93,140,178,47,233,36,116,18,58,9,157,132,78,2,208,73,124,194,209,73,212,14,102,233,36,116,18,58,73,55,
138,78,162,250,70,58,73,15,2,210,73,194,13,72,39,233,44,58,9,157,164,51,28,157,68,41,183,155,78,66,39,129,155,78,226,166,147,208,73,186,231,36,186,116,93,98,211,136,38,56,19,156,144,53,50,100,141,140,
182,246,54,196,198,198,122,134,106,0,64,115,115,51,234,235,235,251,222,73,28,99,28,56,124,231,97,180,14,59,121,58,121,201,129,75,48,123,214,108,159,23,31,61,122,20,235,214,173,243,180,94,159,57,137,211,
234,180,104,92,26,31,134,120,251,243,183,177,247,171,189,62,123,9,239,197,30,113,39,105,72,105,128,211,233,132,86,171,13,216,176,210,73,124,91,144,78,66,39,161,147,208,73,232,36,222,47,160,147,208,73,
78,115,209,73,194,41,58,137,82,116,146,112,2,210,73,194,9,72,39,161,147,208,73,232,36,116,18,58,9,157,68,53,28,157,132,78,226,238,166,147,24,140,134,129,106,83,148,55,70,220,73,112,49,18,118,62,178,19,
150,193,22,72,118,9,26,135,6,143,23,61,142,194,194,66,159,109,95,69,69,5,62,250,232,163,190,119,18,0,144,37,25,238,104,55,16,13,184,224,66,217,177,50,52,55,54,251,236,37,234,234,234,60,59,253,136,59,73,
89,83,25,246,126,77,39,241,217,26,208,73,232,36,116,18,58,9,157,164,163,232,36,116,18,165,232,36,160,147,132,87,116,18,165,232,36,225,4,164,147,132,19,144,78,66,39,161,147,208,73,232,36,116,18,58,137,
106,56,58,9,157,196,221,77,39,137,157,18,155,115,228,182,35,176,167,218,161,107,209,65,215,170,67,140,62,6,57,57,57,168,173,173,245,172,107,22,139,5,110,119,4,156,68,155,161,141,111,28,219,232,51,92,227,
140,31,206,192,148,137,83,60,119,32,7,128,226,226,98,172,92,185,50,50,78,226,95,31,127,242,49,246,238,222,27,176,151,80,42,226,78,226,50,118,44,50,58,137,155,78,66,39,161,147,208,73,232,36,254,69,39,161,
147,40,69,39,1,157,36,188,162,147,40,69,39,9,39,32,157,36,156,128,116,18,58,9,157,132,78,66,39,161,147,208,73,84,195,209,73,68,113,18,157,110,176,174,176,238,236,58,200,26,25,209,117,209,136,174,143,70,
122,122,58,74,75,75,161,209,104,60,127,169,178,206,41,167,156,0,84,187,216,130,185,72,119,156,100,224,192,128,145,35,195,116,177,133,177,253,203,175,47,135,247,205,43,158,253,241,89,140,30,61,26,146,116,
242,230,21,251,247,239,199,161,67,135,250,222,73,116,113,186,120,135,214,225,51,97,207,182,61,168,40,175,64,102,102,166,231,72,37,47,47,15,7,14,28,16,195,73,234,234,235,112,248,240,97,28,57,114,132,78,
66,39,233,105,43,6,155,78,39,161,147,208,73,232,36,116,18,58,9,157,36,176,232,36,116,18,58,9,157,164,163,232,36,116,18,58,9,157,228,100,56,58,9,157,4,160,147,208,73,84,201,225,63,216,73,226,112,102,123,
138,111,15,187,80,78,162,29,171,29,93,252,112,49,26,199,53,34,246,120,44,98,143,199,226,150,166,91,32,73,18,234,234,234,60,45,25,49,39,137,235,23,151,238,142,113,3,18,96,27,96,131,109,128,13,3,182,14,
192,148,235,167,120,14,2,106,106,106,80,90,90,138,55,222,120,67,12,39,217,245,237,46,188,178,235,21,207,81,11,0,196,196,196,168,174,87,202,79,159,58,137,195,225,240,132,105,110,110,246,44,2,165,232,36,
157,69,39,161,147,208,73,232,36,116,18,58,9,157,132,78,18,50,92,200,128,0,157,132,78,66,39,57,165,128,116,146,158,4,164,147,132,27,144,78,210,89,116,18,58,73,103,56,58,137,82,110,55,157,132,78,2,55,157,
68,165,63,59,28,39,209,33,15,231,30,188,251,32,28,169,14,196,149,196,193,80,98,192,185,137,231,162,106,95,149,79,75,121,53,189,231,131,131,245,96,245,164,119,223,219,73,148,14,123,165,58,156,36,67,59,
204,54,208,134,198,241,141,192,185,29,19,86,28,94,129,236,203,179,97,54,155,177,119,239,94,212,212,212,160,170,170,202,179,63,141,140,147,120,213,254,109,251,241,245,193,175,145,145,145,129,244,244,116,
156,127,254,249,104,108,108,196,170,85,171,196,112,18,91,149,13,135,15,31,70,73,73,9,36,73,194,123,239,189,231,179,105,16,202,73,56,158,132,78,66,39,161,147,208,73,232,36,116,18,58,73,192,11,233,36,221,
12,23,50,32,64,39,161,147,208,73,78,41,32,157,164,39,1,233,36,225,6,164,147,116,22,157,132,78,210,25,142,78,162,148,155,78,66,39,249,169,57,137,237,10,27,170,46,169,66,235,224,142,163,101,225,156,164,
118,90,45,234,166,212,1,18,160,109,209,226,178,131,151,193,184,211,136,230,230,102,88,173,86,255,166,247,124,112,159,57,137,51,206,233,233,93,117,25,93,72,151,210,49,120,212,96,92,123,237,181,0,128,61,
123,246,160,178,178,18,159,124,242,137,24,78,114,98,255,9,124,250,233,167,158,131,130,194,194,66,0,29,125,133,66,56,73,123,77,187,231,47,107,105,105,193,183,223,126,75,39,161,147,208,73,232,36,116,18,
58,201,201,162,147,208,73,232,36,116,146,211,84,116,146,112,138,78,162,20,157,36,156,128,116,146,112,2,210,73,232,36,116,18,58,9,157,132,78,242,31,224,36,217,51,178,7,181,167,158,236,35,22,201,73,116,
0,206,107,188,161,17,251,103,239,71,108,101,44,146,118,37,97,226,209,137,176,52,158,220,206,121,175,127,222,139,199,127,187,23,172,171,183,187,78,226,205,16,62,78,98,79,179,67,142,146,97,205,177,194,154,
99,197,181,53,215,98,162,101,162,103,184,198,222,189,123,61,123,0,239,110,224,136,56,9,0,28,219,127,12,7,190,58,128,204,204,76,140,26,53,10,115,231,206,133,221,110,199,210,165,75,61,97,128,8,58,73,204,
241,24,236,61,178,23,71,143,30,197,150,45,29,7,194,253,250,245,243,217,220,8,227,36,74,160,154,154,26,58,137,127,209,73,66,61,166,147,208,73,232,36,116,18,58,9,157,132,78,18,60,32,64,39,1,64,39,9,175,
232,36,74,209,73,194,9,72,39,9,39,32,157,132,78,66,39,161,147,208,73,232,36,93,59,73,92,106,220,141,222,47,16,201,73,116,146,36,77,30,244,228,160,129,123,46,220,131,248,35,241,72,217,154,130,65,165,131,
60,219,57,229,134,21,202,95,236,189,56,131,181,146,26,57,116,229,36,138,205,40,229,227,36,206,225,78,52,140,109,192,137,51,79,160,252,186,114,12,168,28,128,236,175,178,81,93,93,13,171,213,42,142,147,40,
117,134,237,12,228,100,231,224,210,217,151,122,172,164,168,168,8,101,101,101,62,221,192,125,225,36,26,53,39,73,42,79,194,75,47,189,132,187,238,186,11,127,251,219,223,32,203,50,174,188,242,74,104,181,90,
159,110,13,255,78,162,80,46,210,29,39,81,169,224,78,162,188,177,164,164,4,37,37,37,120,255,253,247,61,235,158,210,130,254,61,173,17,117,18,239,117,143,78,210,89,116,146,80,143,233,195,93,140,202,0,0,32,
0,73,68,65,84,36,116,18,58,9,157,132,78,66,39,161,147,4,15,8,208,73,0,208,73,194,43,58,137,82,116,146,112,2,210,73,194,9,72,39,161,147,208,73,232,36,116,18,58,73,215,78,18,115,78,204,173,21,87,85,160,
113,76,163,167,133,68,115,146,140,227,87,30,71,91,102,27,162,171,162,145,255,239,124,232,42,116,176,28,19,200,73,148,1,47,237,153,237,200,154,145,133,69,88,132,226,226,98,236,217,179,7,69,69,69,158,13,
108,95,59,137,22,121,248,85,244,117,209,249,214,92,171,167,3,115,122,233,116,124,243,251,111,32,203,50,10,11,11,49,119,238,92,100,101,101,225,200,145,35,176,219,237,202,34,8,218,213,214,85,167,166,90,
207,107,123,123,123,64,39,230,224,193,131,27,85,199,147,228,87,231,99,95,243,62,108,221,186,21,91,183,110,69,124,124,60,134,13,27,6,139,197,226,249,96,32,194,227,73,188,25,162,181,181,21,219,183,111,247,
252,174,44,26,58,9,157,36,196,15,157,132,78,2,58,9,157,132,78,66,39,161,147,0,116,18,58,9,157,132,78,66,39,161,147,248,23,157,228,116,22,157,132,78,226,31,144,78,66,39,81,222,212,231,78,162,197,47,82,
254,39,197,231,69,98,57,201,185,49,243,75,22,150,224,223,235,255,141,67,191,60,132,214,97,173,194,56,137,70,146,164,201,166,11,77,25,237,233,237,112,26,157,168,188,178,18,165,43,74,49,122,250,104,164,
165,165,249,124,152,119,143,171,127,207,235,169,58,137,127,43,6,117,18,0,24,96,25,128,24,91,12,230,206,157,11,0,40,42,42,194,166,77,155,96,179,217,196,112,146,75,75,47,69,209,75,69,248,250,235,175,81,
81,81,129,194,194,66,92,115,205,53,56,120,240,32,26,27,27,149,69,16,180,171,173,111,156,196,181,15,26,141,6,37,37,37,120,233,165,151,124,214,61,101,113,168,117,177,69,196,73,148,69,225,118,187,3,126,15,
214,122,93,245,244,211,73,232,36,160,147,208,73,232,36,116,18,58,201,201,22,4,157,132,78,66,39,161,147,244,180,232,36,116,146,83,13,72,39,233,73,64,58,73,184,1,233,36,157,69,39,161,147,116,134,163,147,
40,21,150,147,12,28,49,80,96,39,137,198,109,174,39,93,40,122,172,8,245,147,235,1,136,227,36,58,0,136,153,28,115,139,37,215,130,166,51,154,80,55,173,14,9,135,19,112,238,143,231,162,236,27,95,39,241,246,
17,239,22,83,102,112,42,78,146,152,152,232,179,148,58,157,100,169,143,147,40,221,111,81,217,81,152,54,100,26,126,249,203,95,98,210,164,73,17,117,18,45,128,235,227,23,199,95,216,56,166,17,208,118,76,204,
111,201,71,244,43,209,104,168,111,192,168,81,163,48,111,222,60,68,69,69,161,180,180,212,39,164,90,55,92,176,46,96,181,62,106,229,113,91,91,27,244,122,189,207,55,219,233,116,34,59,59,251,144,234,117,183,
38,86,79,68,85,69,21,170,42,170,240,221,119,223,33,55,55,23,133,133,133,40,40,40,64,81,81,145,167,197,130,245,96,245,164,119,95,249,131,123,116,127,18,111,39,145,101,25,71,142,28,65,73,73,9,157,196,191,
232,36,161,90,142,78,66,39,1,157,132,78,66,39,161,147,208,73,124,2,2,116,18,58,201,105,47,58,73,56,69,39,81,138,78,18,78,64,58,73,56,1,233,36,116,18,58,9,157,228,191,197,73,76,215,154,238,172,154,85,5,
103,156,211,243,98,161,156,68,55,71,135,195,191,60,140,45,239,110,65,201,47,74,208,175,160,159,16,78,210,49,158,164,211,73,220,209,110,184,99,220,168,188,190,18,231,60,118,14,82,82,82,124,102,24,241,241,
36,74,247,91,146,51,9,206,173,78,20,20,20,224,15,127,248,3,102,206,156,137,184,184,184,136,56,137,6,65,198,147,52,255,216,140,53,107,214,224,249,231,159,135,201,100,194,111,127,251,91,76,152,48,33,160,
35,83,173,135,95,173,245,212,66,43,159,163,156,47,123,87,200,251,147,40,78,2,0,71,143,30,197,154,53,107,144,155,155,11,73,146,124,186,129,251,194,73,84,239,79,146,95,157,239,57,133,84,90,73,177,18,239,
110,13,255,78,162,96,33,212,126,247,126,14,56,133,251,147,208,73,188,158,243,47,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,159,162,147,208,73,212,138,78,210,69,209,73,232,36,126,161,232,36,61,
14,72,39,161,147,208,73,232,36,167,203,73,12,120,44,247,138,92,225,156,68,234,236,98,203,53,221,100,42,177,62,108,133,174,73,135,65,127,31,132,228,29,201,152,50,101,10,92,46,87,192,135,169,245,19,250,
159,255,122,175,131,222,167,159,202,105,130,114,138,16,31,31,15,173,86,235,243,249,6,131,1,73,73,73,131,95,127,253,245,163,39,157,228,114,29,172,3,173,104,156,208,136,221,127,220,13,203,50,11,210,178,
210,196,115,18,0,208,202,90,252,44,251,103,184,245,198,91,49,107,214,44,159,15,21,198,73,218,54,183,121,8,226,247,191,255,61,102,205,154,37,150,147,200,7,101,148,150,150,98,205,154,53,88,177,98,5,210,
210,210,112,219,109,183,137,231,36,146,36,225,232,209,163,248,235,95,255,10,189,94,239,211,13,44,148,147,184,92,46,207,169,37,157,228,228,98,166,147,132,252,242,248,63,231,95,116,146,80,143,233,36,116,
18,58,9,157,132,78,66,39,161,147,4,15,8,208,73,0,208,73,194,43,58,137,82,116,146,112,2,210,73,194,9,72,39,161,147,208,73,126,74,78,146,220,63,249,121,113,157,36,25,191,141,93,25,155,120,244,23,71,225,
138,61,217,21,38,156,147,180,14,105,69,84,99,20,114,94,201,193,213,245,87,139,231,36,144,0,71,178,3,238,197,110,76,185,100,74,64,207,167,48,78,114,126,229,249,112,55,187,241,248,227,143,251,16,132,48,
78,146,241,109,6,222,251,231,123,248,205,111,126,131,180,180,52,252,254,247,191,199,248,241,227,197,114,18,165,185,255,250,215,191,98,229,202,149,24,60,120,176,152,78,2,116,140,43,41,45,45,245,44,82,33,
157,196,123,3,76,39,1,157,132,78,66,39,161,147,208,73,232,36,116,18,128,78,226,19,142,78,226,189,39,161,147,0,116,18,58,9,157,228,148,2,210,73,122,18,144,78,18,110,64,58,73,103,209,73,232,36,157,225,210,
18,46,72,88,101,159,97,15,8,39,140,147,24,150,24,12,251,126,179,15,123,158,222,131,214,220,142,131,130,72,59,201,201,235,110,93,102,90,212,60,178,25,238,88,55,78,156,117,2,59,254,186,3,163,31,26,45,208,
117,183,188,156,4,0,242,28,121,152,147,49,7,87,92,113,133,207,121,171,80,78,242,143,87,255,1,179,217,236,185,98,148,112,78,98,109,181,98,195,134,13,88,185,114,37,70,141,26,133,251,238,187,15,241,241,241,
62,139,179,183,157,36,232,125,220,21,39,113,187,221,158,225,26,67,135,14,133,197,98,241,220,117,195,127,187,23,172,171,183,187,78,162,118,31,119,77,40,39,241,159,201,161,67,135,84,79,45,79,151,147,248,
23,157,164,39,45,73,39,9,22,38,212,151,199,255,57,255,162,147,132,122,76,39,161,147,208,73,232,36,116,18,58,9,157,36,120,64,128,78,2,128,78,18,94,209,73,148,162,147,132,19,144,78,18,78,64,58,9,157,132,
78,226,231,36,163,46,30,181,46,181,45,213,231,141,145,116,18,79,64,73,146,210,140,23,27,75,180,191,211,26,140,7,140,24,252,226,96,79,184,25,51,102,120,40,194,251,195,148,31,255,190,68,255,128,254,231,
39,46,151,11,113,113,113,170,93,110,81,81,81,141,122,189,62,127,195,134,13,181,128,159,147,24,23,26,13,205,195,154,81,126,109,57,118,252,101,7,26,71,55,138,233,36,0,208,58,164,21,211,126,55,13,9,9,9,226,
58,73,254,39,249,152,62,125,58,110,185,229,22,207,185,171,80,78,114,240,223,7,241,204,51,207,192,108,54,227,177,199,30,195,164,73,147,196,115,18,0,248,240,195,15,177,114,229,74,76,157,58,21,133,133,133,
62,139,83,8,39,145,36,9,165,165,165,248,127,255,239,255,121,22,171,144,78,226,191,65,166,147,208,73,130,208,132,127,95,181,242,216,191,232,36,161,126,252,95,67,39,233,110,43,6,155,78,39,233,78,88,239,
69,74,39,161,147,208,73,232,36,116,18,223,162,147,132,83,116,146,112,138,78,162,20,157,36,156,128,116,146,112,2,210,73,232,36,125,238,36,58,233,249,169,83,166,254,82,237,67,132,112,146,236,71,178,215,
197,70,199,34,253,179,116,207,243,194,57,73,83,97,19,210,54,165,33,255,79,249,48,72,6,241,156,68,142,146,97,190,200,140,29,47,237,192,244,121,211,197,116,18,200,192,181,201,215,98,238,185,115,145,158,
158,46,166,147,20,188,95,128,141,27,55,98,201,146,37,152,57,115,166,79,203,9,225,36,149,59,43,241,253,247,223,227,209,71,31,133,201,100,194,253,247,223,143,152,152,24,241,156,196,98,177,96,237,218,181,
40,42,42,194,217,103,159,237,179,56,133,113,18,0,216,176,97,3,157,196,187,232,36,61,105,73,58,73,176,48,161,190,60,254,207,249,23,157,36,212,99,58,73,119,233,161,171,233,116,18,58,9,0,58,9,157,132,78,
210,89,116,18,229,32,151,78,226,93,116,146,46,138,78,66,39,241,11,69,39,233,113,64,58,9,157,164,207,157,36,73,90,53,254,231,227,239,48,148,24,252,95,43,142,147,212,206,175,69,191,47,251,33,119,109,46,
0,65,157,68,142,146,145,182,57,13,99,158,29,131,255,153,250,63,226,57,9,0,212,78,171,197,188,229,243,96,174,53,139,233,36,115,154,231,32,225,135,4,44,184,125,1,188,55,208,194,56,201,132,15,38,224,227,
143,63,198,166,77,155,176,120,241,98,76,156,56,81,60,39,1,128,109,219,182,97,229,202,149,152,54,109,26,46,185,228,18,241,156,68,150,101,148,149,149,97,213,170,85,56,126,252,184,207,226,236,109,39,233,
242,254,36,222,51,176,88,44,216,179,103,143,39,144,255,118,47,88,87,111,119,157,196,187,232,36,116,18,181,128,116,18,191,162,147,132,122,76,39,233,46,61,116,53,157,78,66,39,1,64,39,161,147,208,73,58,139,
78,162,28,228,210,73,188,139,78,210,69,209,73,232,36,126,161,232,36,61,14,72,39,249,207,116,146,120,233,221,169,19,167,254,76,237,13,145,119,146,20,105,117,206,31,114,22,233,235,245,200,220,144,233,51,
77,40,39,177,14,180,98,192,91,3,144,247,98,158,184,78,2,0,185,27,115,177,100,247,18,49,157,4,0,150,141,93,134,252,130,124,113,157,164,104,121,17,76,105,38,159,75,91,9,229,36,102,179,25,107,215,174,133,
217,108,198,226,197,139,17,31,31,47,158,147,0,29,35,33,246,237,219,135,71,31,125,20,209,209,209,125,230,36,58,73,146,38,15,122,114,80,134,57,221,28,224,36,213,173,213,158,161,25,146,36,97,195,134,13,216,
177,99,7,28,14,135,79,119,176,90,184,158,58,137,193,96,240,57,211,11,203,73,100,89,134,217,108,246,4,242,223,238,5,235,234,165,147,208,73,220,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,
58,9,157,164,103,69,39,161,147,156,106,64,58,73,79,2,210,73,194,13,72,39,233,172,158,59,73,142,180,126,204,204,49,179,19,247,5,158,10,10,227,36,149,179,43,49,224,221,1,24,248,127,3,61,211,132,115,18,104,
129,236,117,217,24,254,127,195,197,184,143,187,241,98,227,170,166,43,154,96,235,111,3,180,29,207,215,223,80,143,75,30,184,68,140,251,184,171,57,201,61,149,247,224,134,49,55,160,176,176,80,76,39,113,172,
114,224,201,39,159,196,244,233,211,61,151,182,18,202,73,26,26,26,96,181,90,177,106,213,42,140,28,57,18,179,102,205,18,211,73,44,22,11,86,175,94,141,180,180,52,228,228,228,136,55,158,68,9,249,218,107,175,
225,216,177,99,98,142,39,241,111,1,255,237,94,176,174,94,58,9,157,196,77,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,122,86,116,18,58,201,169,6,164,147,244,36,32,157,36,220,128,
98,59,73,130,244,238,212,113,234,67,54,132,112,146,1,203,6,204,142,43,143,67,230,71,190,67,54,132,114,18,123,63,59,134,172,28,130,254,239,246,7,32,168,147,0,192,232,21,163,113,139,235,22,49,157,196,224,
54,224,137,57,79,192,225,116,136,233,36,11,43,22,162,238,227,58,44,90,184,200,211,121,238,63,211,136,58,137,238,207,58,108,251,110,27,222,126,251,109,44,94,188,24,217,217,217,226,57,9,208,113,105,43,37,
228,128,1,3,250,204,73,116,64,247,156,68,150,101,108,223,190,29,0,144,154,154,138,170,170,42,79,139,41,51,56,21,39,73,76,76,244,89,228,238,14,39,89,218,35,39,145,101,25,59,119,238,196,222,189,123,233,
36,116,18,58,137,90,64,58,137,95,209,73,66,61,166,147,208,73,232,36,116,18,58,9,157,132,78,18,60,32,64,39,1,64,39,9,175,232,36,74,209,73,194,9,72,39,9,39,32,157,36,108,39,201,145,214,143,153,53,102,118,
98,81,224,217,150,48,78,98,190,192,140,236,87,179,145,245,225,201,125,177,112,78,2,13,48,252,183,195,97,218,100,18,215,73,12,110,3,30,121,243,17,52,236,110,16,211,73,158,46,123,26,63,159,244,115,207,241,
159,112,78,114,104,229,33,20,239,47,198,146,37,75,196,116,146,118,107,59,62,250,232,35,20,21,21,225,230,155,111,22,211,73,0,224,163,143,62,2,0,220,116,211,77,226,141,39,81,62,244,213,87,95,197,87,95,125,
37,230,120,18,37,36,199,147,128,78,66,39,161,147,208,73,232,36,157,45,72,39,161,147,208,73,232,36,116,18,239,23,208,73,232,36,167,185,232,36,225,20,157,68,41,58,73,56,1,233,36,225,4,20,219,73,98,165,149,
227,70,140,91,44,172,147,228,252,38,103,118,116,117,52,50,62,205,240,153,38,148,147,216,83,237,24,241,216,8,164,125,221,209,175,45,164,147,104,218,53,24,243,203,49,184,196,116,73,159,59,137,207,241,160,
36,73,55,102,47,201,94,100,62,191,163,229,148,169,113,81,113,184,107,233,93,112,185,92,40,46,46,134,205,102,11,232,56,247,239,84,247,127,94,225,135,230,230,230,128,255,45,94,169,232,232,232,59,167,79,
159,126,163,106,192,80,78,178,168,120,17,242,171,242,113,206,57,231,136,233,36,246,53,118,172,123,101,157,231,170,81,254,51,21,194,73,36,73,194,170,85,171,48,109,218,52,156,121,230,153,98,58,137,213,106,
197,234,213,171,113,213,85,87,193,104,52,138,233,36,199,142,29,195,178,101,203,60,95,20,33,157,164,165,165,133,78,66,39,161,147,168,5,164,147,248,21,157,36,212,99,58,9,157,132,78,66,39,161,147,208,73,
232,36,193,3,2,116,18,0,116,146,240,138,78,162,20,157,36,156,128,116,146,112,2,138,237,36,41,210,234,97,151,12,91,148,126,60,253,116,102,243,212,105,113,18,243,249,102,100,191,150,13,211,231,38,207,52,
225,156,68,114,75,24,183,104,28,12,135,13,98,58,9,0,24,14,26,112,215,235,119,161,95,138,128,78,98,112,27,240,114,234,203,152,48,110,130,184,78,178,243,143,59,113,225,133,23,98,210,164,73,98,58,73,115,
67,51,86,173,90,133,171,175,190,218,115,208,41,156,147,148,149,149,225,237,183,223,246,12,124,17,206,73,0,96,251,246,237,168,173,173,197,25,103,156,33,166,147,72,146,132,215,95,127,29,69,69,69,226,58,
137,178,152,252,167,209,73,148,162,147,248,61,7,208,73,232,36,116,18,213,67,49,239,173,1,157,132,78,66,39,161,147,208,73,58,138,78,66,39,81,138,78,2,58,73,120,69,39,81,138,78,18,78,64,58,73,56,1,133,119,
146,236,37,217,139,226,180,113,48,109,50,5,125,93,184,117,218,156,196,214,223,134,51,254,247,12,36,238,233,56,243,18,206,73,160,5,226,143,196,99,252,47,198,35,43,35,75,76,39,1,128,59,190,185,3,67,183,
15,21,211,73,30,169,120,4,15,14,122,16,109,109,109,98,58,73,243,179,205,216,184,113,35,174,185,230,26,49,157,164,221,218,238,233,225,191,229,150,91,196,116,18,0,120,229,149,87,144,150,150,134,137,19,39,
138,233,36,146,36,225,255,254,239,255,144,152,152,40,174,147,84,85,85,225,203,47,191,164,147,208,73,186,211,187,79,39,161,147,168,181,43,157,132,78,18,100,49,117,167,21,131,77,167,147,208,73,232,36,116,
18,58,9,157,132,78,18,88,116,18,58,9,157,132,78,210,81,116,146,196,241,137,43,199,24,198,156,214,107,91,117,215,73,2,207,245,188,195,165,72,171,179,31,201,94,39,189,36,25,107,167,118,249,199,246,168,10,
10,10,146,242,243,243,215,101,101,101,45,15,153,161,187,78,18,213,28,133,9,55,77,64,84,107,148,152,78,2,0,233,31,165,99,250,107,211,197,117,146,187,90,239,194,240,127,12,71,241,15,197,226,57,201,125,199,
238,195,232,183,70,227,162,243,46,18,211,73,28,203,29,216,182,109,27,106,107,107,49,123,246,108,159,153,119,85,125,230,36,146,36,225,173,183,222,194,180,105,211,144,147,147,35,166,147,88,173,86,188,243,
206,59,30,113,18,210,73,182,111,223,142,79,63,253,84,92,39,209,104,52,28,79,66,39,233,110,239,62,157,132,78,162,214,174,116,18,58,73,144,197,212,157,86,12,54,157,78,66,39,161,147,208,73,232,36,116,18,
58,73,96,209,73,232,36,116,18,58,73,71,209,73,140,23,27,87,13,26,55,200,208,239,219,126,167,20,206,187,78,235,120,146,166,43,154,208,60,172,25,99,239,28,11,195,97,67,208,215,247,180,78,235,120,18,57,74,
70,202,119,41,40,124,176,80,92,39,129,12,92,184,250,66,76,109,152,42,166,147,92,223,124,61,22,28,89,128,119,95,125,87,76,39,25,184,108,32,6,36,13,64,97,97,161,152,78,210,216,216,136,55,223,124,51,224,
210,86,93,85,159,58,201,177,99,199,176,121,243,102,204,157,59,87,76,39,1,128,127,253,235,95,72,75,75,195,208,161,67,197,116,18,73,146,240,218,107,175,225,232,209,163,226,58,73,93,93,29,157,132,78,210,
157,222,125,58,9,157,68,173,93,233,36,116,146,32,139,169,59,173,24,108,58,157,132,78,66,39,161,147,208,73,232,36,116,146,192,162,147,208,73,232,36,116,146,142,234,27,39,49,224,177,236,212,236,59,132,117,
18,227,66,163,33,249,251,100,156,46,43,233,21,39,209,55,234,113,230,117,103,158,150,128,64,47,56,9,0,228,188,156,131,220,191,229,138,235,36,67,44,67,48,239,197,121,136,118,68,139,231,36,115,154,231,96,
254,190,249,48,31,52,227,155,111,190,1,32,152,147,228,45,203,195,15,155,127,192,207,127,254,115,24,12,6,229,61,158,127,123,195,73,60,45,216,233,36,37,218,223,105,13,77,133,77,158,117,78,113,18,133,34,
0,96,214,172,89,144,101,25,31,126,248,161,231,208,203,187,59,206,187,31,81,237,196,201,229,114,33,46,46,78,181,203,45,42,42,170,81,175,215,231,111,216,176,161,214,183,5,187,233,36,146,36,97,211,166,77,
152,62,125,58,114,115,115,197,116,146,182,182,54,108,222,188,25,195,134,13,19,215,73,62,249,228,19,108,220,184,81,92,39,81,254,165,147,128,78,66,39,161,147,120,30,251,23,157,132,78,66,39,161,147,208,73,
232,36,116,18,58,137,79,209,73,232,36,106,69,39,233,162,232,36,116,18,191,80,2,59,73,50,126,155,57,41,115,81,126,91,126,119,63,91,181,122,213,73,154,71,54,35,255,153,124,24,15,159,250,37,184,122,197,73,
220,177,110,164,125,145,134,17,79,140,56,229,128,64,47,57,9,0,140,191,99,60,178,42,178,196,116,146,60,71,30,230,255,48,31,154,47,52,125,226,36,1,167,243,82,138,180,58,231,55,57,29,225,250,121,133,3,48,
167,101,14,22,190,179,16,119,142,184,19,213,213,213,168,169,169,233,248,144,206,158,86,239,238,96,173,86,11,73,146,208,212,212,4,179,217,140,134,134,6,24,141,70,36,39,39,171,6,76,73,73,185,234,172,179,
206,10,184,204,154,79,11,74,146,116,99,246,35,217,235,106,231,215,118,244,87,123,13,217,88,88,177,16,186,63,235,208,208,208,128,89,179,102,1,0,214,175,95,31,208,211,160,198,16,222,167,5,178,44,195,96,
48,160,185,185,57,96,145,119,30,9,221,180,105,211,38,207,23,167,199,227,73,36,73,194,230,205,155,49,125,250,116,196,199,199,139,55,158,68,233,83,246,31,83,162,180,128,16,78,162,209,104,176,121,243,102,
232,245,122,232,245,122,49,157,164,189,189,29,107,214,172,241,116,211,209,73,232,36,42,161,149,207,161,147,208,73,232,36,65,190,60,254,207,249,23,157,36,212,99,58,9,157,132,78,66,39,161,147,208,73,232,
36,193,3,2,116,18,0,116,146,240,138,78,162,20,157,36,156,128,194,59,137,233,50,211,162,244,126,233,72,217,158,210,221,207,15,168,94,119,18,103,156,19,103,94,127,234,67,54,122,205,73,32,1,67,255,52,20,
89,31,100,5,125,95,119,171,215,156,196,120,196,136,105,247,76,19,215,73,238,110,184,27,174,15,93,168,43,173,19,111,60,201,132,15,38,96,84,234,40,164,166,164,98,205,154,53,1,39,241,193,78,146,128,62,26,
79,82,242,77,9,54,126,182,17,35,71,142,244,57,116,234,173,241,36,97,57,137,205,102,195,166,77,155,112,193,5,23,136,233,36,0,84,49,71,40,39,177,217,108,120,235,173,183,144,144,144,32,166,147,104,181,90,
236,220,185,19,181,181,181,116,18,58,9,157,132,78,226,166,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,61,43,58,9,157,228,84,3,138,235,36,81,184,45,94,31,127,189,176,78,162,187,
92,135,244,79,210,145,80,156,208,221,121,248,84,175,59,137,117,160,21,169,91,82,49,226,183,167,54,100,163,87,157,4,0,38,205,157,132,216,234,216,83,10,217,107,78,162,149,181,24,245,247,81,24,183,113,156,
152,78,114,121,245,229,152,121,98,38,54,255,99,179,120,227,73,110,127,235,118,184,158,115,33,55,33,23,177,177,29,139,184,55,199,147,132,229,36,109,214,54,20,21,21,249,48,132,80,78,34,73,29,151,182,26,
57,114,36,226,227,227,85,91,196,239,15,239,123,39,177,217,108,1,173,40,148,147,72,146,132,245,235,215,227,216,177,99,226,58,73,99,99,35,138,138,138,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,
36,116,18,58,9,157,132,78,66,39,161,147,244,176,232,36,116,146,83,13,40,174,147,68,227,182,216,130,216,155,134,235,134,103,9,235,36,150,92,11,70,253,106,20,116,54,213,147,194,144,213,39,78,226,142,118,
99,232,115,67,145,245,126,248,67,54,122,221,73,18,127,76,196,152,187,198,132,29,16,232,101,39,73,114,38,97,198,163,51,48,44,122,152,120,78,114,126,229,249,152,89,51,19,182,163,54,124,190,241,115,241,156,
36,238,249,56,212,237,169,195,153,147,58,198,54,9,233,36,219,183,111,135,201,100,242,48,132,112,78,2,192,51,166,164,171,138,136,147,72,146,132,162,162,34,156,127,254,249,226,58,73,89,89,25,94,126,249,
101,113,157,68,171,213,226,224,193,131,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,122,88,116,18,58,201,169,6,20,218,73,98,38,199,220,146,99,202,201,
72,175,73,239,214,251,34,226,36,250,6,125,88,67,54,250,204,73,32,1,103,206,61,19,49,213,129,39,59,221,169,94,119,18,0,200,91,153,135,1,239,12,8,43,32,208,7,78,50,181,120,42,70,191,59,90,76,39,233,191,
181,63,238,190,228,110,220,123,239,189,98,58,201,241,47,142,163,190,190,30,185,185,185,98,58,137,70,163,193,23,95,124,225,97,8,33,157,164,168,168,8,163,70,141,82,109,17,191,63,60,50,78,98,179,217,80,91,
91,139,241,227,199,3,232,29,39,145,58,187,216,114,77,55,153,74,172,15,91,209,58,164,181,99,83,34,119,172,115,121,203,242,2,62,204,187,159,208,96,48,192,98,177,160,173,173,45,160,159,80,237,244,83,57,77,
80,78,17,226,227,227,61,235,171,82,6,131,1,73,73,73,131,95,127,253,245,163,167,236,36,22,139,197,211,85,71,39,161,147,208,73,232,36,190,69,39,9,213,114,116,18,58,9,232,36,116,18,58,9,157,132,78,226,19,
16,160,147,208,73,78,123,209,73,194,41,58,137,82,116,146,112,2,122,59,137,233,66,83,70,198,222,12,196,86,117,125,97,166,136,56,73,123,122,59,50,254,149,129,236,87,3,247,167,161,170,79,157,196,184,207,
136,113,119,140,235,81,64,165,250,196,73,0,224,172,159,159,133,232,19,209,234,31,208,69,245,186,147,156,211,126,14,198,174,31,139,140,166,12,0,130,57,73,198,183,25,152,98,154,2,155,197,134,247,222,123,
79,245,96,193,29,73,39,169,222,92,141,237,223,111,71,97,97,161,184,78,82,90,90,234,25,83,34,164,147,40,67,54,10,11,11,85,91,197,235,179,35,227,36,146,36,97,239,222,189,24,54,108,24,0,65,157,68,150,101,
104,181,90,216,108,182,128,126,66,33,156,68,163,209,192,233,116,210,73,232,36,106,161,149,207,161,147,208,73,232,36,116,18,208,73,232,36,116,18,58,9,157,132,78,2,58,9,157,36,176,232,36,116,18,58,201,127,
186,147,184,135,186,145,183,58,175,203,247,69,204,73,218,83,219,113,198,221,103,32,113,95,224,225,122,176,234,83,39,1,128,220,23,115,49,232,239,131,186,29,80,169,62,115,146,148,45,41,40,252,85,232,46,
224,96,213,235,78,146,99,203,193,146,230,37,104,251,176,227,64,64,56,39,145,15,202,120,240,190,7,241,208,67,15,161,165,165,165,87,156,36,172,251,184,87,238,172,244,116,110,206,159,63,31,123,246,236,193,
183,223,126,171,122,114,174,252,0,125,120,31,119,197,73,0,192,108,54,123,78,122,132,116,146,189,123,247,138,237,36,101,101,101,72,74,74,66,84,84,148,184,78,162,209,104,196,29,79,162,209,104,60,93,117,
116,18,58,9,157,132,78,226,91,116,146,80,45,71,39,161,147,128,78,66,39,161,147,208,73,232,36,62,1,1,58,9,157,228,180,23,157,36,156,162,147,40,245,211,113,146,100,156,21,213,26,53,68,72,39,113,14,119,66,
223,160,71,246,107,161,135,108,68,212,73,116,173,58,156,253,243,179,187,59,191,190,119,18,0,152,116,237,164,110,141,204,241,174,238,58,73,200,91,180,72,41,210,234,236,71,58,156,164,122,88,181,170,147,
0,64,107,65,107,143,3,22,20,20,36,89,173,214,117,89,89,89,227,123,205,73,6,217,6,97,126,243,124,24,139,140,176,29,181,137,233,36,131,250,15,194,168,81,163,240,194,11,47,4,28,44,184,79,131,147,4,44,226,
78,39,153,93,121,129,138,147,180,156,116,146,234,214,106,0,64,76,84,12,210,211,211,61,61,3,74,119,137,114,210,223,212,212,228,113,18,163,209,136,152,152,24,213,174,54,101,60,201,105,119,18,101,76,137,
193,96,16,211,73,36,73,242,96,78,176,138,168,147,72,146,132,93,187,118,33,61,61,93,92,39,241,238,12,18,210,73,148,231,232,36,116,18,58,9,157,196,183,232,36,161,90,142,78,66,39,1,157,132,78,66,39,161,147,
208,73,124,2,2,116,18,58,201,105,47,58,73,56,69,39,81,234,167,227,36,121,56,87,215,164,27,156,224,78,200,20,210,73,236,105,118,152,54,154,144,246,101,90,208,247,69,212,73,228,40,25,25,31,101,160,224,247,
5,221,154,97,68,156,36,97,111,2,198,46,25,219,173,128,74,245,217,120,18,0,208,182,104,49,229,210,41,61,10,8,244,193,120,146,65,182,65,152,80,57,1,115,117,115,113,224,243,3,176,180,88,196,115,146,170,138,
42,60,247,220,115,120,224,129,7,60,99,74,78,167,147,156,242,120,18,183,219,141,91,111,189,21,187,119,239,198,183,223,126,27,244,36,9,136,208,120,18,133,33,210,211,211,197,118,18,229,62,57,106,21,113,39,
57,126,252,56,172,86,43,157,132,78,66,39,161,147,248,21,157,164,39,45,73,39,9,22,38,212,151,199,255,57,255,162,147,132,122,76,39,161,147,208,73,232,36,116,18,58,9,157,36,120,64,128,78,2,128,78,18,94,209,
73,148,250,73,57,137,54,67,59,44,161,56,161,95,116,84,180,17,16,208,73,156,113,78,228,255,33,63,232,128,131,136,59,9,36,96,212,67,163,144,186,53,181,203,207,138,136,147,0,192,144,231,134,160,255,123,253,
187,12,168,84,159,142,39,1,128,182,140,54,245,9,65,170,207,198,147,140,175,28,143,105,214,105,72,60,145,136,226,31,138,197,116,146,137,19,39,162,176,176,16,127,254,243,159,125,14,22,220,167,193,73,78,
121,60,9,0,212,214,214,122,198,148,40,221,37,194,140,39,249,73,56,137,197,98,1,208,33,73,106,21,113,39,145,36,9,223,125,247,29,98,98,98,232,36,116,18,58,9,157,196,171,232,36,116,18,58,9,157,132,78,66,
39,161,147,208,73,232,36,116,18,58,9,157,132,78,210,69,209,73,132,113,146,248,232,248,244,184,125,29,59,85,33,157,68,103,213,97,228,35,35,85,223,39,132,147,72,237,18,206,187,248,188,46,63,43,98,78,2,0,
231,204,58,7,58,75,72,217,240,84,159,142,39,81,106,226,245,19,17,119,60,46,248,11,252,170,79,198,147,140,175,28,143,252,234,124,204,200,152,129,205,159,108,134,205,106,19,207,73,92,46,23,150,46,93,138,
87,95,125,21,135,15,31,22,207,73,52,26,13,204,102,115,192,125,220,133,113,18,165,50,50,50,196,116,18,0,168,169,169,9,122,237,45,33,156,100,255,254,253,62,95,4,58,9,157,132,78,66,39,161,147,208,73,232,
36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,228,167,227,36,113,253,226,210,163,235,162,227,117,71,116,178,144,78,226,142,113,35,245,219,84,12,122,35,240,142,228,66,56,9,0,152,
62,51,97,248,83,195,67,126,86,68,157,36,245,223,169,24,245,240,168,174,230,9,32,2,227,73,0,192,21,27,120,242,29,172,250,116,60,73,126,117,62,6,88,7,160,191,177,63,254,253,205,191,79,171,147,168,182,160,
226,36,149,23,84,118,203,73,246,185,246,193,154,99,197,196,235,39,98,239,222,189,1,78,98,52,26,67,58,201,128,1,3,174,26,61,122,244,219,189,234,36,254,157,234,194,57,137,247,191,66,58,73,168,107,111,9,
225,36,118,187,29,197,197,197,116,18,58,9,157,132,78,226,85,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,233,162,232,36,66,57,137,46,78,23,31,181,59,10,206,42,103,147,
144,78,226,214,186,145,183,58,15,73,187,125,191,79,194,56,9,0,140,92,58,18,253,190,233,23,244,179,34,234,36,0,48,226,55,35,144,246,85,240,187,189,40,21,17,39,1,0,89,211,189,85,166,207,157,36,230,120,12,
166,140,156,130,45,91,182,160,165,185,69,60,39,113,187,221,184,228,204,75,80,85,89,133,67,135,14,137,231,36,128,111,199,58,157,164,167,78,2,116,140,41,81,43,33,156,4,0,42,42,42,60,71,202,116,18,58,9,157,
132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,201,79,207,73,0,0,159,162,185,181,185,181,92,72,39,1,128,113,119,140,131,228,62,249,205,23,202,73,224,2,
166,94,48,53,232,103,69,220,73,52,54,13,206,189,228,220,174,230,27,57,39,209,56,2,79,31,213,42,34,78,18,99,139,193,184,113,227,176,241,179,141,226,93,119,203,237,118,35,39,39,7,55,220,112,3,150,46,93,
234,227,36,66,92,119,203,251,95,161,157,68,9,42,164,147,0,234,86,34,140,147,232,116,58,84,84,84,0,160,147,208,73,232,36,116,18,128,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,
73,232,36,116,146,159,166,147,184,170,93,22,219,55,182,82,97,157,36,113,79,34,134,172,26,226,121,159,88,78,2,32,237,139,52,140,120,124,132,234,103,69,220,73,0,32,243,253,76,228,63,155,31,242,115,35,230,
36,0,160,107,233,250,38,42,17,113,146,246,154,118,140,31,63,30,71,203,143,226,216,225,99,226,57,137,219,237,198,163,143,62,138,181,107,215,226,192,129,3,112,139,230,36,158,207,16,213,73,66,61,22,198,73,
210,211,211,3,172,68,24,39,145,101,25,197,197,197,176,219,237,116,18,58,9,157,132,78,2,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,126,154,78,226,180,58,45,
182,189,182,227,206,35,206,61,16,209,73,52,46,13,6,188,57,192,115,245,40,225,156,4,0,134,63,54,28,166,205,129,55,92,22,194,73,0,96,204,47,199,32,113,79,224,121,134,82,17,117,18,0,208,215,6,118,241,122,
87,196,156,68,150,101,76,189,112,42,62,122,239,35,152,107,4,187,238,150,219,221,49,166,36,57,46,25,123,247,236,133,219,45,216,117,183,128,142,190,156,154,154,26,113,157,68,57,132,23,218,73,170,171,171,
125,158,19,202,73,28,14,7,138,138,138,232,36,116,18,58,9,157,4,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,252,116,157,196,90,103,173,113,237,114,237,134,21,
223,65,68,39,209,180,105,80,240,116,1,98,106,99,196,116,18,0,56,247,194,115,161,113,250,158,12,9,227,36,209,85,209,56,235,218,179,130,78,143,184,147,196,29,143,11,57,61,98,78,226,112,56,144,59,42,23,39,
236,39,176,247,179,189,226,141,39,113,187,221,88,180,104,17,118,236,216,129,47,191,252,82,188,241,36,178,44,123,70,68,72,146,36,158,147,72,146,132,140,140,12,207,144,13,225,156,36,62,190,227,26,137,22,
139,197,251,15,23,199,73,98,99,99,177,101,203,22,58,9,157,132,78,66,39,1,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,63,113,39,169,118,21,227,8,190,134,168,
78,18,83,25,131,130,63,22,136,235,36,41,91,82,80,248,171,66,159,231,132,113,18,0,24,248,198,64,12,254,203,96,213,105,17,119,18,0,48,148,24,130,78,139,168,147,184,140,46,140,58,107,20,62,122,231,35,156,
56,120,66,60,39,137,137,137,193,115,207,61,135,155,110,186,73,76,39,25,59,118,44,126,248,225,7,113,157,36,51,51,211,51,100,67,56,39,1,128,140,140,12,159,49,37,66,57,137,44,203,176,88,44,40,47,47,15,8,
160,148,155,78,66,39,161,147,208,73,232,36,1,161,233,36,193,194,132,250,242,248,63,231,95,116,146,80,143,233,36,116,18,58,9,157,132,78,66,39,161,147,4,15,8,208,73,0,208,73,194,43,58,137,82,116,146,112,
2,49,224,137,89,0,0,32,0,73,68,65,84,246,212,73,116,86,29,250,125,221,15,113,255,136,19,211,73,32,3,67,159,29,138,172,15,78,110,71,133,114,18,0,24,119,251,56,24,15,26,3,158,239,174,147,132,12,40,165,72,
171,179,151,116,56,73,243,176,230,30,59,73,87,55,157,183,90,173,168,168,168,120,62,34,78,162,29,164,133,38,73,131,109,207,109,19,207,73,92,46,23,238,184,227,14,236,216,177,3,187,118,237,18,207,73,188,
41,66,72,39,49,26,141,200,200,200,192,225,195,135,197,116,18,255,107,111,9,231,36,25,25,25,216,182,109,91,64,0,165,220,116,18,58,9,157,132,78,66,39,9,8,77,39,9,22,38,212,151,199,255,57,255,162,147,132,
122,76,39,161,147,208,73,232,36,116,18,58,9,157,36,120,64,128,78,2,128,78,18,94,209,73,148,162,147,132,19,48,28,39,209,215,234,145,244,70,18,202,62,41,19,211,73,36,135,132,73,55,78,66,76,117,199,57,135,
112,78,18,91,17,139,73,243,38,5,60,47,196,120,18,0,72,218,165,190,249,140,248,120,146,134,148,6,12,26,51,8,31,254,243,67,72,155,36,241,156,36,38,38,6,43,86,172,192,226,37,139,161,213,8,232,36,227,199,
143,199,174,93,187,208,212,40,160,147,104,52,26,100,100,100,160,170,170,74,76,39,1,128,49,99,198,96,231,206,157,1,225,133,112,146,168,168,40,36,39,39,227,240,225,195,170,225,221,34,56,137,70,163,65,91,
91,155,184,78,226,189,89,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,208,73,232,36,129,69,39,161,147,208,73,232,36,29,78,162,219,175,67,221,115,117,21,214,58,235,58,
244,208,73,66,246,155,120,117,117,164,33,25,171,77,55,153,228,172,119,179,228,196,93,137,114,76,101,140,44,181,75,50,220,144,131,254,231,134,44,181,75,114,210,246,36,121,234,212,169,242,212,169,83,229,
236,236,108,25,192,242,168,168,168,180,238,204,187,215,157,4,0,250,191,213,31,67,86,15,241,121,78,136,241,36,74,141,254,223,209,72,222,153,28,240,124,68,199,147,52,164,52,160,106,96,21,234,179,234,33,
47,144,197,115,18,167,211,137,171,174,186,10,26,173,6,255,250,232,95,97,59,73,192,233,188,148,34,173,206,249,77,78,71,184,126,94,225,208,209,103,125,251,91,183,35,238,249,56,84,111,174,70,77,101,199,45,
62,148,158,86,239,238,96,173,86,139,113,227,198,225,251,239,190,135,217,108,70,67,67,3,140,70,35,146,147,3,23,53,112,210,73,66,6,60,157,78,98,48,24,144,153,153,233,25,83,34,164,147,236,218,181,43,32,188,
16,78,2,0,35,71,142,244,64,142,127,9,225,36,90,173,22,54,155,77,92,39,177,219,237,116,18,58,137,242,57,116,18,58,9,157,132,78,2,58,9,157,132,78,66,39,161,147,208,73,64,39,161,147,4,22,157,132,78,66,39,
161,147,156,116,18,243,199,230,234,182,111,218,214,64,68,39,137,169,140,145,7,175,30,44,174,147,0,64,225,125,133,72,217,158,226,249,93,40,39,209,215,234,49,121,206,228,128,231,35,238,36,135,50,15,161,
177,160,17,213,155,171,209,255,197,254,226,57,137,219,237,198,95,254,242,23,220,247,155,251,224,104,18,108,60,137,86,171,69,94,94,30,234,234,234,96,46,53,3,16,108,60,137,36,73,152,53,107,22,54,108,216,
32,166,147,0,192,216,177,99,177,115,231,78,49,157,100,210,164,73,168,170,170,130,218,193,133,91,4,39,209,104,52,136,142,142,70,125,125,189,152,78,226,112,116,172,18,222,45,75,39,161,147,120,21,157,132,
78,162,22,144,78,226,87,116,146,80,143,233,36,116,18,58,9,157,132,78,66,39,161,147,4,15,8,208,73,0,208,73,194,43,58,137,82,116,146,112,2,158,146,147,108,52,87,183,253,187,109,45,28,248,139,144,78,146,
184,43,81,30,115,199,24,113,157,68,99,213,224,156,203,206,129,198,217,177,119,21,202,73,0,32,243,253,76,228,63,155,239,243,156,16,78,178,127,200,126,84,39,86,99,232,131,67,145,80,148,160,58,175,136,58,
201,180,243,167,33,38,51,6,95,253,243,43,241,198,147,72,146,132,139,103,92,140,166,146,38,241,198,147,72,146,228,25,83,242,229,151,95,138,233,36,51,103,206,244,64,142,112,78,34,203,50,102,206,156,169,
58,166,196,221,3,39,209,116,206,44,215,116,153,105,81,243,200,206,77,9,208,225,36,205,115,160,251,179,206,19,206,243,38,175,117,205,187,7,204,251,232,26,0,254,244,167,63,225,224,193,131,1,125,60,74,63,
99,99,99,35,156,78,103,192,116,135,195,113,231,188,121,243,114,79,182,96,47,221,159,228,199,31,127,244,105,89,58,9,157,196,171,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,159,128,
0,157,132,78,114,218,139,78,18,78,209,73,148,162,147,132,19,240,148,157,100,75,219,90,180,11,236,36,89,239,102,201,3,71,14,236,145,147,116,39,220,141,198,139,141,45,89,255,204,146,13,7,13,178,198,166,
9,29,42,68,216,212,175,83,61,23,8,203,200,200,104,72,76,76,188,177,171,249,247,153,147,0,192,136,71,70,32,237,107,79,239,174,88,78,34,215,202,152,112,203,4,213,121,69,212,73,12,137,6,204,154,55,11,27,
118,111,64,237,167,181,226,57,137,41,213,132,51,250,159,129,250,141,245,226,57,9,0,92,122,233,165,216,177,99,135,152,78,98,48,24,48,118,236,88,124,248,225,135,226,58,201,174,93,187,2,198,148,8,227,36,
37,37,37,120,253,245,215,197,117,146,109,219,182,193,108,54,211,73,232,36,116,18,58,9,157,132,78,2,58,9,157,132,78,66,39,161,147,208,73,64,39,161,147,4,22,157,132,78,66,39,161,147,252,4,157,196,116,189,
73,92,39,209,216,52,242,208,63,13,21,215,73,36,167,132,201,63,159,140,168,230,142,163,103,161,156,196,26,103,69,214,91,89,200,123,33,47,96,94,17,119,146,184,145,113,72,154,158,132,109,127,220,6,87,101,
96,23,7,16,65,39,105,58,209,132,107,198,95,131,145,251,71,34,213,153,42,158,147,24,141,70,140,31,63,30,239,191,247,190,120,78,2,0,179,102,205,194,135,31,126,8,139,197,34,158,147,24,12,6,204,154,53,11,
235,215,175,247,9,34,140,147,36,36,36,224,229,151,95,70,75,75,75,64,75,201,178,0,78,114,252,248,113,124,249,229,151,116,18,58,9,157,132,78,66,39,161,147,128,78,66,39,161,147,208,73,232,36,116,18,208,73,
232,36,129,69,39,161,147,208,73,232,36,63,69,39,185,201,36,195,136,85,194,58,137,225,160,65,30,247,139,113,221,118,146,208,19,147,177,58,251,145,108,57,105,71,146,172,177,132,25,204,239,191,196,93,137,
158,65,47,19,39,78,148,51,51,51,151,135,236,253,10,182,14,246,134,147,184,53,110,140,122,112,20,82,191,75,245,153,87,196,157,164,125,80,59,116,23,232,176,213,182,21,3,151,13,84,109,144,96,78,18,16,176,
243,254,36,139,42,103,171,220,159,164,249,228,253,73,148,206,77,255,147,120,181,147,164,152,152,24,188,244,210,75,88,176,100,1,218,91,219,85,187,218,0,160,173,173,237,121,255,251,147,248,4,148,36,233,
198,236,71,178,215,213,206,175,237,232,175,246,162,136,133,21,11,161,251,179,206,231,195,189,195,121,247,118,121,119,211,185,92,46,204,153,51,7,110,183,27,235,214,173,131,44,119,244,254,55,55,55,7,116,
12,116,30,9,221,180,105,211,38,207,254,185,215,157,196,96,48,224,210,75,47,197,7,31,124,32,158,147,0,192,109,183,221,134,15,63,252,208,103,76,137,219,45,136,147,232,245,122,232,245,122,124,240,193,7,1,
45,37,203,2,56,73,123,123,59,158,126,250,105,180,180,180,4,180,46,157,132,78,66,39,145,233,36,116,146,128,231,252,139,78,18,234,49,157,132,78,66,39,161,147,208,73,232,36,116,146,224,1,1,58,9,0,58,73,120,
69,39,81,138,78,18,78,192,255,30,39,73,198,106,161,157,36,235,159,89,178,105,176,169,81,72,39,129,27,242,128,191,15,16,215,73,116,45,58,76,186,118,18,162,90,79,30,226,11,225,36,85,103,85,97,223,248,125,
72,250,123,18,6,252,115,64,192,60,35,234,36,78,167,19,83,167,78,69,124,70,60,54,254,115,99,143,156,164,215,199,147,72,146,4,163,209,136,133,11,23,98,223,119,251,122,60,158,196,211,130,157,78,82,162,253,
157,214,208,84,216,228,89,231,20,39,81,40,66,41,239,21,217,191,47,209,187,31,209,229,114,225,234,171,175,134,219,221,1,57,202,115,113,113,113,170,93,110,81,81,81,141,122,189,62,127,195,134,13,181,190,
45,216,75,78,50,116,232,80,204,158,61,27,239,191,255,190,231,51,221,110,65,156,4,0,10,11,11,177,126,253,122,31,200,233,137,147,116,156,24,132,112,146,146,134,18,159,112,222,161,188,59,146,212,156,68,150,
101,252,227,31,255,240,132,240,110,93,111,39,49,26,141,62,231,40,173,173,173,48,153,76,183,2,88,74,39,9,22,210,179,167,160,147,208,73,232,36,116,18,58,9,157,132,78,66,39,241,222,78,210,73,232,36,116,18,
58,73,103,209,73,64,39,9,175,232,36,74,209,73,194,9,72,39,81,155,119,55,194,245,138,147,164,92,146,210,34,172,147,104,44,26,121,228,195,35,197,116,18,0,72,218,158,132,51,238,59,195,243,121,66,57,73,125,
90,61,198,221,62,14,198,67,70,159,121,70,220,73,32,1,215,221,126,29,214,150,172,133,243,61,167,234,82,139,152,147,72,146,132,243,206,61,15,227,134,142,131,188,94,22,235,186,91,64,199,197,193,22,45,90,
132,85,171,86,193,229,18,108,60,9,0,44,88,176,0,31,124,240,1,14,28,56,0,64,48,39,25,62,124,56,50,51,51,241,198,27,111,248,180,148,44,11,48,158,68,150,101,236,219,183,15,127,248,195,31,2,90,87,168,241,
36,199,143,31,87,85,130,206,214,162,147,208,73,232,36,221,105,73,58,73,176,48,161,190,60,254,207,249,23,157,36,212,99,58,9,157,132,78,66,39,161,147,208,73,232,36,193,3,2,116,18,0,116,146,240,138,78,162,
20,157,36,156,128,116,18,181,121,119,35,92,239,56,201,108,193,157,36,105,71,146,60,122,214,232,46,157,68,245,196,29,232,116,146,63,244,130,147,72,128,59,206,141,248,195,241,72,110,77,70,114,126,242,157,
67,134,12,201,18,202,73,226,74,227,48,97,254,4,72,242,201,93,168,16,78,98,42,52,193,124,181,25,21,175,85,32,121,103,224,125,74,34,234,36,46,167,11,15,220,248,0,70,253,223,40,228,28,201,17,203,73,36,73,
194,188,121,243,80,89,89,137,239,190,251,78,60,39,25,58,116,40,46,187,236,50,172,90,181,10,128,96,78,34,203,50,22,44,88,128,23,94,120,193,115,159,18,161,156,4,0,222,124,243,77,124,241,197,23,1,90,32,203,
130,56,201,214,173,91,85,149,160,179,181,232,36,116,18,58,73,119,90,146,78,18,44,76,168,47,143,255,115,254,69,39,9,245,152,78,66,39,161,147,208,73,232,36,116,18,58,73,240,128,0,157,4,0,157,36,188,162,
147,40,69,39,9,39,32,157,68,109,222,221,8,247,223,235,36,185,143,230,202,25,3,50,158,15,217,251,21,108,29,236,205,241,36,0,32,57,36,228,255,41,31,25,255,202,16,111,60,9,36,32,109,83,26,70,252,118,132,
103,158,66,56,137,110,144,14,229,55,150,99,255,192,253,24,191,96,60,116,173,190,135,92,17,119,146,1,210,0,188,158,240,58,102,253,191,89,136,178,248,158,197,1,17,118,18,73,146,176,100,201,18,188,251,238,
187,168,217,89,35,150,147,0,192,253,247,223,143,202,202,74,108,220,184,17,110,183,96,78,114,222,121,231,33,43,43,11,79,63,253,180,231,117,178,44,144,147,36,38,38,98,249,242,229,1,90,32,203,130,56,201,
123,239,189,135,146,146,18,213,85,128,78,66,39,161,147,116,179,37,233,36,193,194,132,250,242,248,63,231,95,116,146,80,143,233,36,116,18,58,9,157,132,78,66,39,161,147,4,15,8,208,73,0,208,73,194,43,58,137,
82,116,146,112,2,210,73,212,230,221,141,112,255,221,78,146,62,44,125,117,200,222,175,96,235,96,95,56,73,236,241,88,12,123,114,24,154,54,55,137,231,36,0,48,240,111,3,49,248,165,193,0,4,114,146,67,243,14,
97,255,217,251,145,250,77,42,70,45,29,229,51,239,136,221,199,221,59,232,236,217,179,209,90,216,138,79,254,244,9,180,22,173,119,22,229,72,168,111,239,227,238,253,186,11,46,184,0,183,220,114,11,190,124,
230,75,196,57,227,84,95,23,49,39,49,24,12,88,188,120,49,30,124,240,65,88,45,86,177,156,68,150,101,60,241,196,19,88,181,106,21,138,139,139,197,115,146,73,147,38,161,162,162,2,159,127,254,185,103,90,119,
157,68,7,116,223,73,188,125,196,187,197,148,25,168,245,190,202,114,199,120,146,127,255,251,223,170,171,128,226,36,254,23,172,115,119,56,201,82,58,73,168,208,202,231,208,73,232,36,116,146,32,95,30,255,
231,252,139,78,18,234,49,157,132,78,66,39,161,147,208,73,232,36,116,146,224,1,1,58,9,0,58,73,120,69,39,81,138,78,18,78,64,58,137,218,188,187,17,142,78,18,178,247,43,216,58,216,87,78,98,250,194,4,233,57,
233,159,37,187,75,126,174,154,67,45,96,95,57,9,92,192,208,231,135,34,235,253,44,241,156,4,0,250,191,221,31,67,86,13,241,124,190,16,78,34,203,50,206,120,248,12,252,189,253,239,40,120,166,192,167,113,58,
143,132,34,231,36,146,212,113,253,173,233,214,233,24,253,220,104,213,215,69,204,73,0,224,134,27,110,192,164,73,147,240,244,178,167,197,115,146,233,211,167,227,242,203,47,199,67,15,61,36,158,147,196,199,
199,227,246,219,111,199,175,127,253,107,180,180,180,248,116,134,10,49,158,164,165,165,5,11,22,44,64,113,113,113,192,42,32,204,120,146,134,134,6,245,61,5,157,132,78,66,39,161,147,208,73,232,36,116,18,58,
137,247,118,146,78,66,39,161,147,208,73,58,139,78,2,58,73,120,69,39,81,138,78,18,78,64,58,137,218,188,187,17,142,78,18,42,131,16,78,226,94,231,254,176,236,203,178,75,85,115,168,5,236,75,39,209,215,235,
49,252,137,225,112,127,233,22,207,73,0,32,231,229,28,100,191,222,113,224,42,140,147,180,220,220,130,93,87,238,66,230,187,153,24,252,242,96,207,231,117,30,9,69,214,73,226,226,226,240,98,225,139,184,249,
165,155,125,194,41,175,139,168,147,0,192,211,79,63,141,29,219,119,96,247,223,119,139,229,36,0,240,224,131,15,226,187,239,190,195,43,175,188,2,89,22,200,73,100,89,198,189,247,222,11,89,150,241,234,171,
175,250,116,134,10,49,158,68,150,101,188,255,254,251,216,183,111,95,192,42,32,204,120,146,3,7,14,168,239,41,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,188,183,147,116,18,58,9,157,132,78,210,89,
116,18,208,73,194,43,58,137,82,116,146,112,2,210,73,212,230,221,141,112,116,146,80,25,232,36,221,113,18,211,231,38,36,172,72,120,175,232,219,162,159,117,25,176,175,157,4,110,96,232,242,142,65,47,194,56,
73,211,77,77,248,241,170,31,225,140,115,98,240,234,193,24,248,214,192,142,5,36,7,58,137,39,96,167,147,148,104,127,167,53,52,21,54,121,214,57,197,73,20,138,80,202,123,69,246,239,75,244,15,232,127,126,146,
61,56,27,35,110,24,129,53,63,172,65,214,251,190,135,114,81,81,81,141,122,189,62,127,195,134,13,181,64,4,156,100,216,176,97,120,238,143,207,161,254,147,122,244,255,160,127,192,244,136,58,73,65,65,1,150,
45,91,134,229,203,151,99,243,23,155,197,114,146,156,156,28,60,249,228,147,88,185,114,37,62,251,236,51,177,198,147,200,178,140,180,180,52,172,88,177,2,27,55,110,244,188,182,179,181,196,24,79,178,117,235,
86,108,218,180,41,112,79,65,39,161,147,208,73,232,36,116,18,58,9,157,132,78,226,189,157,164,147,208,73,232,36,116,146,206,162,147,128,78,18,94,209,73,148,162,147,132,19,144,78,162,54,239,110,132,163,147,
132,202,64,39,233,174,147,196,191,18,255,97,241,39,197,1,33,133,112,18,125,93,199,160,151,152,109,49,226,57,9,0,12,121,110,8,250,191,215,95,57,18,138,188,147,56,101,39,146,111,78,198,199,215,124,140,33,
207,14,65,250,103,233,158,207,141,184,147,0,192,133,211,47,196,139,23,191,136,105,119,78,243,9,7,68,216,73,0,224,198,27,111,196,149,87,94,137,27,110,184,1,117,59,234,196,113,18,89,150,113,253,245,215,
99,210,164,73,184,255,254,251,61,244,32,140,147,12,29,58,20,153,153,153,120,232,161,135,60,23,7,235,108,173,144,78,162,147,36,105,242,160,39,7,101,152,211,205,1,78,82,221,90,13,141,70,227,211,253,235,
189,56,213,90,73,173,123,78,150,59,198,147,20,21,21,121,22,169,103,79,209,233,36,6,131,193,231,76,143,78,210,221,222,125,165,21,233,36,116,18,239,162,147,208,73,130,44,166,238,180,98,176,233,116,18,58,
9,157,132,78,66,39,161,147,208,73,2,139,78,66,39,161,147,208,73,232,36,116,18,58,201,127,143,147,100,125,152,133,180,87,210,86,125,255,213,247,75,188,243,248,28,15,74,146,116,99,246,146,236,69,230,243,
59,91,174,115,170,193,109,192,125,199,238,67,222,178,60,148,124,83,130,54,107,91,64,199,185,127,167,186,255,243,46,167,11,150,131,22,100,62,146,137,241,175,142,135,206,170,243,36,176,167,218,161,175,213,
35,86,138,93,60,125,250,244,27,85,91,176,175,157,164,229,138,22,236,91,176,15,206,104,39,134,63,57,28,166,77,38,0,129,78,114,242,176,182,211,73,170,135,85,135,116,18,37,156,247,33,152,127,183,156,242,
154,96,37,59,101,252,66,255,11,84,126,94,137,79,254,245,9,18,246,37,120,166,57,28,142,36,131,193,176,20,192,93,158,69,220,151,78,98,52,26,241,200,35,143,96,112,206,96,108,254,221,102,196,237,142,11,248,
99,34,230,36,6,131,1,203,150,45,67,121,121,57,30,127,252,113,216,108,54,113,156,68,175,215,99,205,154,53,62,87,46,235,108,173,144,78,34,1,152,60,232,201,65,223,154,231,155,209,150,217,113,230,149,234,
72,197,29,111,223,129,234,205,213,62,139,79,105,57,239,22,243,62,221,244,214,77,53,5,48,153,76,56,118,236,152,234,233,105,103,103,145,39,96,108,108,44,134,13,27,118,118,159,58,201,241,227,199,233,36,62,
221,26,116,18,58,73,136,150,83,91,5,252,139,78,18,234,49,157,164,187,244,208,213,116,58,9,157,4,0,157,132,78,66,39,233,44,58,137,114,144,75,39,241,46,58,73,23,69,39,161,147,248,133,162,147,244,136,33,
58,195,209,73,66,101,160,147,252,71,57,73,234,223,83,255,188,253,179,237,119,4,13,24,169,241,36,112,1,113,229,113,40,248,93,1,18,15,37,70,246,254,36,46,151,11,49,107,98,48,226,197,17,39,49,71,11,12,252,
251,64,36,28,76,136,252,253,73,128,14,39,73,94,159,140,249,159,207,71,124,73,60,198,46,24,139,140,79,50,0,8,48,158,4,0,134,15,31,142,229,207,46,199,192,31,7,226,140,249,103,192,88,108,244,153,30,49,39,
145,101,25,23,92,112,1,158,121,230,25,188,253,246,219,120,231,157,119,208,218,208,26,208,121,25,17,39,145,101,25,215,93,119,29,174,184,226,10,60,240,192,3,248,244,211,79,149,214,18,227,186,91,178,44,227,
240,225,195,120,232,161,135,176,127,255,254,147,123,10,145,174,187,181,101,203,22,52,55,55,251,116,249,42,167,177,116,18,58,137,119,209,73,84,254,64,181,61,15,157,36,212,99,58,9,157,132,78,66,39,161,147,
208,73,232,36,193,3,2,255,191,189,59,15,111,170,206,247,7,254,206,210,150,52,233,74,91,218,36,165,101,107,203,82,225,90,233,162,50,243,3,177,208,71,184,3,2,163,48,254,132,97,81,81,4,100,187,200,204,136,
2,122,199,109,188,142,130,56,142,232,184,161,140,35,162,140,200,56,11,3,72,1,217,90,150,7,189,22,90,90,144,10,45,180,165,91,154,156,115,255,72,79,182,158,28,66,112,56,103,244,253,121,158,62,79,73,210,
156,119,190,201,217,62,47,190,39,116,18,0,116,146,240,138,78,34,21,157,36,156,128,116,18,185,101,135,16,142,78,162,148,129,78,66,39,1,174,157,147,164,191,147,142,180,207,210,180,233,36,173,182,86,232,
4,13,124,143,59,224,118,146,168,13,81,232,179,174,15,0,192,84,101,66,238,146,92,244,248,107,15,109,56,137,78,167,67,255,172,254,120,231,198,119,144,247,108,30,242,102,228,33,225,96,130,231,126,85,157,
4,0,166,78,157,138,103,159,125,22,27,54,108,64,199,27,29,16,219,252,95,128,106,78,210,173,91,55,188,240,194,11,176,217,108,184,227,142,59,240,233,167,159,106,203,73,70,141,26,133,61,123,246,96,213,170,
85,104,108,108,244,60,159,146,147,24,17,130,147,248,126,254,124,123,213,129,219,189,96,173,94,233,177,31,124,240,129,103,3,238,251,194,164,243,101,139,197,219,71,165,147,4,118,95,229,186,177,210,109,0,
157,132,78,66,39,145,61,20,243,221,26,208,73,232,36,116,18,58,9,157,196,93,116,18,58,137,84,116,18,208,73,194,43,58,137,84,116,146,112,2,210,73,174,148,33,58,195,209,73,148,50,208,73,232,36,0,157,196,
227,36,181,163,107,209,158,209,254,162,102,156,164,215,171,189,60,183,25,154,13,72,253,115,42,34,43,35,99,52,225,36,112,1,183,28,187,5,5,127,45,64,202,214,20,12,253,249,80,244,248,155,251,203,84,84,119,
18,139,197,130,229,203,151,99,214,172,89,48,61,107,66,191,149,253,16,121,33,210,243,183,170,57,137,40,138,24,49,98,4,222,122,235,45,156,58,117,10,211,167,79,71,109,85,173,118,156,164,160,160,192,51,225,
101,221,186,117,218,115,146,210,210,82,236,216,177,3,29,29,29,116,18,58,73,231,219,76,39,81,92,121,2,111,11,44,58,137,210,239,116,18,58,9,157,132,78,66,39,161,147,208,73,130,7,4,232,36,0,232,36,225,21,
157,68,42,58,73,56,1,233,36,87,202,16,157,225,232,36,74,25,232,36,116,18,128,78,226,231,36,151,174,187,180,90,147,78,34,70,136,104,204,105,68,75,76,139,69,51,78,98,94,103,134,253,99,59,32,2,241,251,226,
49,248,161,193,72,222,153,236,231,36,238,49,86,112,146,19,23,78,248,133,243,13,229,251,249,187,18,39,17,69,17,177,177,177,120,240,193,7,81,241,77,5,94,254,213,203,72,219,153,230,249,219,75,151,46,33,37,
37,101,6,128,95,94,115,39,17,69,17,35,71,142,196,250,245,235,81,93,93,141,223,255,207,239,97,218,108,234,50,202,194,181,254,30,119,81,116,127,195,203,202,149,43,81,93,93,141,133,11,23,162,172,172,204,
227,36,193,190,199,253,154,58,73,99,99,35,214,174,93,139,3,7,14,184,183,141,208,160,147,148,149,149,117,249,8,208,73,232,36,129,69,39,161,147,4,121,155,66,25,197,96,247,211,73,232,36,116,18,58,9,157,132,
78,66,39,233,90,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,223,199,125,47,156,228,204,240,51,22,125,172,254,81,191,128,106,58,73,210,166,36,207,169,110,196,165,8,196,31,136,135,216,36,222,
175,234,124,18,169,239,24,19,19,131,89,95,206,66,228,215,145,200,120,61,3,5,147,11,144,188,61,89,221,249,36,82,200,105,211,166,225,253,247,223,71,82,68,18,178,166,101,33,227,181,12,232,92,222,119,73,80,
99,62,137,40,138,24,62,124,56,62,252,240,67,216,237,118,76,152,48,1,175,254,254,85,180,159,107,239,210,2,86,197,73,68,81,196,128,1,3,176,120,241,98,28,57,114,196,51,175,68,201,73,140,74,78,226,59,82,62,
67,239,9,26,172,131,165,212,159,126,254,249,231,253,30,35,189,224,11,23,46,248,5,4,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,116,18,58,
137,64,39,241,132,163,147,72,117,57,39,65,2,30,243,11,168,21,39,17,76,2,26,7,54,162,49,161,113,182,38,156,68,20,69,164,174,73,69,228,9,247,53,183,146,118,36,161,223,179,253,96,56,108,240,56,137,17,8,221,
73,124,125,196,119,196,164,238,168,92,247,53,200,222,9,162,40,98,230,204,153,152,48,97,2,102,188,53,3,103,42,207,32,254,168,247,152,88,112,59,201,47,175,185,147,136,162,136,187,239,190,27,155,55,111,134,
221,110,199,188,121,243,240,245,43,95,195,82,230,223,225,87,205,73,150,47,95,142,214,214,86,44,92,184,16,229,229,229,126,231,203,154,112,146,199,31,127,28,205,205,205,93,250,224,154,113,146,214,214,214,
46,183,1,116,18,58,9,157,68,246,80,204,247,216,145,78,66,39,161,147,208,73,232,36,238,162,147,208,73,164,162,147,128,78,18,94,209,73,164,162,147,132,19,144,78,114,165,12,209,25,142,78,162,148,129,78,66,
39,1,232,36,116,146,239,220,73,206,245,57,167,29,39,73,250,109,146,199,73,160,3,58,98,58,208,218,214,170,13,39,1,128,209,131,71,227,196,23,39,240,153,238,51,216,54,219,96,221,104,133,78,212,65,200,84,
209,73,44,22,11,166,77,155,134,173,91,183,98,216,205,195,80,251,106,45,174,191,251,122,216,62,176,65,39,186,159,87,53,39,25,49,98,4,238,191,255,126,236,222,189,27,243,231,207,71,89,89,25,90,90,90,144,
148,148,164,13,39,169,174,174,198,226,197,139,113,248,240,97,207,132,23,77,57,201,177,99,199,112,236,216,49,58,9,157,4,160,147,208,73,232,36,116,18,58,137,39,160,72,39,161,147,208,73,232,36,97,21,157,
36,156,162,147,72,69,39,9,39,32,157,228,74,25,162,51,28,157,68,41,3,157,132,78,2,208,73,232,36,63,44,39,105,73,111,193,233,33,167,97,48,25,102,121,2,170,113,221,45,207,139,57,11,116,255,184,59,208,185,
190,36,124,145,128,148,191,166,64,215,161,251,25,112,141,191,159,36,240,167,184,184,24,147,38,77,194,103,7,62,195,75,191,127,9,105,59,211,16,93,227,238,50,212,154,84,114,146,136,136,8,76,153,50,5,227,
199,143,199,174,93,187,176,126,253,122,124,240,193,7,232,145,212,3,209,22,111,11,68,53,39,201,203,203,131,40,138,88,176,96,1,202,203,203,225,116,58,21,157,196,24,204,73,142,185,142,121,222,94,41,168,244,
111,169,35,47,23,240,114,78,242,249,231,159,227,159,255,252,167,7,113,124,157,36,61,61,29,1,69,39,161,147,208,73,232,36,116,18,145,78,66,39,161,147,248,21,157,132,78,34,21,157,4,116,146,240,138,78,34,
21,157,36,156,128,116,18,185,101,135,16,142,78,162,148,129,78,66,39,1,232,36,116,146,31,168,147,68,107,200,73,204,27,205,30,39,17,162,4,52,247,106,70,99,66,227,84,64,133,239,39,9,252,201,29,152,139,169,
174,169,208,215,235,17,115,52,6,125,94,232,131,129,143,12,68,91,121,155,85,21,39,17,69,17,102,179,25,227,198,141,67,126,126,62,68,81,196,214,191,108,69,206,172,28,36,55,120,86,94,180,66,37,39,201,202,
202,194,19,79,60,129,210,210,82,60,243,204,51,40,47,47,71,91,91,155,251,163,18,160,16,170,56,201,177,99,199,48,102,204,24,207,73,63,157,132,78,66,39,161,147,208,73,232,36,116,18,58,9,157,132,78,2,208,
73,194,43,58,73,56,69,39,145,138,78,18,78,64,58,137,220,178,67,8,71,39,81,202,64,39,161,147,0,116,18,58,9,157,68,147,78,114,62,253,252,207,1,13,56,137,30,122,196,253,53,14,250,122,111,195,32,162,41,2,
23,207,94,76,85,205,73,4,65,128,197,98,193,208,161,67,81,80,80,128,193,67,6,99,236,246,177,112,156,119,160,251,206,238,158,73,47,145,5,42,56,73,92,92,28,238,185,231,30,228,231,231,99,215,174,93,216,177,
99,7,86,172,88,1,199,37,71,23,134,80,197,73,26,27,27,177,125,251,118,60,253,244,211,184,112,225,130,231,36,191,169,169,73,27,78,226,116,58,241,143,127,252,195,111,194,11,157,132,78,66,39,161,147,208,73,
232,36,116,18,58,9,157,132,78,66,39,185,210,162,147,208,73,174,54,32,157,68,170,203,49,64,231,11,160,147,132,21,144,78,66,39,1,157,132,78,34,91,116,18,58,137,214,156,36,250,211,104,63,39,105,239,209,142,
170,184,170,212,135,30,122,168,72,143,16,156,36,216,8,92,141,147,72,207,19,19,19,131,209,189,71,163,103,101,79,0,128,229,43,11,82,62,75,65,244,158,104,117,230,147,8,130,128,236,236,108,12,29,58,20,249,
249,249,176,217,108,216,190,125,59,14,191,120,24,61,218,122,160,219,183,222,78,107,100,111,21,156,196,104,52,226,190,251,238,195,23,95,124,129,103,158,121,6,101,101,101,30,39,25,52,104,16,2,234,218,59,
137,195,225,192,156,57,115,60,123,25,58,9,157,132,78,66,39,161,147,208,73,232,36,238,162,147,208,73,232,36,116,146,43,43,58,9,157,228,106,3,210,73,164,186,28,3,116,190,0,58,73,88,1,233,36,116,18,208,73,
232,36,178,69,39,161,147,208,73,174,192,73,68,81,132,225,132,1,250,255,245,190,19,237,221,219,113,209,122,81,61,39,17,69,247,197,193,134,14,29,138,194,194,66,88,173,86,188,119,230,61,188,249,197,155,136,
43,143,243,252,68,222,172,130,147,24,12,6,188,253,246,219,136,138,138,242,76,120,169,168,168,64,105,105,41,174,27,116,29,2,74,157,249,36,115,230,204,193,169,83,167,224,114,185,252,186,15,129,165,154,147,
212,212,212,208,73,232,36,0,157,132,78,66,39,161,147,208,73,252,2,210,73,232,36,62,37,5,165,147,92,46,32,64,39,161,147,208,73,232,36,116,18,58,9,157,132,78,226,13,71,39,145,138,78,66,39,161,147,124,7,
78,114,193,126,1,145,145,145,63,210,43,57,137,92,56,185,83,203,112,156,68,250,61,38,38,6,99,74,198,160,224,80,129,103,249,134,54,3,34,26,35,224,140,115,22,93,115,39,17,4,1,147,39,79,70,70,70,6,10,10,10,
32,8,2,118,238,220,137,99,27,143,33,167,62,7,49,95,197,184,155,88,0,162,135,69,247,81,229,251,73,206,158,61,139,211,167,79,227,169,167,158,194,249,243,231,225,112,56,80,95,95,143,188,218,60,191,28,170,
57,201,167,159,126,234,215,59,164,147,208,73,232,36,116,18,58,9,157,132,78,66,39,161,147,248,221,39,5,165,147,92,46,32,64,39,161,147,208,73,232,36,116,18,58,9,157,132,78,226,13,71,39,145,138,78,66,39,
161,147,124,159,156,68,20,69,232,69,61,244,127,246,249,168,68,136,112,36,59,112,41,245,210,48,85,156,36,42,42,10,189,123,247,134,213,106,69,65,65,1,108,54,27,222,219,245,30,86,183,174,70,116,85,52,204,
85,102,36,238,73,132,201,96,234,173,138,147,60,252,240,195,232,222,189,59,62,255,252,115,236,220,185,19,21,21,21,216,181,103,23,134,253,121,152,95,14,220,128,52,85,156,228,225,135,31,238,210,39,108,111,
233,58,225,133,78,66,39,145,27,118,185,109,26,157,132,78,66,39,161,147,208,73,232,36,254,69,39,9,49,156,98,64,128,78,66,39,161,147,92,85,64,58,137,84,74,125,19,159,86,7,157,36,172,128,116,18,58,9,232,
36,116,18,217,162,147,208,73,232,36,63,36,39,209,7,115,18,233,20,82,174,141,27,216,147,185,82,39,241,189,205,98,177,96,208,160,65,232,253,117,111,159,53,209,221,44,104,137,110,185,246,215,221,18,4,1,243,
230,205,67,86,86,22,108,54,27,4,65,64,85,85,21,94,95,255,58,154,222,111,66,183,218,110,136,250,38,10,230,74,51,18,172,9,73,170,56,201,219,111,191,141,134,134,6,56,157,78,212,213,213,193,225,112,160,174,
174,14,249,71,243,253,114,8,73,66,140,42,78,114,230,204,25,79,79,135,78,66,39,161,147,208,73,232,36,116,18,58,137,183,232,36,116,146,239,184,232,36,225,20,157,68,42,58,73,56,1,233,36,114,203,14,33,28,
157,68,41,3,157,132,78,2,208,73,232,36,116,18,58,137,210,158,130,78,242,189,119,18,207,26,191,221,187,124,213,157,100,208,160,65,24,50,100,8,4,65,128,213,106,133,203,229,66,249,215,229,120,18,79,118,174,
41,128,190,93,15,71,155,163,135,42,78,50,112,224,64,207,239,210,55,188,156,56,121,2,55,84,220,128,200,139,145,136,104,112,55,51,147,135,36,71,171,226,36,111,190,249,166,95,115,73,186,114,89,65,106,129,
95,14,58,9,157,132,78,66,39,161,147,208,73,232,36,222,144,116,18,58,73,24,69,39,9,167,232,36,82,209,73,194,9,72,39,145,91,118,8,225,232,36,74,25,232,36,116,18,128,78,66,39,161,147,208,73,148,246,20,116,
18,58,137,26,78,34,8,2,44,22,11,92,46,247,247,184,167,166,166,66,168,17,112,10,167,60,25,132,110,2,154,197,102,117,156,100,197,138,21,30,200,17,69,17,149,149,149,216,183,127,31,86,148,175,128,161,213,
0,67,171,1,230,19,102,116,171,239,102,86,197,73,150,45,91,38,239,36,5,254,78,146,156,151,44,210,73,232,36,116,18,58,9,157,4,116,18,58,9,157,4,160,147,132,87,116,146,112,138,78,34,21,157,36,156,128,116,
18,185,101,135,16,142,78,162,148,129,78,66,39,1,232,36,116,18,58,9,157,68,105,79,65,39,161,147,168,229,36,129,161,117,39,252,55,248,170,58,201,228,201,147,145,153,153,233,247,183,101,229,101,120,6,207,
120,3,26,4,56,224,80,199,73,202,203,203,61,215,222,146,126,190,252,234,75,228,172,202,129,78,208,1,2,16,209,16,129,180,216,52,117,230,147,28,56,112,0,46,151,203,211,112,114,56,28,104,106,106,194,80,12,
245,27,168,148,31,167,52,208,73,232,36,116,18,58,9,157,164,179,232,36,116,18,58,9,157,228,202,138,78,66,39,185,218,128,116,18,169,148,250,38,62,173,14,58,73,88,1,233,36,116,18,208,73,232,36,178,69,39,
161,147,208,73,232,36,116,18,141,59,73,74,74,10,98,98,98,60,239,64,69,69,5,154,106,155,208,14,239,122,160,170,147,220,121,231,157,200,202,202,242,116,40,4,65,64,117,77,53,166,181,76,131,16,41,64,52,186,
151,165,55,232,213,113,146,167,159,126,90,214,73,110,126,229,102,247,243,235,68,136,6,17,3,134,13,208,230,124,18,157,168,131,206,169,67,106,247,212,106,58,9,157,132,78,66,39,161,147,116,22,157,132,78,
226,83,82,80,58,201,229,2,2,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,222,112,116,18,169,232,36,116,18,58,9,157,132,78,162,113,39,9,236,85,11,130,0,125,163,255,85,163,84,117,146,85,171,86,161,
123,66,228,220,185,0,0,19,241,73,68,65,84,247,238,16,69,247,69,193,92,46,23,182,108,221,130,245,88,239,151,67,53,39,89,190,124,57,50,51,51,209,209,209,1,171,213,10,167,211,137,175,42,191,130,253,93,59,
156,177,78,56,99,156,136,60,31,137,68,49,177,89,21,39,113,56,28,40,47,47,135,211,233,196,254,253,251,209,222,222,14,81,20,145,187,54,215,111,4,135,76,28,82,73,39,161,147,208,73,232,36,116,146,206,162,
147,208,73,124,74,10,74,39,185,92,64,128,78,66,39,161,147,208,73,232,36,116,18,58,9,157,196,27,142,78,34,21,157,132,78,66,39,161,147,208,73,232,36,222,128,225,56,201,173,183,222,234,25,241,19,39,78,160,
162,162,2,231,235,207,119,201,161,154,147,8,130,128,194,194,66,56,157,78,76,152,48,1,233,233,233,216,240,209,6,60,140,135,189,225,92,122,88,34,44,234,56,201,150,45,91,240,209,71,31,121,186,172,237,237,
237,16,32,96,232,190,161,104,79,106,135,35,217,1,157,83,135,62,153,125,78,107,202,73,162,107,162,17,93,227,109,7,103,76,203,56,76,39,161,147,208,73,232,36,116,18,159,162,147,208,73,190,227,162,147,132,
83,116,18,169,232,36,225,4,164,147,200,45,59,132,112,116,18,165,12,116,18,58,9,64,39,161,147,208,73,232,36,74,123,10,58,9,157,132,78,242,239,232,36,6,131,193,179,12,223,209,12,44,213,156,100,222,188,121,
24,57,114,36,92,46,23,170,170,170,80,89,89,137,223,190,254,91,28,192,1,111,56,53,157,228,233,167,159,198,19,79,60,129,232,232,104,164,166,166,194,106,181,194,156,108,70,220,193,56,180,218,91,225,72,118,
64,223,166,71,178,57,185,86,85,39,185,112,225,2,106,107,107,177,119,239,94,196,197,197,97,200,67,67,220,239,96,55,23,28,241,14,244,27,211,175,92,147,78,98,104,51,192,116,214,4,11,44,123,232,36,116,18,
81,164,147,208,73,232,36,93,30,72,39,9,49,156,98,64,128,78,66,39,161,147,92,85,64,58,137,84,74,125,19,159,86,7,157,36,172,128,116,18,58,9,232,36,116,18,217,162,147,208,73,232,36,50,163,39,23,90,122,30,
58,9,157,132,78,18,100,229,9,188,45,176,84,115,146,249,243,231,195,108,54,99,251,246,237,222,9,47,130,255,132,23,85,157,100,227,198,141,200,200,200,64,81,81,17,38,78,156,8,187,221,142,231,222,127,14,107,
176,198,27,80,77,39,249,242,203,47,113,244,232,81,108,218,180,201,211,158,51,103,154,145,45,100,163,185,79,51,154,251,52,35,242,219,72,164,232,83,142,27,59,157,228,54,93,135,14,98,164,59,208,145,94,71,
112,115,220,205,104,168,111,240,59,72,80,26,197,192,128,161,210,132,212,95,76,18,147,16,255,23,255,246,143,109,166,109,7,157,132,78,34,138,116,18,58,9,157,164,203,3,233,36,33,134,83,12,8,208,73,232,36,
116,146,171,10,72,39,145,74,169,111,226,211,234,160,147,132,21,144,78,66,39,1,157,132,78,34,91,116,18,58,9,157,68,102,244,228,66,75,207,67,39,161,147,208,73,130,172,60,129,183,5,150,222,160,135,190,211,
73,252,238,144,156,196,119,65,162,40,6,237,59,135,218,225,151,126,6,13,26,132,156,156,28,255,21,44,214,255,99,166,170,147,148,148,148,32,51,51,19,54,155,13,85,85,85,216,182,109,27,214,148,174,193,57,120,
207,227,85,117,146,149,43,87,194,233,116,194,100,50,33,45,45,13,69,69,69,40,249,207,18,188,217,241,166,123,115,39,2,198,22,163,250,78,82,95,95,143,179,103,207,162,180,180,20,125,251,246,197,176,63,14,
67,211,128,38,52,101,55,193,208,106,128,205,110,219,97,132,228,36,69,81,104,75,115,55,25,61,78,242,173,83,246,112,42,216,154,28,44,160,239,26,174,228,36,58,232,16,123,44,22,177,199,98,221,78,146,73,39,
161,147,208,73,186,108,198,232,36,116,18,169,232,36,160,147,132,87,116,18,169,232,36,225,4,164,147,200,45,59,132,112,116,18,165,12,116,18,58,9,64,39,161,147,208,73,232,36,74,123,10,58,9,157,132,78,34,
19,248,123,229,36,170,204,39,49,26,141,112,56,28,218,116,18,131,193,128,119,223,125,23,181,181,181,216,177,99,7,182,109,219,134,253,251,247,67,204,246,31,65,213,156,196,225,112,96,202,148,41,72,75,75,
67,65,65,1,150,46,93,10,187,221,142,185,127,159,139,79,241,105,231,66,84,118,146,11,23,46,224,219,111,191,197,190,125,251,240,220,115,207,193,96,48,32,110,66,28,122,124,210,3,23,175,191,8,71,162,3,145,
231,34,97,107,213,136,147,8,130,128,164,67,73,176,30,115,183,249,90,109,173,136,239,17,15,99,190,70,157,196,116,218,132,241,89,227,233,36,116,18,0,116,18,191,112,116,18,185,131,89,58,9,157,132,78,18,66,
209,73,100,255,144,78,210,89,74,125,19,159,86,7,157,36,172,128,116,18,58,9,232,36,116,18,217,162,147,208,73,232,36,50,163,39,23,90,122,30,58,9,157,132,78,18,100,229,9,188,45,176,84,115,18,185,199,4,115,
18,125,203,249,150,90,125,155,255,240,74,78,226,251,36,190,255,150,91,123,67,253,221,96,48,96,233,210,165,24,57,114,36,44,22,139,231,249,196,222,242,78,98,16,35,197,98,203,109,150,172,150,158,222,221,
92,82,93,18,116,187,117,65,71,74,238,0,53,212,81,148,186,93,69,69,69,88,180,104,17,250,246,237,11,163,209,136,195,3,15,67,184,213,123,28,96,169,176,224,214,150,91,75,85,113,146,45,91,182,224,163,143,62,
130,201,100,66,81,81,17,242,11,242,177,103,192,30,124,133,175,0,184,79,7,36,39,49,0,16,18,174,75,152,209,158,211,14,103,140,123,135,232,52,56,209,251,104,111,180,213,180,5,93,107,149,126,66,117,146,150,
150,22,28,57,114,4,219,182,109,67,207,242,158,72,248,50,1,198,38,35,244,46,61,50,254,55,3,55,155,110,126,196,40,138,98,169,105,184,233,108,212,109,81,169,109,169,109,238,35,138,78,39,137,221,31,11,167,
211,217,101,20,229,14,8,228,54,31,161,58,73,82,82,18,34,34,34,144,184,55,17,137,123,19,1,0,227,239,26,95,163,105,39,201,72,202,248,3,64,39,161,147,208,73,252,138,78,66,39,145,43,58,201,101,138,78,66,39,
9,8,69,39,233,178,236,16,194,209,73,148,50,208,73,232,36,0,157,132,78,66,39,161,147,40,237,41,232,36,116,18,58,137,76,96,58,137,220,231,73,110,116,254,45,157,4,0,122,247,238,221,229,249,130,57,201,53,
159,79,98,179,217,176,100,201,18,216,108,54,188,243,206,59,216,182,109,27,246,237,219,7,215,77,46,159,133,168,56,159,228,228,201,147,152,54,109,26,178,178,178,80,84,84,132,165,75,151,162,181,173,21,83,
227,166,162,30,245,0,252,157,68,181,249,36,101,101,101,216,191,127,63,158,125,246,89,36,247,76,70,196,67,17,136,24,24,129,142,132,14,68,213,69,33,237,124,26,140,177,198,237,154,112,18,71,131,3,217,175,
103,67,247,7,29,234,10,235,208,220,187,25,35,187,143,60,123,231,4,13,58,73,247,221,221,209,243,157,158,40,52,20,122,25,130,78,66,39,161,147,184,139,78,66,39,145,43,58,201,101,138,78,66,39,9,8,69,39,233,
178,236,16,194,209,73,148,50,208,73,232,36,0,157,132,78,66,39,161,147,40,237,41,232,36,116,18,58,137,76,96,58,137,220,231,73,110,116,190,11,39,81,229,251,73,124,71,222,227,36,65,174,187,165,239,116,18,
207,254,16,112,59,137,244,36,74,173,223,192,46,190,210,8,73,63,121,121,121,248,221,239,126,135,226,226,98,152,205,102,239,125,65,156,196,128,11,72,143,31,19,63,242,82,223,75,158,67,172,14,125,7,250,150,
246,69,107,115,171,226,198,86,233,109,14,246,83,93,93,141,227,199,143,99,244,232,209,88,188,120,49,250,246,237,139,138,202,10,156,121,224,12,144,233,94,190,174,67,135,248,67,241,184,189,245,246,117,170,
56,73,121,121,57,246,239,223,15,179,217,140,194,194,66,140,24,55,2,251,179,247,123,6,80,51,78,82,87,87,135,63,253,233,79,72,74,74,194,117,103,174,195,183,37,223,162,246,214,90,68,213,70,97,68,210,136,
179,119,222,174,33,39,73,56,156,128,236,167,178,113,211,216,155,144,249,106,38,242,13,249,175,1,26,116,18,67,155,1,99,226,198,32,74,31,245,138,39,160,72,39,161,147,208,73,232,36,97,21,157,36,156,162,147,
72,69,39,9,39,32,157,68,110,217,33,132,163,147,40,101,160,147,208,73,0,58,9,157,132,78,66,39,81,218,83,208,73,232,36,116,18,153,192,116,18,185,207,147,220,232,252,32,156,228,154,207,39,201,203,203,67,
76,76,12,62,249,228,19,255,251,130,56,137,190,115,62,137,95,87,245,72,175,35,176,196,89,100,27,227,161,190,133,114,141,117,151,203,133,170,170,42,20,21,21,225,179,207,62,195,172,89,179,96,54,155,225,16,
28,16,110,243,63,29,144,230,147,232,33,57,73,93,148,231,1,30,39,81,232,222,95,46,160,220,223,8,130,128,154,154,26,44,91,182,12,183,221,118,27,4,65,192,150,45,91,48,105,246,36,32,219,59,128,30,39,49,26,
183,235,68,81,132,105,184,233,155,168,231,162,82,27,6,55,0,58,64,47,232,113,227,214,27,17,187,58,22,46,167,235,170,157,196,151,34,2,59,179,17,17,17,176,252,200,130,154,167,106,208,158,217,14,136,64,92,
89,28,238,57,113,207,217,167,110,127,42,77,117,39,105,110,110,70,194,201,4,20,78,43,68,255,199,250,35,113,79,34,204,39,205,184,193,120,131,246,156,36,229,31,41,200,93,154,139,201,71,39,195,164,51,105,
215,73,70,92,63,130,78,66,39,161,147,132,18,78,49,32,64,39,161,147,208,73,174,42,32,157,68,42,165,190,137,79,171,131,78,18,86,64,58,9,157,4,116,18,58,137,108,209,73,232,36,116,18,153,209,147,11,45,61,
15,157,132,78,66,39,9,178,242,4,222,22,88,116,18,165,223,67,117,146,107,62,159,196,110,183,195,108,54,119,189,95,43,78,50,108,216,48,108,216,176,1,51,102,204,64,116,116,180,187,87,173,37,39,121,237,181,
215,48,103,206,28,216,237,118,108,222,188,25,179,103,207,134,190,159,62,168,147,168,242,61,238,101,101,101,88,178,100,9,138,139,139,209,209,209,129,27,239,187,17,72,242,190,189,158,249,36,106,127,63,201,
185,115,231,176,122,245,106,124,243,193,55,176,125,104,115,175,28,237,122,237,57,73,66,115,2,250,190,216,23,133,183,23,162,215,239,122,225,199,13,63,214,166,147,68,213,71,193,254,129,29,119,165,220,69,
39,161,147,208,73,66,9,167,24,16,160,147,208,73,232,36,87,21,144,78,34,213,229,24,160,243,5,208,73,194,10,72,39,161,147,128,78,66,39,145,45,58,9,157,132,78,66,39,161,147,208,73,188,1,233,36,90,119,146,
107,62,159,36,232,253,90,113,146,85,171,86,97,250,244,233,30,35,209,156,147,172,90,181,10,54,155,13,31,126,248,33,238,189,247,94,247,115,245,114,105,199,73,234,235,235,177,116,233,82,220,123,239,189,176,
219,237,216,189,123,55,98,38,198,104,207,73,14,30,60,136,249,243,231,163,228,39,37,112,244,115,0,157,27,60,205,57,73,36,34,49,100,205,16,12,252,197,64,196,30,141,69,116,117,52,134,53,14,243,56,137,231,
164,73,151,168,91,99,93,103,157,125,182,248,44,132,104,239,7,246,250,215,175,135,233,53,19,68,167,232,119,80,42,183,185,145,246,223,129,43,82,96,112,233,197,118,239,222,29,125,250,244,241,219,74,52,230,
52,98,217,248,101,107,38,142,154,248,128,119,4,161,29,39,153,145,59,227,162,89,48,63,42,253,155,78,66,39,161,147,208,73,174,176,232,36,82,209,73,194,9,72,39,145,91,118,8,225,232,36,74,25,232,36,116,18,
128,78,66,39,161,147,208,73,148,246,20,116,18,58,9,157,68,38,48,157,68,238,243,20,74,135,159,78,18,24,48,216,72,254,91,59,201,207,126,246,51,152,205,102,255,94,181,150,156,196,96,48,224,253,247,223,199,
204,153,51,189,47,90,75,78,178,118,237,90,140,25,51,6,233,233,233,120,251,237,183,49,186,100,52,218,111,107,215,150,147,212,215,215,99,225,194,133,88,190,124,57,236,217,118,224,46,104,211,73,246,237,219,
135,143,215,127,140,94,127,239,5,125,139,30,16,161,93,39,113,36,56,112,106,202,41,136,17,34,126,19,253,155,151,238,40,190,227,126,191,128,145,145,145,201,49,163,98,78,8,143,9,150,134,220,6,207,209,141,
177,197,136,156,181,57,48,253,209,77,19,74,187,59,223,192,190,111,173,156,157,36,36,36,200,82,196,216,41,99,27,6,164,15,232,39,53,55,53,231,36,185,153,185,115,233,36,116,18,169,232,36,116,18,58,9,157,
132,78,66,39,161,147,208,73,232,36,190,143,163,147,120,254,136,78,66,39,161,147,208,73,252,110,3,64,39,161,147,208,73,228,14,197,124,183,6,116,146,80,157,36,37,37,165,203,49,162,102,156,196,106,181,98,
221,186,117,158,9,47,154,115,146,202,202,74,140,27,55,14,118,187,29,31,127,252,49,74,74,74,208,225,236,208,150,147,212,215,215,99,201,146,37,152,57,115,38,166,76,153,130,137,51,38,106,211,73,14,30,60,
136,177,99,199,98,135,184,3,200,241,142,94,160,147,168,126,221,173,158,229,61,241,31,247,255,7,226,14,197,65,223,170,71,236,209,88,140,79,27,255,146,212,162,211,148,147,156,251,241,57,148,228,150,92,186,
197,124,75,111,77,58,201,117,95,93,135,226,216,226,7,232,36,116,18,169,232,36,116,18,58,9,157,132,78,66,39,161,147,208,73,232,36,190,143,163,147,120,254,136,78,66,39,161,147,208,73,252,110,3,64,39,161,
147,208,73,228,14,197,124,183,6,116,146,80,157,68,174,201,174,25,39,41,41,41,193,35,143,60,226,185,40,152,230,156,100,211,166,77,168,170,170,194,198,141,27,49,122,244,104,119,119,86,107,78,178,102,205,
26,220,123,239,189,152,60,121,50,126,253,235,95,3,105,208,158,147,28,58,116,8,19,38,76,192,158,61,123,96,93,105,213,174,147,108,221,186,21,166,3,38,152,106,76,238,209,147,113,18,213,175,187,149,184,55,
17,55,76,191,1,214,141,86,196,30,143,197,157,174,59,47,197,186,98,151,123,214,104,223,109,93,124,124,252,221,137,243,19,255,80,59,173,214,239,180,211,216,98,68,159,223,246,129,233,61,83,151,13,183,239,
54,81,110,59,231,59,154,18,75,164,164,164,32,35,35,163,11,69,196,228,198,224,193,177,15,78,245,109,11,107,202,73,230,254,231,92,58,137,251,8,153,78,226,83,116,146,203,20,157,132,78,18,16,138,78,210,101,
217,33,132,163,147,40,101,160,147,208,73,0,58,9,157,132,78,66,39,81,218,83,208,73,232,36,116,18,153,192,116,18,185,207,83,40,29,126,58,73,96,192,96,35,73,39,249,87,57,201,164,73,147,48,114,228,200,46,
125,108,205,56,201,222,189,123,177,96,193,2,191,139,130,105,202,73,142,31,63,142,177,99,199,194,110,183,227,173,183,222,130,201,100,66,71,114,135,182,156,164,190,190,30,139,22,45,194,182,109,219,240,202,
43,175,192,248,136,81,209,73,84,189,238,86,90,126,26,78,191,119,26,237,61,220,71,82,250,22,61,82,255,146,234,119,221,45,85,157,36,205,153,134,235,239,185,30,73,59,146,160,235,208,105,219,73,206,140,57,
131,196,232,68,172,232,187,66,155,78,98,221,108,197,163,253,30,125,129,78,34,138,116,18,255,162,147,92,166,232,36,116,146,128,80,116,146,46,203,14,33,28,157,68,41,3,157,132,78,2,208,73,232,36,116,18,58,
137,210,158,130,78,66,39,161,147,200,4,166,147,200,125,158,66,233,240,211,73,2,3,6,27,73,58,201,191,202,73,6,14,28,216,229,57,52,229,36,63,249,201,79,176,124,249,114,191,139,130,105,202,73,126,245,171,
95,161,178,178,18,47,190,248,34,114,114,114,220,109,99,173,57,201,234,213,171,241,198,27,111,224,229,151,95,70,97,97,33,58,126,217,161,232,36,198,206,53,243,164,46,81,247,146,117,156,117,118,139,173,197,
237,36,157,243,73,76,255,223,244,157,59,201,198,141,27,113,248,240,97,228,76,207,1,102,248,108,90,124,231,147,20,171,60,159,228,236,217,179,248,250,207,95,35,113,119,162,103,205,149,115,18,85,175,187,
101,106,49,33,119,105,46,236,27,236,48,157,54,33,123,119,54,70,197,140,242,187,238,86,151,19,247,212,254,169,107,76,139,77,93,78,220,7,63,56,24,150,131,22,52,53,53,161,163,163,195,239,192,65,110,67,45,
247,249,211,235,245,176,90,173,72,75,75,67,96,53,101,53,225,23,147,127,241,210,237,195,111,15,126,226,46,21,157,36,196,112,138,1,1,58,9,157,132,78,114,85,1,233,36,82,41,245,77,124,90,29,116,146,176,2,
210,73,232,36,160,147,208,73,100,139,78,66,39,161,147,200,140,158,92,104,233,121,232,36,116,18,58,73,144,149,39,240,182,192,162,147,40,253,78,39,249,94,58,137,197,98,209,174,147,196,197,197,225,221,119,
223,69,118,118,182,127,203,88,43,78,114,238,220,57,204,157,59,23,207,63,255,60,70,141,26,229,253,239,245,90,114,146,67,135,14,225,190,251,238,195,228,201,147,49,123,246,108,119,192,203,56,201,53,191,238,
214,193,131,7,49,125,250,116,228,23,228,99,240,202,193,110,39,233,92,63,53,115,221,173,243,231,207,99,246,236,217,168,24,84,225,183,230,106,203,73,50,123,33,247,169,92,88,63,180,2,46,4,117,18,191,125,
241,197,139,23,223,72,237,159,90,152,210,51,197,239,196,221,119,62,201,213,58,73,102,102,166,159,147,244,251,159,126,48,85,155,224,50,187,176,164,255,146,151,138,135,107,116,62,201,194,229,11,55,142,29,
62,246,246,192,219,233,36,74,69,39,9,167,232,36,82,209,73,194,9,72,39,145,91,118,8,225,232,36,74,25,232,36,116,18,128,78,66,39,161,147,208,73,148,246,20,116,18,58,9,157,68,38,48,157,68,238,243,20,74,135,
159,78,18,24,48,216,72,210,73,254,85,78,226,251,150,106,206,73,242,242,242,48,117,234,212,46,225,52,227,36,165,165,165,72,79,79,199,99,143,61,230,215,179,214,148,147,44,93,186,20,130,32,224,137,39,158,
112,127,246,180,232,36,139,22,45,130,203,229,194,202,85,43,209,113,95,135,54,157,100,222,188,121,248,91,245,223,32,174,244,57,163,212,154,147,212,237,170,131,253,19,187,123,33,90,117,146,62,107,251,192,
208,106,192,55,183,125,131,148,191,167,104,215,73,46,14,185,136,69,19,23,109,190,235,230,187,46,223,250,144,138,78,2,58,73,120,69,39,145,138,78,18,78,64,58,137,220,178,67,8,71,39,81,202,64,39,161,147,
0,116,18,58,9,157,132,78,162,180,167,160,147,208,73,232,36,50,129,233,36,114,159,167,80,58,252,116,146,192,128,193,70,146,78,242,131,116,146,27,111,188,17,189,122,245,210,174,147,68,70,70,122,174,183,
165,73,39,249,228,147,79,240,228,147,79,226,133,23,94,64,255,254,253,67,118,146,107,122,221,173,77,155,54,161,189,189,29,107,215,174,197,77,63,186,9,77,211,154,46,123,221,45,207,89,93,100,100,100,114,
204,168,152,19,194,99,130,165,33,183,193,115,116,99,108,49,34,103,109,14,76,127,116,211,132,210,238,206,55,176,244,214,202,217,201,45,35,111,65,183,91,186,97,253,93,235,129,88,239,154,27,119,56,14,211,
79,78,191,52,50,122,100,111,169,185,233,217,213,57,28,142,115,241,241,241,15,36,126,148,248,7,71,162,195,115,218,41,57,73,31,199,119,247,253,36,95,236,253,2,198,155,140,158,112,126,78,210,119,212,3,197,
197,197,26,112,146,143,0,157,69,135,147,51,79,186,187,11,90,117,146,154,219,107,208,158,220,142,255,78,255,111,237,58,201,252,71,231,127,56,238,255,141,27,47,119,31,157,36,88,209,73,232,36,87,27,144,78,
34,149,82,223,196,167,213,65,39,9,43,32,157,132,78,2,58,9,157,68,182,232,36,116,18,58,137,204,232,201,133,150,158,135,78,34,55,138,129,39,244,129,255,246,189,13,0,157,132,78,66,39,145,59,20,243,221,26,
208,73,46,39,0,193,238,167,147,132,234,36,118,187,189,203,253,154,113,18,0,88,182,108,25,166,79,159,238,215,18,214,140,147,56,28,14,204,157,59,23,69,69,69,24,53,106,148,247,179,167,165,249,36,117,117,
117,88,181,106,21,150,44,89,130,146,146,18,56,92,14,237,205,39,57,120,240,32,102,204,152,129,5,11,22,32,250,231,209,33,205,39,81,229,123,220,7,142,30,136,131,111,30,244,115,146,232,234,104,228,126,146,
171,141,239,113,143,109,136,69,246,75,157,219,21,1,254,78,162,165,239,113,175,153,84,131,234,73,213,72,249,91,138,118,157,68,105,178,139,98,64,128,78,66,39,161,147,92,85,64,58,137,84,74,125,19,159,86,
7,157,36,172,128,116,18,58,9,232,36,116,18,217,162,147,208,73,232,36,50,163,39,23,90,122,30,58,9,157,132,78,18,100,229,9,188,45,176,232,36,74,191,211,73,232,36,215,218,73,34,34,34,180,235,36,86,171,21,
207,63,255,60,204,102,179,54,157,164,178,178,18,187,118,237,194,130,5,11,252,63,123,90,114,146,213,171,87,67,16,4,60,254,248,227,238,209,211,162,147,44,92,184,16,118,187,29,51,102,205,128,227,78,135,54,
175,187,245,211,159,254,20,45,3,90,32,252,70,144,159,79,18,112,221,173,107,238,36,61,122,244,192,238,131,187,189,225,180,234,36,181,197,181,56,254,95,199,61,173,15,77,58,201,153,177,103,208,145,208,129,
149,89,43,181,235,36,83,102,78,89,61,246,150,177,115,130,61,134,78,18,88,116,18,169,174,149,147,252,31,69,181,62,83,84,86,21,174,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* KurzProgramTab::greenWrap40_png = (const char*) resource_KurzProgramTab_greenWrap40_png;
const int KurzProgramTab::greenWrap40_pngSize = 29795;
