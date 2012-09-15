/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  18 Aug 2012 5:45:26pm

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

#include "Rack.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...

const uint8 Rack::msg_42[7] = {0x00, 0x04, 0x64, 0x00, 0x42, 0x00, 0x00}; // 42 Master Table
const uint8 Rack::msg_44[7] = {0x00, 0x04, 0x64, 0x00, 0x44, 0x00, 0x00}; // 44 LFO Shapes
const uint8 Rack::msg_45[7] = {0x00, 0x04, 0x64, 0x00, 0x45, 0x00, 0x00}; // 45 Sound Block
const uint8 Rack::msg_46[7] = {0x00, 0x04, 0x64, 0x00, 0x46, 0x00, 0x00}; // 46 KBD Map
const uint8 Rack::msg_47[7] = {0x00, 0x04, 0x64, 0x00, 0x47, 0x00, 0x00}; // 47 MIDI Prog List
const uint8 Rack::msg_4B[7] = {0x00, 0x04, 0x64, 0x00, 0x4B, 0x00, 0x00}; // 4B Intonations
const uint8 Rack::msg_4C[7] = {0x00, 0x04, 0x64, 0x00, 0x4C, 0x00, 0x00}; // 4C Compiled Effects
const uint8 Rack::msg_4D[7] = {0x00, 0x04, 0x64, 0x00, 0x4D, 0x00, 0x00}; // 4D Velocity Maps
const uint8 Rack::msg_4E[7] = {0x00, 0x04, 0x64, 0x00, 0x4E, 0x00, 0x00}; // 4E Pressure Maps
const uint8 Rack::msg_4F[7] = {0x00, 0x04, 0x64, 0x00, 0x4F, 0x00, 0x00}; // 4F Editor Descriptor
const uint8 Rack::msg_50[7] = {0x00, 0x04, 0x64, 0x00, 0x50, 0x00, 0x00}; // 50 Programs
const uint8 Rack::msg_51[7] = {0x00, 0x04, 0x64, 0x00, 0x51, 0x00, 0x00}; // 51 Layers
const uint8 Rack::msg_5B[7] = {0x00, 0x04, 0x64, 0x00, 0x5B, 0x00, 0x00}; // 5B Song List
const uint8 Rack::msg_5C[7] = {0x00, 0x04, 0x64, 0x00, 0x5C, 0x00, 0x00}; // 5C
const uint8 Rack::msg_5E[7] = {0x00, 0x04, 0x64, 0x00, 0x5E, 0x00, 0x00}; // 5E PLists
const uint8 Rack::msg_5F[7] = {0x00, 0x04, 0x64, 0x00, 0x5F, 0x00, 0x00}; // 5F Bin List

const uint8 Rack::msg_LFO1[16] = {0x00, 0x0C, 0x64, 0x02, 0x44, 0x01, 0x00, 0x00, 0x02, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00}; // 44 LFO Req for ID 1
const uint8 Rack::msg_LFO2[16] = {0x00, 0x0C, 0x64, 0x02, 0x44, 0x02, 0x00, 0x00, 0x02, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00}; // 44 LFO Req for ID 2
const uint8 Rack::msg_LFO5[16] = {0x00, 0x0C, 0x64, 0x02, 0x44, 0x05, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00}; // 44 LFO Req for ID 5
const uint8 Rack::msg_LFO15[16] = {0x00, 0x0C, 0x64, 0x02, 0x44, 0x0F, 0x00, 0x00, 0x02, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00}; // 44 LFO Req for ID 15
const uint8 Rack::msg_LFO19[16] = {0x00, 0x0C, 0x64, 0x02, 0x44, 0x13, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00}; // 44 LFO Req for ID 19
//[/MiscUserDefs]

