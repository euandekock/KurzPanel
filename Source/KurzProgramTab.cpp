/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  23 Sep 2012 2:26:08am

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

#include "KurzProgramTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
KurzProgramTab::KurzProgramTab (KurzProgram &Prog)
    : Component ("Program Tab"),
      Program(Prog), rowCount(1),
      ProgramParam (0)
{
    addAndMakeVisible (ProgramParam = new TableListBox());
    ProgramParam->setName ("Program Parameters");


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    // Set the tables Model class to our own class.
    ProgramParam->setModel(this);

    // give it a border
    ProgramParam->setColour (ListBox::outlineColourId, Colours::grey);
    ProgramParam->setOutlineThickness (1);

    // Now we will define our Table Columns:
    // Type, List ID, Size, Location, Name

    ProgramParam->getHeader().addColumn("Parameter",    1, 150, 50, 300, TableHeaderComponent::defaultFlags);
    ProgramParam->getHeader().addColumn("Value",      2, 50, 50, 300, TableHeaderComponent::defaultFlags);

    ProgramParam->getHeader().setSortColumnId (1, true);
    ProgramParam->getHeader().setStretchToFitActive (true);

    //font.setHeight(14.0f);
    //[/Constructor]
}

KurzProgramTab::~KurzProgramTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (ProgramParam);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void KurzProgramTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void KurzProgramTab::resized()
{
    ProgramParam->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
    //[UserResized] Add your own custom resize handling here..
    // position our table with a gap around its edge
    ProgramParam->setBoundsInset(BorderSize<int>(8));
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

// This is overloaded from TableListBoxModel, and should fill in the background of the whole row
int KurzProgramTab::getNumRows()
    {
    rowCount = 6;

    if(Program.LFO[0].lfobID > 0)
        rowCount++;
    if(Program.LFO[1].lfobID > 0)
        rowCount++;

    return rowCount;
    }

void KurzProgramTab::paintRowBackground(Graphics& g, int /*rowNumber*/, int /*width*/,	int /*height*/, bool rowIsSelected)
    {
    if (rowIsSelected)
        g.fillAll(Colours::lightblue);
    }

// This is overloaded from TableListBoxModel, and must paint any cells that aren't using custom
// components.
void KurzProgramTab::paintCell(Graphics& g, int rowNumber, int columnId, int width, int height,	bool /*rowIsSelected*/)
    {
    g.setColour(Colours::black.withAlpha(0.2f));
    g.fillRect(width - 1, 0, 1, height);

    /*
    string programName;
    uint8 programID;
    uint  programSize;
    uint8 outputProg;
    uint8 stealing;
    uint8 polyLimit;

    KurzLFOBlock LFO[2];
    */

 switch(rowNumber)
        {
        case 0:
            if(columnId == 1)
                {
                g.drawText(String("Program Name"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String(Program.programName.c_str()), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 1:
            if(columnId == 1)
                {
                g.drawText(String("Program ID"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Program.programID), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 2:
            if(columnId == 1)
                {
                g.drawText(String("Program Size"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Program.programSize), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 3:
            if(columnId == 1)
                {
                g.drawText(String("MIDI Program"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Program.outputProg), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 4:
            if(columnId == 1)
                {
                g.drawText(String("Stealing Option"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Program.stealing), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 5:
            if(columnId == 1)
                {
                g.drawText(String("Poly Limit"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Program.polyLimit), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 6:
            if(columnId == 1)
                {
                g.drawText(String("Global LFO 1"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String("Enabled"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 7:
            if(columnId == 1)
                {
                g.drawText(String("Global LFO 2"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String("Enabled"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        }


    }
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="KurzProgramTab" componentName="Program Tab"
                 parentClasses="public Component, public TableListBoxModel" constructorParams="KurzProgram &amp;Prog"
                 variableInitialisers="Program(Prog), rowCount(1)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GENERICCOMPONENT name="Program Parameters" id="91a8e377aa85cc08" memberName="ProgramParam"
                    virtualName="" explicitFocusOrder="0" pos="0 0 100% 100%" class="TableListBox"
                    params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
