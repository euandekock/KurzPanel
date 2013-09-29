/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_EB50EF9FAF097FF2__
#define __JUCE_HEADER_EB50EF9FAF097FF2__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "audioComponent.h"
#include "MidiList.h"
#include "k_dir.h"
#include "kurz_connection.h"
#include "kurz_view_lfo_shape.h" //Temporary won't be needed eventually.

#include "k_showdirlist.h"
#include "testKnob.h"


//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Rack  : public Component,
              public AsyncUpdater,
              public MidiInputCallback,
              public ButtonListener
{
public:
    //==============================================================================
    Rack ();
    ~Rack();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void handleAsyncUpdate();
    void handleIncomingMidiMessage(MidiInput* source, const MidiMessage& message);
    void sendMidiMessage(const MidiMessage& message);
    void sendSynthKey(int KeyID);
    void sendVerReq();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* buttonUp_png;
    static const int buttonUp_pngSize;
    static const char* buttonDn_png;
    static const int buttonDn_pngSize;
    static const char* buttonUpUp_png;
    static const int buttonUpUp_pngSize;
    static const char* buttonUpDn_png;
    static const int buttonUpDn_pngSize;
    static const char* buttonDnUp_png;
    static const int buttonDnUp_pngSize;
    static const char* buttonDnDn_png;
    static const int buttonDnDn_pngSize;
    static const char* buttonDnS_png;
    static const int buttonDnS_pngSize;
    static const char* buttonUpS_png;
    static const int buttonUpS_pngSize;
    static const char* optButtDn_png;
    static const int optButtDn_pngSize;
    static const char* optButtUp_png;
    static const int optButtUp_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioDeviceManager gAudioDevice;
    audioComponent      *audioComp;

    MidiOutput *midiOutput;
    MidiInput *midiInput;
    MidiBuffer *midiBuffer;
    KurzConnection *remoteLink;
    KurzDir progDir;
    deque<string> sendQueue;

    const static uint8 msg_42[7];
    const static uint8 msg_44[7];
    const static uint8 msg_45[7];
    const static uint8 msg_46[7];
    const static uint8 msg_47[7];
    const static uint8 msg_4B[7];
    const static uint8 msg_4C[7];
    const static uint8 msg_4D[7];
    const static uint8 msg_4E[7];
    const static uint8 msg_4F[7];
    const static uint8 msg_50[7];
    const static uint8 msg_51[7];
    const static uint8 msg_5B[7];
    const static uint8 msg_5C[7];
    const static uint8 msg_5E[7];
    const static uint8 msg_5F[7];

    const static uint8 msg_LFO1[16];
    const static uint8 msg_LFO2[16];
    const static uint8 msg_LFO5[16];
    const static uint8 msg_LFO15[16];
    const static uint8 msg_LFO19[16];
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> labelLCD;
    ScopedPointer<GroupComponent> groupComponent;
    ScopedPointer<ImageButton> iButtonA;
    ScopedPointer<ImageButton> iButtonB;
    ScopedPointer<ImageButton> iButtonC;
    ScopedPointer<ImageButton> iButtonPlay;
    ScopedPointer<ImageButton> iButtonMode;
    ScopedPointer<ImageButton> iButton0;
    ScopedPointer<ImageButton> iButton1;
    ScopedPointer<ImageButton> iButton2;
    ScopedPointer<ImageButton> iButton3;
    ScopedPointer<ImageButton> iButton4;
    ScopedPointer<ImageButton> iButton5;
    ScopedPointer<ImageButton> iButton6;
    ScopedPointer<ImageButton> iButton7;
    ScopedPointer<ImageButton> iButton8;
    ScopedPointer<ImageButton> iButton9;
    ScopedPointer<ImageButton> iButtonChanUP;
    ScopedPointer<ImageButton> iButtonChanDN;
    ScopedPointer<ImageButton> iButtonProgUP;
    ScopedPointer<ImageButton> iButtonProgDN;
    ScopedPointer<ImageButton> iButtonValUP;
    ScopedPointer<ImageButton> iButtonValDN;
    ScopedPointer<ImageButton> iButtonEnter;
    ScopedPointer<ImageButton> iButtonStore;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label7;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<Label> label10;
    ScopedPointer<Label> label11;
    ScopedPointer<Label> label12;
    ScopedPointer<Label> label13;
    ScopedPointer<Label> label14;
    ScopedPointer<Label> label15;
    ScopedPointer<Label> label16;
    ScopedPointer<Label> label17;
    ScopedPointer<Label> label18;
    ScopedPointer<Label> label19;
    ScopedPointer<Label> label20;
    ScopedPointer<Label> label21;
    ScopedPointer<Label> label22;
    ScopedPointer<Label> label23;
    ScopedPointer<ImageButton> iButton10;
    ScopedPointer<ImageButton> iButton11;
    ScopedPointer<ImageButton> iButton12;
    ScopedPointer<ImageButton> iButton13;
    ScopedPointer<ImageButton> iButton14;
    ScopedPointer<ImageButton> iButton15;
    ScopedPointer<ImageButton> iButton16;
    ScopedPointer<ImageButton> iButton17;
    ScopedPointer<ImageButton> iButton18;
    ScopedPointer<ImageButton> iButton19;
    ScopedPointer<Label> label24;
    ScopedPointer<Label> label25;
    ScopedPointer<Label> label26;
    ScopedPointer<Label> label27;
    ScopedPointer<Label> label28;
    ScopedPointer<Label> label29;
    ScopedPointer<Label> label30;
    ScopedPointer<Label> label31;
    ScopedPointer<Label> label32;
    ScopedPointer<Label> label33;
    ScopedPointer<ImageButton> iButtonChanDD;
    ScopedPointer<ImageButton> iButtonProgDD;
    ScopedPointer<ImageButton> iButtonValDD;
    ScopedPointer<ImageButton> iButtonLoad;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Rack)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_EB50EF9FAF097FF2__