//==============================================================================
Rack::Rack ()
    : Component (L"Rack"),
      labelLCD (0),
      groupComponent (0),
      iButtonA (0),
      iButtonB (0),
      iButtonC (0),
      iButtonPlay (0),
      iButtonMode (0),
      iButton0 (0),
      iButton1 (0),
      iButton2 (0),
      iButton3 (0),
      iButton4 (0),
      iButton5 (0),
      iButton6 (0),
      iButton7 (0),
      iButton8 (0),
      iButton9 (0),
      iButtonChanUP (0),
      iButtonChanDN (0),
      iButtonProgUP (0),
      iButtonProgDN (0),
      iButtonValUP (0),
      iButtonValDN (0),
      iButtonEnter (0),
      iButtonStore (0),
      label2 (0),
      label3 (0),
      label4 (0),
      label5 (0),
      label6 (0),
      label7 (0),
      label8 (0),
      label9 (0),
      label10 (0),
      label11 (0),
      label12 (0),
      label13 (0),
      label14 (0),
      label15 (0),
      label16 (0),
      label17 (0),
      label18 (0),
      label19 (0),
      label20 (0),
      label21 (0),
      label22 (0),
      label23 (0),
      textButtonOptions (0),
      iButton10 (0),
      iButton11 (0),
      iButton12 (0),
      iButton13 (0),
      iButton14 (0),
      iButton15 (0),
      iButton16 (0),
      iButton17 (0),
      iButton18 (0),
      iButton19 (0),
      label24 (0),
      label25 (0),
      label26 (0),
      label27 (0),
      label28 (0),
      label29 (0),
      label30 (0),
      label31 (0),
      label32 (0),
      label33 (0)
{
    addAndMakeVisible (labelLCD = new Label (L"new label",
                                             L"123456789012345\n123456789012345"));
    labelLCD->setTooltip (L"Click here to force a screen refresh");
    labelLCD->setFont (Font (Font::getDefaultMonospacedFontName(), 20.0000f, Font::bold));
    labelLCD->setJustificationType (Justification::topLeft);
    labelLCD->setEditable (false, false, false);
    labelLCD->setColour (Label::backgroundColourId, Colour (0xffd8f79d));
    labelLCD->setColour (TextEditor::textColourId, Colours::black);
    labelLCD->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (groupComponent = new GroupComponent (L"new group",
                                                            L"LCD"));
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0x66ffffff));
    groupComponent->setColour (GroupComponent::textColourId, Colours::white);

    addAndMakeVisible (iButtonA = new ImageButton (L"new button"));
    iButtonA->addListener (this);

    iButtonA->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonB = new ImageButton (L"new button"));
    iButtonB->addListener (this);

    iButtonB->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonC = new ImageButton (L"new button"));
    iButtonC->addListener (this);

    iButtonC->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonPlay = new ImageButton (L"new button"));
    iButtonPlay->addListener (this);

    iButtonPlay->setImages (false, true, true,
                            ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                            Image(), 1.0000f, Colour (0x0),
                            ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonMode = new ImageButton (L"new button"));
    iButtonMode->addListener (this);

    iButtonMode->setImages (false, true, true,
                            ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                            Image(), 1.0000f, Colour (0x0),
                            ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton0 = new ImageButton (L"new button"));
    iButton0->addListener (this);

    iButton0->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton1 = new ImageButton (L"new button"));
    iButton1->addListener (this);

    iButton1->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton2 = new ImageButton (L"new button"));
    iButton2->addListener (this);

    iButton2->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton3 = new ImageButton (L"new button"));
    iButton3->addListener (this);

    iButton3->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton4 = new ImageButton (L"new button"));
    iButton4->addListener (this);

    iButton4->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton5 = new ImageButton (L"new button"));
    iButton5->addListener (this);

    iButton5->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton6 = new ImageButton (L"new button"));
    iButton6->addListener (this);

    iButton6->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton7 = new ImageButton (L"new button"));
    iButton7->addListener (this);

    iButton7->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton8 = new ImageButton (L"new button"));
    iButton8->addListener (this);

    iButton8->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton9 = new ImageButton (L"new button"));
    iButton9->addListener (this);

    iButton9->setImages (false, true, true,
                         ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                         Image(), 1.0000f, Colour (0x0),
                         ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonChanUP = new ImageButton (L"new button"));
    iButtonChanUP->addListener (this);

    iButtonChanUP->setImages (false, true, true,
                              ImageCache::getFromMemory (buttonUpUp_png, buttonUpUp_pngSize), 1.0000f, Colour (0x0),
                              Image(), 1.0000f, Colour (0x0),
                              ImageCache::getFromMemory (buttonUpDn_png, buttonUpDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonChanDN = new ImageButton (L"new button"));
    iButtonChanDN->addListener (this);

    iButtonChanDN->setImages (false, true, true,
                              ImageCache::getFromMemory (buttonDnUp_png, buttonDnUp_pngSize), 1.0000f, Colour (0x0),
                              Image(), 1.0000f, Colour (0x0),
                              ImageCache::getFromMemory (buttonDnDn_png, buttonDnDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonProgUP = new ImageButton (L"new button"));
    iButtonProgUP->addListener (this);

    iButtonProgUP->setImages (false, true, true,
                              ImageCache::getFromMemory (buttonUpUp_png, buttonUpUp_pngSize), 1.0000f, Colour (0x0),
                              Image(), 1.0000f, Colour (0x0),
                              ImageCache::getFromMemory (buttonUpDn_png, buttonUpDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonProgDN = new ImageButton (L"new button"));
    iButtonProgDN->addListener (this);

    iButtonProgDN->setImages (false, true, true,
                              ImageCache::getFromMemory (buttonDnUp_png, buttonDnUp_pngSize), 1.0000f, Colour (0x0),
                              Image(), 1.0000f, Colour (0x0),
                              ImageCache::getFromMemory (buttonDnDn_png, buttonDnDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonValUP = new ImageButton (L"new button"));
    iButtonValUP->addListener (this);

    iButtonValUP->setImages (false, true, true,
                             ImageCache::getFromMemory (buttonUpUp_png, buttonUpUp_pngSize), 1.0000f, Colour (0x0),
                             Image(), 1.0000f, Colour (0x0),
                             ImageCache::getFromMemory (buttonUpDn_png, buttonUpDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonValDN = new ImageButton (L"new button"));
    iButtonValDN->addListener (this);

    iButtonValDN->setImages (false, true, true,
                             ImageCache::getFromMemory (buttonDnUp_png, buttonDnUp_pngSize), 1.0000f, Colour (0x0),
                             Image(), 1.0000f, Colour (0x0),
                             ImageCache::getFromMemory (buttonDnDn_png, buttonDnDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonEnter = new ImageButton (L"new button"));
    iButtonEnter->addListener (this);

    iButtonEnter->setImages (false, true, true,
                             ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                             Image(), 1.0000f, Colour (0x0),
                             ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButtonStore = new ImageButton (L"new button"));
    iButtonStore->addListener (this);

    iButtonStore->setImages (false, true, true,
                             ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                             Image(), 1.0000f, Colour (0x0),
                             ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (label2 = new Label (L"new label",
                                           L"A"));
    label2->setFont (Font (15.0000f, Font::plain));
    label2->setJustificationType (Justification::centred);
    label2->setEditable (false, false, false);
    label2->setColour (Label::backgroundColourId, Colour (0x0));
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label3 = new Label (L"new label",
                                           L"B"));
    label3->setFont (Font (15.0000f, Font::plain));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (Label::backgroundColourId, Colour (0x0));
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label4 = new Label (L"new label",
                                           L"C"));
    label4->setFont (Font (15.0000f, Font::plain));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (Label::backgroundColourId, Colour (0x0));
    label4->setColour (Label::textColourId, Colours::white);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label5 = new Label (L"new label",
                                           L"0"));
    label5->setFont (Font (15.0000f, Font::plain));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (Label::backgroundColourId, Colour (0x0));
    label5->setColour (Label::textColourId, Colours::white);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label6 = new Label (L"new label",
                                           L"1"));
    label6->setFont (Font (15.0000f, Font::plain));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (Label::backgroundColourId, Colour (0x0));
    label6->setColour (Label::textColourId, Colours::white);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label7 = new Label (L"new label",
                                           L"2"));
    label7->setFont (Font (15.0000f, Font::plain));
    label7->setJustificationType (Justification::centred);
    label7->setEditable (false, false, false);
    label7->setColour (Label::backgroundColourId, Colour (0x0));
    label7->setColour (Label::textColourId, Colours::white);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label8 = new Label (L"new label",
                                           L"3"));
    label8->setFont (Font (15.0000f, Font::plain));
    label8->setJustificationType (Justification::centred);
    label8->setEditable (false, false, false);
    label8->setColour (Label::backgroundColourId, Colour (0x0));
    label8->setColour (Label::textColourId, Colours::white);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label9 = new Label (L"new label",
                                           L"4"));
    label9->setFont (Font (15.0000f, Font::plain));
    label9->setJustificationType (Justification::centred);
    label9->setEditable (false, false, false);
    label9->setColour (Label::backgroundColourId, Colour (0x0));
    label9->setColour (Label::textColourId, Colours::white);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label10 = new Label (L"new label",
                                            L"5"));
    label10->setFont (Font (15.0000f, Font::plain));
    label10->setJustificationType (Justification::centred);
    label10->setEditable (false, false, false);
    label10->setColour (Label::backgroundColourId, Colour (0x0));
    label10->setColour (Label::textColourId, Colours::white);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label11 = new Label (L"new label",
                                            L"6"));
    label11->setFont (Font (15.0000f, Font::plain));
    label11->setJustificationType (Justification::centred);
    label11->setEditable (false, false, false);
    label11->setColour (Label::backgroundColourId, Colour (0x0));
    label11->setColour (Label::textColourId, Colours::white);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label12 = new Label (L"new label",
                                            L"7"));
    label12->setFont (Font (15.0000f, Font::plain));
    label12->setJustificationType (Justification::centred);
    label12->setEditable (false, false, false);
    label12->setColour (Label::backgroundColourId, Colour (0x0));
    label12->setColour (Label::textColourId, Colours::white);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label13 = new Label (L"new label",
                                            L"8"));
    label13->setFont (Font (15.0000f, Font::plain));
    label13->setJustificationType (Justification::centred);
    label13->setEditable (false, false, false);
    label13->setColour (Label::backgroundColourId, Colour (0x0));
    label13->setColour (Label::textColourId, Colours::white);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label14 = new Label (L"new label",
                                            L"9"));
    label14->setFont (Font (15.0000f, Font::plain));
    label14->setJustificationType (Justification::centred);
    label14->setEditable (false, false, false);
    label14->setColour (Label::backgroundColourId, Colour (0x0));
    label14->setColour (Label::textColourId, Colours::white);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label15 = new Label (L"new label",
                                            L"PLAY\n\nEDIT"));
    label15->setFont (Font (15.0000f, Font::plain));
    label15->setJustificationType (Justification::centred);
    label15->setEditable (false, false, false);
    label15->setColour (Label::backgroundColourId, Colour (0x0));
    label15->setColour (Label::textColourId, Colours::white);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label16 = new Label (L"new label",
                                            L"MODE\n\nLAYER"));
    label16->setFont (Font (15.0000f, Font::plain));
    label16->setJustificationType (Justification::centred);
    label16->setEditable (false, false, false);
    label16->setColour (Label::backgroundColourId, Colour (0x0));
    label16->setColour (Label::textColourId, Colours::white);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label17 = new Label (L"new label",
                                            L"CHANNEL\n\nMENU"));
    label17->setFont (Font (15.0000f, Font::plain));
    label17->setJustificationType (Justification::centred);
    label17->setEditable (false, false, false);
    label17->setColour (Label::backgroundColourId, Colour (0x0));
    label17->setColour (Label::textColourId, Colours::white);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label18 = new Label (L"new label",
                                            L"PROGRAM\n\nPARAMETER"));
    label18->setFont (Font (15.0000f, Font::plain));
    label18->setJustificationType (Justification::centred);
    label18->setEditable (false, false, false);
    label18->setColour (Label::backgroundColourId, Colour (0x0));
    label18->setColour (Label::textColourId, Colours::white);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label19 = new Label (L"new label",
                                            L"ENTER\n\nCOMPARE"));
    label19->setFont (Font (15.0000f, Font::plain));
    label19->setJustificationType (Justification::centred);
    label19->setEditable (false, false, false);
    label19->setColour (Label::backgroundColourId, Colour (0x0));
    label19->setColour (Label::textColourId, Colours::white);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label20 = new Label (L"new label",
                                            L"STORE"));
    label20->setFont (Font (15.0000f, Font::plain));
    label20->setJustificationType (Justification::centred);
    label20->setEditable (false, false, false);
    label20->setColour (Label::backgroundColourId, Colour (0x0));
    label20->setColour (Label::textColourId, Colours::white);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label21 = new Label (L"new label",
                                            L"1200 PRO"));
    label21->setFont (Font (20.0000f, Font::bold | Font::italic));
    label21->setJustificationType (Justification::centredLeft);
    label21->setEditable (false, false, false);
    label21->setColour (Label::textColourId, Colour (0xff1b00ff));
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label22 = new Label (L"new label",
                                            L"I"));
    label22->setFont (Font (20.0000f, Font::bold | Font::italic));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (Label::textColourId, Colours::white);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label23 = new Label (L"new label",
                                            L"VALUE\n\nNO       YES"));
    label23->setFont (Font (15.0000f, Font::plain));
    label23->setJustificationType (Justification::centred);
    label23->setEditable (false, false, false);
    label23->setColour (Label::backgroundColourId, Colour (0x0));
    label23->setColour (Label::textColourId, Colours::white);
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textButtonOptions = new TextButton (L"new button"));
    textButtonOptions->setButtonText (L"Options");
    textButtonOptions->addListener (this);
    textButtonOptions->setColour (TextButton::buttonColourId, Colours::white);
    textButtonOptions->setColour (TextButton::buttonOnColourId, Colour (0xff6d6d6d));

    addAndMakeVisible (iButton10 = new ImageButton (L"new button"));
    iButton10->addListener (this);

    iButton10->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton11 = new ImageButton (L"new button"));
    iButton11->addListener (this);

    iButton11->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton12 = new ImageButton (L"new button"));
    iButton12->addListener (this);

    iButton12->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton13 = new ImageButton (L"new button"));
    iButton13->addListener (this);

    iButton13->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton14 = new ImageButton (L"new button"));
    iButton14->addListener (this);

    iButton14->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton15 = new ImageButton (L"new button"));
    iButton15->addListener (this);

    iButton15->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton16 = new ImageButton (L"new button"));
    iButton16->addListener (this);

    iButton16->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton17 = new ImageButton (L"new button"));
    iButton17->addListener (this);

    iButton17->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton18 = new ImageButton (L"new button"));
    iButton18->addListener (this);

    iButton18->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (iButton19 = new ImageButton (L"new button"));
    iButton19->addListener (this);

    iButton19->setImages (false, true, true,
                          ImageCache::getFromMemory (buttonUp_png, buttonUp_pngSize), 1.0000f, Colour (0x0),
                          Image(), 1.0000f, Colour (0x0),
                          ImageCache::getFromMemory (buttonDn_png, buttonDn_pngSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (label24 = new Label (L"new label",
                                            L"A"));
    label24->setFont (Font (15.0000f, Font::plain));
    label24->setJustificationType (Justification::centred);
    label24->setEditable (false, false, false);
    label24->setColour (Label::backgroundColourId, Colour (0x0));
    label24->setColour (Label::textColourId, Colours::white);
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label25 = new Label (L"new label",
                                            L"B"));
    label25->setFont (Font (15.0000f, Font::plain));
    label25->setJustificationType (Justification::centred);
    label25->setEditable (false, false, false);
    label25->setColour (Label::backgroundColourId, Colour (0x0));
    label25->setColour (Label::textColourId, Colours::white);
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label26 = new Label (L"new label",
                                            L"C"));
    label26->setFont (Font (15.0000f, Font::plain));
    label26->setJustificationType (Justification::centred);
    label26->setEditable (false, false, false);
    label26->setColour (Label::backgroundColourId, Colour (0x0));
    label26->setColour (Label::textColourId, Colours::white);
    label26->setColour (TextEditor::textColourId, Colours::black);
    label26->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label27 = new Label (L"new label",
                                            L"D"));
    label27->setFont (Font (15.0000f, Font::plain));
    label27->setJustificationType (Justification::centred);
    label27->setEditable (false, false, false);
    label27->setColour (Label::backgroundColourId, Colour (0x0));
    label27->setColour (Label::textColourId, Colours::white);
    label27->setColour (TextEditor::textColourId, Colours::black);
    label27->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label28 = new Label (L"new label",
                                            L"E"));
    label28->setFont (Font (15.0000f, Font::plain));
    label28->setJustificationType (Justification::centred);
    label28->setEditable (false, false, false);
    label28->setColour (Label::backgroundColourId, Colour (0x0));
    label28->setColour (Label::textColourId, Colours::white);
    label28->setColour (TextEditor::textColourId, Colours::black);
    label28->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label29 = new Label (L"new label",
                                            L"F"));
    label29->setFont (Font (15.0000f, Font::plain));
    label29->setJustificationType (Justification::centred);
    label29->setEditable (false, false, false);
    label29->setColour (Label::backgroundColourId, Colour (0x0));
    label29->setColour (Label::textColourId, Colours::white);
    label29->setColour (TextEditor::textColourId, Colours::black);
    label29->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label30 = new Label (L"new label",
                                            L"G"));
    label30->setFont (Font (15.0000f, Font::plain));
    label30->setJustificationType (Justification::centred);
    label30->setEditable (false, false, false);
    label30->setColour (Label::backgroundColourId, Colour (0x0));
    label30->setColour (Label::textColourId, Colours::white);
    label30->setColour (TextEditor::textColourId, Colours::black);
    label30->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label31 = new Label (L"new label",
                                            L"H"));
    label31->setFont (Font (15.0000f, Font::plain));
    label31->setJustificationType (Justification::centred);
    label31->setEditable (false, false, false);
    label31->setColour (Label::backgroundColourId, Colour (0x0));
    label31->setColour (Label::textColourId, Colours::white);
    label31->setColour (TextEditor::textColourId, Colours::black);
    label31->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label32 = new Label (L"new label",
                                            L"I"));
    label32->setFont (Font (15.0000f, Font::plain));
    label32->setJustificationType (Justification::centred);
    label32->setEditable (false, false, false);
    label32->setColour (Label::backgroundColourId, Colour (0x0));
    label32->setColour (Label::textColourId, Colours::white);
    label32->setColour (TextEditor::textColourId, Colours::black);
    label32->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label33 = new Label (L"new label",
                                            L"J"));
    label33->setFont (Font (15.0000f, Font::plain));
    label33->setJustificationType (Justification::centred);
    label33->setEditable (false, false, false);
    label33->setColour (Label::backgroundColourId, Colour (0x0));
    label33->setColour (Label::textColourId, Colours::white);
    label33->setColour (TextEditor::textColourId, Colours::black);
    label33->setColour (TextEditor::backgroundColourId, Colour (0x0));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (900, 270);


    //[Constructor] You can add your own custom stuff here..
  midiBuffer = new MidiBuffer();
  int default_dev = MidiOutput::getDefaultDeviceIndex();

  StringArray all_devs = MidiOutput::getDevices();
  for(int i = 0; i < all_devs.size(); i++)
    {
      std::cout << "Device [" << i << "] = " << all_devs[i] << "\n";
      if(all_devs[i] == "USB Midi")
        default_dev = i;
    }
  //midiOutput = MidiOutput::createNewDevice("KurzPanel");
  midiOutput = MidiOutput::openDevice(default_dev);
  //midiOutput->openDevice(default_dev);

  default_dev = MidiInput::getDefaultDeviceIndex();

  all_devs = MidiInput::getDevices();
  for (int i = 0; i < all_devs.size(); i++)
    {
      std::cout << "Device [" << i << "] = " << all_devs[i] << "\n";
      if (all_devs[i] == "USB Midi")
        default_dev = i;
    }
  //midiInput = MidiInput::createNewDevice("KurzPanel", this);
  midiInput = MidiInput::openDevice(default_dev, this);

  //midiInput = MidiInput::openDevice(default_dev, this);
  //midiInput->setName("KurzPanel");

  labelLCD->setText(L"Initialize", true);
  midiInput->start();

  remoteLink = new KurzConnection(0x4d, 0x00, midiOutput, sendQueue, progDir);

  //gAudioDevice.addMidiInputCallback(String::empty, midiMgr);

  //startTimer(10);

  setVisible (true);
    //[/Constructor]
}

