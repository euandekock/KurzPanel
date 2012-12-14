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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MidiList.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MidiList::MidiList (int &inSelection, int &outSelection)
    : Component ("MIDIList"),
      groupComponent (0),
      label (0),
      label2 (0),
      cbOutput (0),
      cbInput (0),
      btOK (0)
{
    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            "MIDI Source"));

    addAndMakeVisible (label = new Label ("new label",
                                          "Input"));
    label->setFont (Font (15.0000f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label2 = new Label ("new label",
                                           "Output"));
    label2->setFont (Font (15.0000f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (cbOutput = new ComboBox ("cbOutput"));
    cbOutput->setEditableText (false);
    cbOutput->setJustificationType (Justification::centredLeft);
    cbOutput->setTextWhenNothingSelected ("(no midi)");
    cbOutput->setTextWhenNoChoicesAvailable ("(no midi found)");
    cbOutput->addListener (this);

    addAndMakeVisible (cbInput = new ComboBox ("cbInput"));
    cbInput->setEditableText (false);
    cbInput->setJustificationType (Justification::centredLeft);
    cbInput->setTextWhenNothingSelected ("(no midi)");
    cbInput->setTextWhenNoChoicesAvailable ("(no midi found)");
    cbInput->addListener (this);

    addAndMakeVisible (btOK = new TextButton ("OK Button"));
    btOK->setButtonText ("OK");
    btOK->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    btOK->addListener (this);
    btOK->setColour (TextButton::buttonColourId, Colour (0xff838383));
    btOK->setColour (TextButton::buttonOnColourId, Colours::white);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (300, 150);


    //[Constructor] You can add your own custom stuff here..
    outSel = &outSelection;
    inSel = &inSelection;

    StringArray output_devlist = MidiOutput::getDevices();
    StringArray input_devlist = MidiInput::getDevices();

    for(int i = 0; i < output_devlist.size(); i++)
        {
        std::cout << "Device [" << i << "] = " << output_devlist[i] << endl;
        cbOutput->addItem(String(output_devlist[i]), i+1);
        if(output_devlist[i].startsWith("USB Midi") && *outSel == 0)
            {
            *outSel = i;
            }
        }
        cbOutput->setSelectedId(*outSel+1);
        cout << "Assigning Default to " << output_devlist[*outSel] << endl;


    for(int i = 0; i < input_devlist.size(); i++)
        {
        std::cout << "Device [" << i << "] = " << input_devlist[i] << "\n";
        cbInput->addItem(String(input_devlist[i]), i+1);
        if(input_devlist[i].startsWith("USB Midi") && *inSel == 0)
            {
            *inSel = i;
            }
        }
        cbInput->setSelectedId(*inSel+1);
        cout << "Assigning Default to " << input_devlist[*inSel] << endl;

        //setVisible (true);
        //runModalLoop();

    //[/Constructor]
}

MidiList::~MidiList()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (groupComponent);
    deleteAndZero (label);
    deleteAndZero (label2);
    deleteAndZero (cbOutput);
    deleteAndZero (cbInput);
    deleteAndZero (btOK);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MidiList::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff6a6a6a));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MidiList::resized()
{
    groupComponent->setBounds (8, 8, 288, 96);
    label->setBounds (24, 32, 100, 24);
    label2->setBounds (24, 64, 100, 24);
    cbOutput->setBounds (136, 64, 150, 24);
    cbInput->setBounds (136, 32, 150, 24);
    btOK->setBounds (154 - ((100) / 2), 112, 100, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MidiList::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == cbOutput)
    {
        //[UserComboBoxCode_cbOutput] -- add your combo box handling code here..
        *outSel = cbOutput->getSelectedId()-1;
        //[/UserComboBoxCode_cbOutput]
    }
    else if (comboBoxThatHasChanged == cbInput)
    {
        //[UserComboBoxCode_cbInput] -- add your combo box handling code here..
        *inSel = cbInput->getSelectedId()-1;
        //[/UserComboBoxCode_cbInput]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MidiList::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == btOK)
    {
        //[UserButtonCode_btOK] -- add your button handler code here..
        //findParentComponentOfClass<MidiList>()->exitModalState(0);
        getParentComponent()->exitModalState(0);
        //this->exitModalState(0);

        //[/UserButtonCode_btOK]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MidiList" componentName="MIDIList"
                 parentClasses="public Component" constructorParams="int &amp;inSelection, int &amp;outSelection"
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330000013" fixedSize="1" initialWidth="300"
                 initialHeight="150">
  <BACKGROUND backgroundColour="ff6a6a6a"/>
  <GROUPCOMPONENT name="new group" id="eef13475870fef2c" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="8 8 288 96" title="MIDI Source"/>
  <LABEL name="new label" id="dd7c7d1af1a896dc" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 32 100 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Input" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="37e2b0c54267ac63" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="24 64 100 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="cbOutput" id="8de2d7f05b08e061" memberName="cbOutput" virtualName=""
            explicitFocusOrder="0" pos="136 64 150 24" editable="0" layout="33"
            items="" textWhenNonSelected="(no midi)" textWhenNoItems="(no midi found)"/>
  <COMBOBOX name="cbInput" id="7a1fd40872a36092" memberName="cbInput" virtualName=""
            explicitFocusOrder="0" pos="136 32 150 24" editable="0" layout="33"
            items="" textWhenNonSelected="(no midi)" textWhenNoItems="(no midi found)"/>
  <TEXTBUTTON name="OK Button" id="718ceab081e6ab80" memberName="btOK" virtualName=""
              explicitFocusOrder="0" pos="154c 112 100 24" bgColOff="ff838383"
              bgColOn="ffffffff" buttonText="OK" connectedEdges="15" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
