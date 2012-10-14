/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  14 Oct 2012 10:59:14pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_RACK_RACK_D8D57F44__
#define __JUCER_HEADER_RACK_RACK_D8D57F44__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "audioComponent.h"
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
    Label* labelLCD;
    GroupComponent* groupComponent;
    ImageButton* iButtonA;
    ImageButton* iButtonB;
    ImageButton* iButtonC;
    ImageButton* iButtonPlay;
    ImageButton* iButtonMode;
    ImageButton* iButton0;
    ImageButton* iButton1;
    ImageButton* iButton2;
    ImageButton* iButton3;
    ImageButton* iButton4;
    ImageButton* iButton5;
    ImageButton* iButton6;
    ImageButton* iButton7;
    ImageButton* iButton8;
    ImageButton* iButton9;
    ImageButton* iButtonChanUP;
    ImageButton* iButtonChanDN;
    ImageButton* iButtonProgUP;
    ImageButton* iButtonProgDN;
    ImageButton* iButtonValUP;
    ImageButton* iButtonValDN;
    ImageButton* iButtonEnter;
    ImageButton* iButtonStore;
    Label* label2;
    Label* label3;
    Label* label4;
    Label* label5;
    Label* label6;
    Label* label7;
    Label* label8;
    Label* label9;
    Label* label10;
    Label* label11;
    Label* label12;
    Label* label13;
    Label* label14;
    Label* label15;
    Label* label16;
    Label* label17;
    Label* label18;
    Label* label19;
    Label* label20;
    Label* label21;
    Label* label22;
    Label* label23;
    ImageButton* iButton10;
    ImageButton* iButton11;
    ImageButton* iButton12;
    ImageButton* iButton13;
    ImageButton* iButton14;
    ImageButton* iButton15;
    ImageButton* iButton16;
    ImageButton* iButton17;
    ImageButton* iButton18;
    ImageButton* iButton19;
    Label* label24;
    Label* label25;
    Label* label26;
    Label* label27;
    Label* label28;
    Label* label29;
    Label* label30;
    Label* label31;
    Label* label32;
    Label* label33;
    ImageButton* iButtonChanDD;
    ImageButton* iButtonProgDD;
    ImageButton* iButtonValDD;
    ImageButton* iButtonLoad;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Rack);
};


#endif   // __JUCER_HEADER_RACK_RACK_D8D57F44__