Rack::~Rack()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
  std::cout << "Destroying Rack Subcomponents..." << std::endl;
    //[/Destructor_pre]

    deleteAndZero (labelLCD);
    deleteAndZero (groupComponent);
    deleteAndZero (iButtonA);
    deleteAndZero (iButtonB);
    deleteAndZero (iButtonC);
    deleteAndZero (iButtonPlay);
    deleteAndZero (iButtonMode);
    deleteAndZero (iButton0);
    deleteAndZero (iButton1);
    deleteAndZero (iButton2);
    deleteAndZero (iButton3);
    deleteAndZero (iButton4);
    deleteAndZero (iButton5);
    deleteAndZero (iButton6);
    deleteAndZero (iButton7);
    deleteAndZero (iButton8);
    deleteAndZero (iButton9);
    deleteAndZero (iButtonChanUP);
    deleteAndZero (iButtonChanDN);
    deleteAndZero (iButtonProgUP);
    deleteAndZero (iButtonProgDN);
    deleteAndZero (iButtonValUP);
    deleteAndZero (iButtonValDN);
    deleteAndZero (iButtonEnter);
    deleteAndZero (iButtonStore);
    deleteAndZero (label2);
    deleteAndZero (label3);
    deleteAndZero (label4);
    deleteAndZero (label5);
    deleteAndZero (label6);
    deleteAndZero (label7);
    deleteAndZero (label8);
    deleteAndZero (label9);
    deleteAndZero (label10);
    deleteAndZero (label11);
    deleteAndZero (label12);
    deleteAndZero (label13);
    deleteAndZero (label14);
    deleteAndZero (label15);
    deleteAndZero (label16);
    deleteAndZero (label17);
    deleteAndZero (label18);
    deleteAndZero (label19);
    deleteAndZero (label20);
    deleteAndZero (label21);
    deleteAndZero (label22);
    deleteAndZero (label23);
    deleteAndZero (textButtonOptions);
    deleteAndZero (iButton10);
    deleteAndZero (iButton11);
    deleteAndZero (iButton12);
    deleteAndZero (iButton13);
    deleteAndZero (iButton14);
    deleteAndZero (iButton15);
    deleteAndZero (iButton16);
    deleteAndZero (iButton17);
    deleteAndZero (iButton18);
    deleteAndZero (iButton19);
    deleteAndZero (label24);
    deleteAndZero (label25);
    deleteAndZero (label26);
    deleteAndZero (label27);
    deleteAndZero (label28);
    deleteAndZero (label29);
    deleteAndZero (label30);
    deleteAndZero (label31);
    deleteAndZero (label32);
    deleteAndZero (label33);


    //[Destructor]. You can add your own custom destruction code here..
  delete midiBuffer;
  delete midiOutput;
  delete midiInput;
  std::cout << "Destroyed Rack Subcomponents..." << std::endl;
    //[/Destructor]
}

//==============================================================================
void Rack::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Rack::resized()
{
    labelLCD->setBounds (32, 72, 192, 40);
    groupComponent->setBounds (16, 48, 224, 80);
    iButtonA->setBounds (40, 160, 30, 30);
    iButtonB->setBounds (104, 160, 30, 30);
    iButtonC->setBounds (168, 160, 30, 30);
    iButtonPlay->setBounds (256, 16, 30, 30);
    iButtonMode->setBounds (320, 16, 30, 30);
    iButton0->setBounds (256, 160, 30, 30);
    iButton1->setBounds (320, 160, 30, 30);
    iButton2->setBounds (384, 160, 30, 30);
    iButton3->setBounds (448, 160, 30, 30);
    iButton4->setBounds (512, 160, 30, 30);
    iButton5->setBounds (576, 160, 30, 30);
    iButton6->setBounds (640, 160, 30, 30);
    iButton7->setBounds (704, 160, 30, 30);
    iButton8->setBounds (768, 160, 30, 30);
    iButton9->setBounds (832, 160, 30, 30);
    iButtonChanUP->setBounds (392, 16, 30, 30);
    iButtonChanDN->setBounds (440, 16, 30, 30);
    iButtonProgUP->setBounds (520, 16, 30, 30);
    iButtonProgDN->setBounds (568, 16, 30, 30);
    iButtonValUP->setBounds (648, 16, 30, 30);
    iButtonValDN->setBounds (696, 16, 30, 30);
    iButtonEnter->setBounds (768, 16, 30, 30);
    iButtonStore->setBounds (832, 16, 30, 30);
    label2->setBounds (40, 128, 30, 30);
    label3->setBounds (104, 128, 30, 30);
    label4->setBounds (168, 128, 30, 30);
    label5->setBounds (256, 128, 30, 30);
    label6->setBounds (320, 128, 30, 30);
    label7->setBounds (384, 128, 30, 30);
    label8->setBounds (448, 128, 30, 30);
    label9->setBounds (512, 128, 30, 30);
    label10->setBounds (576, 128, 30, 30);
    label11->setBounds (640, 128, 30, 30);
    label12->setBounds (704, 128, 30, 30);
    label13->setBounds (768, 128, 30, 30);
    label14->setBounds (832, 128, 30, 30);
    label15->setBounds (240, 48, 60, 60);
    label16->setBounds (304, 48, 60, 60);
    label17->setBounds (384, 48, 90, 60);
    label18->setBounds (512, 48, 90, 60);
    label19->setBounds (736, 48, 90, 60);
    label20->setBounds (816, 48, 60, 30);
    label21->setBounds (24, 16, 104, 24);
    label22->setBounds (128, 16, 24, 24);
    label23->setBounds (640, 48, 90, 60);
    textButtonOptions->setBounds (160, 16, 79, 24);
    iButton10->setBounds (256, 208, 30, 30);
    iButton11->setBounds (320, 208, 30, 30);
    iButton12->setBounds (384, 208, 30, 30);
    iButton13->setBounds (448, 208, 30, 30);
    iButton14->setBounds (512, 208, 30, 30);
    iButton15->setBounds (576, 208, 30, 30);
    iButton16->setBounds (640, 208, 30, 30);
    iButton17->setBounds (704, 208, 30, 30);
    iButton18->setBounds (768, 208, 30, 30);
    iButton19->setBounds (832, 208, 30, 30);
    label24->setBounds (256, 234, 30, 30);
    label25->setBounds (320, 234, 30, 30);
    label26->setBounds (384, 234, 30, 30);
    label27->setBounds (448, 234, 30, 30);
    label28->setBounds (512, 234, 30, 30);
    label29->setBounds (576, 234, 30, 30);
    label30->setBounds (640, 234, 30, 30);
    label31->setBounds (704, 234, 30, 30);
    label32->setBounds (768, 234, 30, 30);
    label33->setBounds (832, 234, 30, 30);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Rack::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == iButtonA)
    {
        //[UserButtonCode_iButtonA] -- add your button handler code here..
      //labelLCD->setText(L"A Pressed", true);
      sendSynthKey(K_KEY_A);
        //[/UserButtonCode_iButtonA]
    }
    else if (buttonThatWasClicked == iButtonB)
    {
        //[UserButtonCode_iButtonB] -- add your button handler code here..
      //labelLCD->setText(L"B Pressed", true);
      sendSynthKey(K_KEY_B);
        //[/UserButtonCode_iButtonB]
    }
    else if (buttonThatWasClicked == iButtonC)
    {
        //[UserButtonCode_iButtonC] -- add your button handler code here..
      //labelLCD->setText(L"C Pressed", true);
      sendSynthKey(K_KEY_C);
        //[/UserButtonCode_iButtonC]
    }
    else if (buttonThatWasClicked == iButtonPlay)
    {
        //[UserButtonCode_iButtonPlay] -- add your button handler code here..
      //labelLCD->setText(L"Play Pressed", true);
      sendSynthKey(K_KEY_PLAY);
        //[/UserButtonCode_iButtonPlay]
    }
    else if (buttonThatWasClicked == iButtonMode)
    {
        //[UserButtonCode_iButtonMode] -- add your button handler code here..
      //labelLCD->setText(L"Mode Pressed", true);
      sendSynthKey(K_KEY_MODE);
        //[/UserButtonCode_iButtonMode]
    }
    else if (buttonThatWasClicked == iButton0)
    {
        //[UserButtonCode_iButton0] -- add your button handler code here..
      //labelLCD->setText(L"0 Pressed", true);
      sendSynthKey(K_KEY_0);
        //[/UserButtonCode_iButton0]
    }
    else if (buttonThatWasClicked == iButton1)
    {
        //[UserButtonCode_iButton1] -- add your button handler code here..
      //labelLCD->setText(L"1 Pressed", true);
      sendSynthKey(K_KEY_1);
        //[/UserButtonCode_iButton1]
    }
    else if (buttonThatWasClicked == iButton2)
    {
        //[UserButtonCode_iButton2] -- add your button handler code here..
      //labelLCD->setText(L"2 Pressed", true);
      sendSynthKey(K_KEY_2);
        //[/UserButtonCode_iButton2]
    }
    else if (buttonThatWasClicked == iButton3)
    {
        //[UserButtonCode_iButton3] -- add your button handler code here..
      //labelLCD->setText(L"3 Pressed", true);
      sendSynthKey(K_KEY_3);
        //[/UserButtonCode_iButton3]
    }
    else if (buttonThatWasClicked == iButton4)
    {
        //[UserButtonCode_iButton4] -- add your button handler code here..
      //labelLCD->setText(L"4 Pressed", true);
      sendSynthKey(K_KEY_4);
        //[/UserButtonCode_iButton4]
    }
    else if (buttonThatWasClicked == iButton5)
    {
        //[UserButtonCode_iButton5] -- add your button handler code here..
      //labelLCD->setText(L"5 Pressed", true);
      sendSynthKey(K_KEY_5);
        //[/UserButtonCode_iButton5]
    }
    else if (buttonThatWasClicked == iButton6)
    {
        //[UserButtonCode_iButton6] -- add your button handler code here..
      //labelLCD->setText(L"6 Pressed", true);
      sendSynthKey(K_KEY_6);
        //[/UserButtonCode_iButton6]
    }
    else if (buttonThatWasClicked == iButton7)
    {
        //[UserButtonCode_iButton7] -- add your button handler code here..
      //labelLCD->setText(L"7 Pressed", true);
      sendSynthKey(K_KEY_7);
        //[/UserButtonCode_iButton7]
    }
    else if (buttonThatWasClicked == iButton8)
    {
        //[UserButtonCode_iButton8] -- add your button handler code here..
      //labelLCD->setText(L"8 Pressed", true);
      sendSynthKey(K_KEY_8);
        //[/UserButtonCode_iButton8]
    }
    else if (buttonThatWasClicked == iButton9)
    {
        //[UserButtonCode_iButton9] -- add your button handler code here..
      //labelLCD->setText(L"9 Pressed", true);
      sendSynthKey(K_KEY_9);
        //[/UserButtonCode_iButton9]
    }
    else if (buttonThatWasClicked == iButtonChanUP)
    {
        //[UserButtonCode_iButtonChanUP] -- add your button handler code here..
      //labelLCD->setText(L"Chan Up Pressed", true);
      sendSynthKey(K_KEY_CHAN_UP);
        //[/UserButtonCode_iButtonChanUP]
    }
    else if (buttonThatWasClicked == iButtonChanDN)
    {
        //[UserButtonCode_iButtonChanDN] -- add your button handler code here..
      //labelLCD->setText(L"Chan Dn Pressed", true);
      sendSynthKey(K_KEY_CHAN_DN);
        //[/UserButtonCode_iButtonChanDN]
    }
    else if (buttonThatWasClicked == iButtonProgUP)
    {
        //[UserButtonCode_iButtonProgUP] -- add your button handler code here..
      //labelLCD->setText(L"Prog Up Pressed", true);
      sendSynthKey(K_KEY_PROG_UP);
        //[/UserButtonCode_iButtonProgUP]
    }
    else if (buttonThatWasClicked == iButtonProgDN)
    {
        //[UserButtonCode_iButtonProgDN] -- add your button handler code here..
      //labelLCD->setText(L"Prog Dn Pressed", true);
      sendSynthKey(K_KEY_PROG_DN);
        //[/UserButtonCode_iButtonProgDN]
    }
    else if (buttonThatWasClicked == iButtonValUP)
    {
        //[UserButtonCode_iButtonValUP] -- add your button handler code here..
      //labelLCD->setText(L"Val Up Pressed", true);
      sendSynthKey(K_KEY_VAL_UP);
        //[/UserButtonCode_iButtonValUP]
    }
    else if (buttonThatWasClicked == iButtonValDN)
    {
        //[UserButtonCode_iButtonValDN] -- add your button handler code here..
      //labelLCD->setText(L"Val Dn Pressed", true);
      sendSynthKey(K_KEY_VAL_DN);
        //[/UserButtonCode_iButtonValDN]
    }
    else if (buttonThatWasClicked == iButtonEnter)
    {
        //[UserButtonCode_iButtonEnter] -- add your button handler code here..
      //labelLCD->setText(L"Enter Pressed", true);
      sendSynthKey(K_KEY_ENTER);
        //[/UserButtonCode_iButtonEnter]
    }
    else if (buttonThatWasClicked == iButtonStore)
    {
        //[UserButtonCode_iButtonStore] -- add your button handler code here..
      //labelLCD->setText(L"Store Pressed", true);
      sendSynthKey(K_KEY_STORE);
        //[/UserButtonCode_iButtonStore]
    }
    else if (buttonThatWasClicked == textButtonOptions)
    {
        //[UserButtonCode_textButtonOptions] -- add your button handler code here..
      sendVerReq();
      /*
        audioComp = new audioComponent(gAudioDevice);
        DialogWindow::showModalDialog("Audio Settings", audioComp, audioComp, Colours::blue, true, true, true);
        delete audioComp;
        */

        //[/UserButtonCode_textButtonOptions]
    }
    else if (buttonThatWasClicked == iButton10)
    {
        //[UserButtonCode_iButton10] -- add your button handler code here..
      if(progDir.Programs.Status == KurzDirList::KDIR_EMPTY)
        {
          //sendQueue.clear();
          //remoteLink->sendDataPacket(msg_42, 7);
          //remoteLink->sendDataPacket(msg_44, 7);
          //remoteLink->sendDataPacket(msg_45, 7);
          //remoteLink->sendDataPacket(msg_46, 7);
          //remoteLink->sendDataPacket(msg_47, 7);
          //remoteLink->sendDataPacket(msg_4B, 7);
          //remoteLink->sendDataPacket(msg_4C, 7);
          //remoteLink->sendDataPacket(msg_4D, 7);
          //remoteLink->sendDataPacket(msg_4E, 7);
          //remoteLink->sendDataPacket(msg_4F, 7);
          remoteLink->sendDataPacket(msg_50, 7);
          //remoteLink->sendDataPacket(msg_51, 7);
          //remoteLink->sendDataPacket(msg_5B, 7);
          //remoteLink->sendDataPacket(msg_5C, 7);
          //remoteLink->sendDataPacket(msg_5E, 7);
          //remoteLink->sendDataPacket(msg_5F, 7);
          //remoteLink->sendDataPacket(msg_LFO1, 16);

        }
      else if (progDir.Programs.Status == KurzDirList::KDIR_OK)
        {
        progDir.Programs.setSysexLink(remoteLink);
        k_ShowDirList *showDirList = new k_ShowDirList((KurzDirList *)&progDir.Programs);
        DialogWindow::showModalDialog(String(progDir.Programs.TypeDesc.c_str()), showDirList, showDirList, Colours::black, false, true, true);
        showDirList->resized();

        delete showDirList;

        //progDir.Programs.ShowList();
        }

        //[/UserButtonCode_iButton10]
    }
    else if (buttonThatWasClicked == iButton11)
    {
        //[UserButtonCode_iButton11] -- add your button handler code here..
      if(progDir.LFOShapes.Status == KurzDirList::KDIR_EMPTY)
        {
          remoteLink->sendDataPacket(msg_44, 7);
        }
      else if (progDir.LFOShapes.Status == KurzDirList::KDIR_OK)
        {
        progDir.LFOShapes.setSysexLink(remoteLink);
        k_ShowDirList *showDirList = new k_ShowDirList((KurzDirList *)&progDir.LFOShapes);
        DialogWindow::showModalDialog(String(progDir.LFOShapes.TypeDesc.c_str()), showDirList, showDirList, Colours::black, false, true, true);
        showDirList->resized();

        delete showDirList;
        }
        //[/UserButtonCode_iButton11]
    }
    else if (buttonThatWasClicked == iButton12)
    {
        //[UserButtonCode_iButton12] -- add your button handler code here..

      KurzLFOShapeList lfoDir = progDir.LFOShapes;

      if(lfoDir.List[0x01].Status == KurzDirEntry::KITEM_FULL)
        {
        map<uint8, KurzLFOShape>::iterator i;

        i = lfoDir.LFOShapes.find(0x01);

	if(i != lfoDir.LFOShapes.end())
		{
		KurzLFOShape &shape = i->second;
		KurzViewLFOShape *LFOView = new KurzViewLFOShape(shape.vectWave);
		DialogWindow::showModalDialog(String(lfoDir.List[0x01].Name.c_str()), LFOView, LFOView, Colours::black, false, true, true);
		delete LFOView;
		}
        }
      else
        {
        remoteLink->sendDataPacket(msg_LFO1, 16);
        }
        //[/UserButtonCode_iButton12]
    }
    else if (buttonThatWasClicked == iButton13)
    {
        //[UserButtonCode_iButton13] -- add your button handler code here..
      KurzLFOShapeList lfoDir = progDir.LFOShapes;

      if(lfoDir.List[0x02].Status == KurzDirEntry::KITEM_FULL)
        {
        map<uint8, KurzLFOShape>::iterator i;

        i = lfoDir.LFOShapes.find(0x02);

	if(i != lfoDir.LFOShapes.end())
		{
		KurzLFOShape &shape = i->second;
		KurzViewLFOShape *LFOView = new KurzViewLFOShape(shape.vectWave);
		DialogWindow::showModalDialog(String(lfoDir.List[0x01].Name.c_str()), LFOView, LFOView, Colours::black, false, true, true);
		delete LFOView;
		}
	}
      else
        {
        remoteLink->sendDataPacket(msg_LFO2, 16);
        }
        //[/UserButtonCode_iButton13]
    }
    else if (buttonThatWasClicked == iButton14)
    {
        //[UserButtonCode_iButton14] -- add your button handler code here..
      KurzLFOShapeList lfoDir = progDir.LFOShapes;

      if(lfoDir.List[0x0f].Status == KurzDirEntry::KITEM_FULL)
        {
        map<uint8, KurzLFOShape>::iterator i;

        i = lfoDir.LFOShapes.find(0x0f);

	if(i != lfoDir.LFOShapes.end())
		{
		KurzLFOShape &shape = i->second;
		KurzViewLFOShape *LFOView = new KurzViewLFOShape(shape.vectWave);
		DialogWindow::showModalDialog(String(lfoDir.List[0x01].Name.c_str()), LFOView, LFOView, Colours::black, false, true, true);
		delete LFOView;
		}
	}
      else
        {
        remoteLink->sendDataPacket(msg_LFO15, 16);
        }
        //[/UserButtonCode_iButton14]
    }
    else if (buttonThatWasClicked == iButton15)
    {
        //[UserButtonCode_iButton15] -- add your button handler code here..
      KurzLFOShapeList lfoDir = progDir.LFOShapes;

      if(lfoDir.List[0x05].Status == KurzDirEntry::KITEM_FULL)
        {
        map<uint8, KurzLFOShape>::iterator i;

        i = lfoDir.LFOShapes.find(0x05);

	if(i != lfoDir.LFOShapes.end())
		{
		KurzLFOShape &shape = i->second;
		KurzViewLFOShape *LFOView = new KurzViewLFOShape(shape.vectWave);
		DialogWindow::showModalDialog(String(lfoDir.List[0x01].Name.c_str()), LFOView, LFOView, Colours::black, false, true, true);
		delete LFOView;
		}
	}
      else
        {
        remoteLink->sendDataPacket(msg_LFO5, 16);
        }
        //[/UserButtonCode_iButton15]
    }
    else if (buttonThatWasClicked == iButton16)
    {
        //[UserButtonCode_iButton16] -- add your button handler code here..
      KurzLFOShapeList lfoDir = progDir.LFOShapes;

      if(lfoDir.List[0x13].Status == KurzDirEntry::KITEM_FULL)
        {
        map<uint8, KurzLFOShape>::iterator i;

        i = lfoDir.LFOShapes.find(0x13);

	if(i != lfoDir.LFOShapes.end())
		{
		KurzLFOShape &shape = i->second;
		KurzViewLFOShape *LFOView = new KurzViewLFOShape(shape.vectWave);
		DialogWindow::showModalDialog(String(lfoDir.List[0x01].Name.c_str()), LFOView, LFOView, Colours::black, false, true, true);
		delete LFOView;
		}
	}
      else
        {
        remoteLink->sendDataPacket(msg_LFO19, 16);
        }
        //[/UserButtonCode_iButton16]
    }
    else if (buttonThatWasClicked == iButton17)
    {
        //[UserButtonCode_iButton17] -- add your button handler code here..
        //[/UserButtonCode_iButton17]
    }
    else if (buttonThatWasClicked == iButton18)
    {
        //[UserButtonCode_iButton18] -- add your button handler code here..
        //[/UserButtonCode_iButton18]
    }
    else if (buttonThatWasClicked == iButton19)
    {
        //[UserButtonCode_iButton19] -- add your button handler code here..
          sendQueue.clear();
          remoteLink->sendDataPacket(msg_42, 7);
          remoteLink->sendDataPacket(msg_44, 7);
          remoteLink->sendDataPacket(msg_45, 7);
          remoteLink->sendDataPacket(msg_46, 7);
          remoteLink->sendDataPacket(msg_47, 7);
          remoteLink->sendDataPacket(msg_4B, 7);
          remoteLink->sendDataPacket(msg_4C, 7);
          remoteLink->sendDataPacket(msg_4D, 7);
          remoteLink->sendDataPacket(msg_4E, 7);
          remoteLink->sendDataPacket(msg_4F, 7);
          remoteLink->sendDataPacket(msg_50, 7);
          remoteLink->sendDataPacket(msg_51, 7);
          remoteLink->sendDataPacket(msg_5B, 7);
          //remoteLink->sendDataPacket(msg_5C, 7);
          remoteLink->sendDataPacket(msg_5E, 7);
          remoteLink->sendDataPacket(msg_5F, 7);
        //[/UserButtonCode_iButton19]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void Rack::handleAsyncUpdate()
{
  /*
     * This is called to handle an event that we triggered from another thread
     * In our case here, the source is most likely the handleIncomingMidiMessage thread
     *
     * We need to check if our message queue has data, and process each message depending on what
     * it is.
     */


  unsigned char msg[33];
  int  loc;
  const uint8 *sysex_data;
  int noBytes, sampPos;
  std::cout << "handleAsyncUpdate Call" << std::endl;

  if(!midiBuffer->isEmpty())
    {
      MidiBuffer::Iterator iter(*midiBuffer);

      std::cout << "handleAsyncUpdate Process NonEmpty Buffer" << std::endl;

      while(iter.getNextEvent(sysex_data, noBytes, sampPos))
        {
          cout.setf(ios::hex, ios::basefield);

          cout << "handleAsyncUpdate Buffer: " << (int)sysex_data[3] << endl;

          // Kurz Version Response
          if(sysex_data[1] == 0x7E && sysex_data[3] == 0x06 && sysex_data[4] == 0x02 && sysex_data[5] == 0x07 && noBytes >= 15)
            {
              std::cout << "handleAsyncUpdate Version Response" << std::endl;
              // This is a Version Response.
              sprintf((char *)msg, "Engine  : %d.%d\nSoftware: %d.%d"
                      , sysex_data[10], sysex_data[11], sysex_data[12], sysex_data[13]);

              labelLCD->setText(String(CharPointer_ASCII((char *)msg)), true);
            }
          // Display Update Request
          else if(sysex_data[1] == 0x07 && sysex_data[3] == 0x64 && sysex_data[4] == 0x02) // Display Response
            {
              memset(msg, 0, sizeof(msg));
              std::cout << "handleAsyncUpdate Display Message of size: " << noBytes << std::endl;

              for(int count = 5, loc = 0; count < noBytes; count++)
                {
                  if(isprint(sysex_data[count]) || sysex_data[count] == 0x0a)
                    {
                      msg[loc] = (unsigned char)sysex_data[count];
                      loc++;
                    }
                }
              labelLCD->setText(String(CharPointer_ASCII((char *)msg)), true);
            }
          else if(sysex_data[1] == 0x07 && remoteLink) // Catch all for all other Kurz Sysex Data
            {


              switch(sysex_data[3])
                {
                case 0x79:
                case 0x7A:
                case 0x7B:
                case 0x7C:
                case 0x7E:
                  cout << "handleAsyncUpdate Sysex Msg: " << (int)sysex_data[3] << " " << noBytes << endl;
                  remoteLink->processMessage(sysex_data, noBytes);
                  break;
                }





              /*
                 * We need to define some small classes to hold the different class types
                 * we will be needing here.
                 * We will need a class to hold session data - what we called the remote ID
                 * The constructor of this class can (should) initiate the connection and then
                 * track it through the various stages
                 *
                 * For each set of objects, we will instantiate one of these classes, and call
                 * it to handle all our incoming data, and to generate more as required.
                 *
                 * So basically
                 * Initiate a Remote Connection: 0x78
                 * Process 0x79 Response and send second remote request
                 * Process 0x7A Response and send third remote request
                 * Process 0x7B Response and Start 0x7C Requests
                 * Process 0x7E Ack and Process and Ack 0x7C Responses
                 *
                 * Each object type will probably need its own class so we can hold specific information
                 * related to that object type.
                 *
                 * We will also need a means to buffer and iterate them all up as we receive them
                 */
            }

        }
      midiBuffer->clear();
    }
}

void Rack::handleIncomingMidiMessage(MidiInput*, const MidiMessage& message)
{
  if(message.isSysEx())
    {
      std::cout << "Received a SYSEX message" << std::endl;
      midiBuffer->addEvent(message, 0);
      this->triggerAsyncUpdate();
    }
  return;
}
void Rack::sendMidiMessage(const MidiMessage& message)
{
  std::cout << "Sending a MIDI message\n";
  midiOutput->sendMessageNow(message);
}

// Send a Keypress event, with an extra Display Request Key added
void Rack::sendSynthKey(int keyID)
{
  if(midiOutput)
    {
      // F0 07 00 64 01 1B ${HEX_CHAN} 1B 7F F7
      uint8 sysex[6] = {0x07, 0x00, 0x64, 0x01, keyID, 0x7F};

      MidiMessage newMsg = MidiMessage::createSysExMessage(sysex, 6);

      std::cout << "Sending a Keypress MIDI message\n";
      midiOutput->sendMessageNow(newMsg);
    }
}

// Send a Version Request Message
void Rack::sendVerReq()
{

  if(midiOutput)
    {
      uint8 sysex_ver[4] = {0x7E, 0x00, 0x06, 0x01};



      char *ptr;
      string msg;

      //msgQueue.clear();
      MidiMessage newMsg = MidiMessage::createSysExMessage(sysex_ver, 4);

      std::cout << "Sending a Version Request MIDI message\n";
      midiOutput->sendMessageNow(newMsg);
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Rack" componentName="Rack"
                 parentClasses="public Component, public AsyncUpdater, public MidiInputCallback"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330000013" fixedSize="0" initialWidth="900"
                 initialHeight="270">
  <BACKGROUND backgroundColour="ff000000"/>
  <LABEL name="new label" id="70cd104284a033ee" memberName="labelLCD"
         virtualName="" explicitFocusOrder="0" pos="32 72 192 40" tooltip="Click here to force a screen refresh"
         bkgCol="ffd8f79d" edTextCol="ff000000" edBkgCol="0" labelText="123456789012345&#10;123456789012345"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="20" bold="1" italic="0"
         justification="9"/>
  <GROUPCOMPONENT name="new group" id="951b5abe0bf6c9c2" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="16 48 224 80" outlinecol="66ffffff"
                  textcol="ffffffff" title="LCD"/>
  <IMAGEBUTTON name="new button" id="ea3cca2dbe9f037a" memberName="iButtonA"
               virtualName="" explicitFocusOrder="0" pos="40 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="f115b36740ffffd" memberName="iButtonB"
               virtualName="" explicitFocusOrder="0" pos="104 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="452b5f7fa97802d9" memberName="iButtonC"
               virtualName="" explicitFocusOrder="0" pos="168 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="33782ac1a60ab994" memberName="iButtonPlay"
               virtualName="" explicitFocusOrder="0" pos="256 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="1c92ed8aa79e21cb" memberName="iButtonMode"
               virtualName="" explicitFocusOrder="0" pos="320 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="6a6b2a485c935bf3" memberName="iButton0"
               virtualName="" explicitFocusOrder="0" pos="256 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="6c8fc92f6bdcfb69" memberName="iButton1"
               virtualName="" explicitFocusOrder="0" pos="320 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="3ebd0660e491c3c6" memberName="iButton2"
               virtualName="" explicitFocusOrder="0" pos="384 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="6dd89e47b15d6778" memberName="iButton3"
               virtualName="" explicitFocusOrder="0" pos="448 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="9e59dc44a7261b8d" memberName="iButton4"
               virtualName="" explicitFocusOrder="0" pos="512 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="f6d16f8ce45714d2" memberName="iButton5"
               virtualName="" explicitFocusOrder="0" pos="576 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="2e1f2a5194ad421c" memberName="iButton6"
               virtualName="" explicitFocusOrder="0" pos="640 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="5220f21fd64d7e5" memberName="iButton7"
               virtualName="" explicitFocusOrder="0" pos="704 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="7991508bfc7b811a" memberName="iButton8"
               virtualName="" explicitFocusOrder="0" pos="768 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="d9732707fca44932" memberName="iButton9"
               virtualName="" explicitFocusOrder="0" pos="832 160 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="e690a11733c79382" memberName="iButtonChanUP"
               virtualName="" explicitFocusOrder="0" pos="392 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUpUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonUpDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="ad93d1a9d4bab3cf" memberName="iButtonChanDN"
               virtualName="" explicitFocusOrder="0" pos="440 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonDnUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDnDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="777000bf837ffc24" memberName="iButtonProgUP"
               virtualName="" explicitFocusOrder="0" pos="520 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUpUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonUpDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="1389c251bf1953e6" memberName="iButtonProgDN"
               virtualName="" explicitFocusOrder="0" pos="568 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonDnUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDnDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="900f17715204ac25" memberName="iButtonValUP"
               virtualName="" explicitFocusOrder="0" pos="648 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUpUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonUpDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="9a4dfdb0041ae534" memberName="iButtonValDN"
               virtualName="" explicitFocusOrder="0" pos="696 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonDnUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDnDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="24da10c062fef97a" memberName="iButtonEnter"
               virtualName="" explicitFocusOrder="0" pos="768 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="6b38225a3ad4818a" memberName="iButtonStore"
               virtualName="" explicitFocusOrder="0" pos="832 16 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="38f8f7b718c8eb93" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="40 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="315a4147e5b3cf50" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="104 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="B" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="b1f85eb0385cb329" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="168 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="C" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c24f46541a447ffd" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="256 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="45d641293d09ce16" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="320 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ae3df0c093b71ea0" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="384 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="b1db92eff064007e" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="448 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="3" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="13125baf29032e5a" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="512 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="4" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="65de09487dabf9fe" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="576 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="5" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cd3016ab20be98e2" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="640 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="6" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="4903301eaf282605" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="704 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="7" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="661ece1e46046cff" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="768 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="8" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1bbf1a803028d257" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="832 128 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="eff383d8f304ed11" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="240 48 60 60" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="PLAY&#10;&#10;EDIT"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="4bc8a31fb3faa58b" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="304 48 60 60" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="MODE&#10;&#10;LAYER"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="5278578f7f18ed89" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="384 48 90 60" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL&#10;&#10;MENU"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cd253cd13341658e" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="512 48 90 60" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="PROGRAM&#10;&#10;PARAMETER"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6d54df5a9f72836d" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="736 48 90 60" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="ENTER&#10;&#10;COMPARE"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="dae531266750e1e" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="816 48 60 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="STORE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="dc35b4dccc9dd508" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="24 16 104 24" textCol="ff1b00ff"
         edTextCol="ff000000" edBkgCol="0" labelText="1200 PRO" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="20" bold="1" italic="1" justification="33"/>
  <LABEL name="new label" id="410bb2745c2e554f" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="128 16 24 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="I" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="20" bold="1" italic="1" justification="33"/>
  <LABEL name="new label" id="51f6f8dfc737caa8" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="640 48 90 60" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="VALUE&#10;&#10;NO       YES"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <TEXTBUTTON name="new button" id="c08bf811c0d9df77" memberName="textButtonOptions"
              virtualName="" explicitFocusOrder="0" pos="160 16 79 24" bgColOff="ffffffff"
              bgColOn="ff6d6d6d" buttonText="Options" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <IMAGEBUTTON name="new button" id="222b6769ac116015" memberName="iButton10"
               virtualName="" explicitFocusOrder="0" pos="256 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="865b727589fc6e65" memberName="iButton11"
               virtualName="" explicitFocusOrder="0" pos="320 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="73f267b6b56b4315" memberName="iButton12"
               virtualName="" explicitFocusOrder="0" pos="384 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="87b94a966850277" memberName="iButton13"
               virtualName="" explicitFocusOrder="0" pos="448 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="9d48e6789aff33d8" memberName="iButton14"
               virtualName="" explicitFocusOrder="0" pos="512 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="8493e7ee0cc1374e" memberName="iButton15"
               virtualName="" explicitFocusOrder="0" pos="576 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="4ddda7e70505d361" memberName="iButton16"
               virtualName="" explicitFocusOrder="0" pos="640 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="681089bc6e82b166" memberName="iButton17"
               virtualName="" explicitFocusOrder="0" pos="704 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="6e2ef07195b1fdba" memberName="iButton18"
               virtualName="" explicitFocusOrder="0" pos="768 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="763356b452e3894c" memberName="iButton19"
               virtualName="" explicitFocusOrder="0" pos="832 208 30 30" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="buttonUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="buttonDn_png"
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="255608ee318ecc14" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="256 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="3f372bf4ce6a9463" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="320 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="B" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a68a5218cab91533" memberName="label26" virtualName=""
         explicitFocusOrder="0" pos="384 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="C" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="655569ac5224f5e4" memberName="label27" virtualName=""
         explicitFocusOrder="0" pos="448 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="D" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="befd9b3ac3861008" memberName="label28" virtualName=""
         explicitFocusOrder="0" pos="512 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="E" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7b088af1f1d93c26" memberName="label29" virtualName=""
         explicitFocusOrder="0" pos="576 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="F" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="989ab026821efc9f" memberName="label30" virtualName=""
         explicitFocusOrder="0" pos="640 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="G" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="203fe6d1a8f88e1f" memberName="label31" virtualName=""
         explicitFocusOrder="0" pos="704 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="H" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="314a526b04b3f73b" memberName="label32" virtualName=""
         explicitFocusOrder="0" pos="768 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="I" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a2e5eea69d36ad2a" memberName="label33" virtualName=""
         explicitFocusOrder="0" pos="832 234 30 30" bkgCol="0" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="J" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: buttonUp_png, 127, "../Images/ButtonUp.png"
static const unsigned char resource_Rack_buttonUp_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,30,0,0,0,30,8,2,0,0,0,180,82,57,245,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,57,73,68,
65,84,72,199,237,204,49,17,0,48,8,0,177,111,15,221,104,194,1,14,208,84,13,29,216,62,2,114,186,155,5,153,25,64,85,109,236,151,53,214,214,214,214,214,214,214,214,214,63,2,152,153,141,250,1,129,106,8,113,
98,72,150,63,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Rack::buttonUp_png = (const char*) resource_Rack_buttonUp_png;
const int Rack::buttonUp_pngSize = 127;

// JUCER_RESOURCE: buttonDn_png, 126, "../Images/ButtonDn.png"
static const unsigned char resource_Rack_buttonDn_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,30,0,0,0,30,8,2,0,0,0,180,82,57,245,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,56,73,68,
65,84,72,199,237,204,49,17,0,48,8,0,177,111,15,69,236,120,64,19,202,171,161,3,219,71,64,78,85,177,96,102,2,200,204,141,253,178,198,218,218,218,218,218,218,218,218,250,71,0,221,189,81,63,15,53,4,3,207,
216,139,168,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Rack::buttonDn_png = (const char*) resource_Rack_buttonDn_png;
const int Rack::buttonDn_pngSize = 126;

// JUCER_RESOURCE: buttonUpUp_png, 203, "../Images/ButtonUpUp.png"
static const unsigned char resource_Rack_buttonUpUp_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,30,0,0,0,30,8,2,0,0,0,180,82,57,245,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,133,73,
68,65,84,72,199,99,220,191,127,63,3,13,64,93,93,29,11,3,3,195,134,13,27,104,97,58,19,3,205,192,224,48,122,235,132,137,91,39,76,28,82,174,134,187,151,120,135,15,180,171,209,92,74,164,195,7,212,213,88,221,
72,140,195,7,206,213,120,92,71,208,225,195,47,163,19,244,50,126,5,3,225,106,34,243,5,30,101,116,119,53,73,133,39,46,197,244,117,53,73,78,198,163,133,142,174,38,195,201,184,52,210,208,213,44,104,124,239,
130,252,209,118,8,13,195,250,220,185,115,180,48,26,0,104,93,46,85,207,89,14,194,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Rack::buttonUpUp_png = (const char*) resource_Rack_buttonUpUp_png;
const int Rack::buttonUpUp_pngSize = 203;

// JUCER_RESOURCE: buttonUpDn_png, 202, "../Images/ButtonUpDn.png"
static const unsigned char resource_Rack_buttonUpDn_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,30,0,0,0,30,8,2,0,0,0,180,82,57,245,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,132,73,
68,65,84,72,199,99,180,181,181,101,160,1,104,106,106,98,97,96,96,48,50,50,162,133,233,76,12,52,3,131,195,232,173,19,38,110,157,48,113,72,185,26,238,94,226,29,62,208,174,70,115,41,145,14,31,80,87,99,117,
35,49,14,31,56,87,227,113,29,65,135,15,191,140,78,208,203,248,21,12,132,171,137,204,23,120,148,209,221,213,36,21,158,184,20,211,215,213,36,57,25,143,22,58,186,154,12,39,227,210,72,67,87,179,160,241,189,
11,242,71,219,33,52,12,235,128,128,0,90,24,13,0,246,25,41,231,55,79,65,196,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Rack::buttonUpDn_png = (const char*) resource_Rack_buttonUpDn_png;
const int Rack::buttonUpDn_pngSize = 202;

// JUCER_RESOURCE: buttonDnUp_png, 205, "../Images/ButtonDnUp.png"
static const unsigned char resource_Rack_buttonDnUp_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,30,0,0,0,30,8,2,0,0,0,180,82,57,245,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,135,73,
68,65,84,72,199,99,220,191,127,63,3,13,64,93,93,29,11,3,3,195,134,13,27,104,97,58,19,3,205,192,208,52,154,5,141,191,117,194,68,178,205,242,46,200,31,160,0,65,179,153,108,39,211,61,26,201,112,56,86,45,
116,79,124,36,57,28,151,226,129,200,50,68,58,28,143,178,1,202,232,4,29,142,95,193,176,44,249,240,120,153,96,112,13,104,128,96,117,29,49,73,115,160,163,17,205,141,68,230,166,65,144,248,224,46,37,190,228,
162,99,181,75,73,190,31,54,237,144,115,231,206,209,194,104,0,239,246,33,147,32,83,109,248,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Rack::buttonDnUp_png = (const char*) resource_Rack_buttonDnUp_png;
const int Rack::buttonDnUp_pngSize = 205;

// JUCER_RESOURCE: buttonDnDn_png, 204, "../Images/ButtonDnDn.png"
static const unsigned char resource_Rack_buttonDnDn_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,30,0,0,0,30,8,2,0,0,0,180,82,57,245,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,134,73,
68,65,84,72,199,99,180,181,181,101,160,1,104,106,106,98,97,96,96,48,50,50,162,133,233,76,12,52,3,67,211,104,22,52,254,214,9,19,201,54,203,187,32,127,128,2,4,205,102,178,157,76,247,104,36,195,225,88,181,
208,61,241,145,228,112,92,138,7,34,203,16,233,112,60,202,6,40,163,19,116,56,126,5,195,178,228,195,227,101,130,193,53,160,1,130,213,117,196,36,205,129,142,70,52,55,18,153,155,6,65,226,131,187,148,248,146,
139,142,213,46,37,249,126,216,180,67,2,2,2,104,97,52,0,125,193,29,37,106,95,64,42,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Rack::buttonDnDn_png = (const char*) resource_Rack_buttonDnDn_png;
const int Rack::buttonDnDn_pngSize = 204;
