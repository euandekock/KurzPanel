/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  23 Sep 2012 1:40:30am

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

#include "KurzLayerTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
KurzLayerTab::KurzLayerTab (KurzLayer &Layr)
    : Component ("Layer Tab"),
      Layer(Layr),
      rowCount(1),
      LayerParam (0)
{
    addAndMakeVisible (LayerParam = new TableListBox());
    LayerParam->setName ("Layer Parameters");


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    // Set the tables Model class to our own class.
    LayerParam->setModel(this);

    // give it a border
    LayerParam->setColour (ListBox::outlineColourId, Colours::grey);
    LayerParam->setOutlineThickness (1);

    // Now we will define our Table Columns:
    // Type, List ID, Size, Location, Name

    LayerParam->getHeader().addColumn("Parameter",    1, 150, 50, 300, TableHeaderComponent::defaultFlags);
    LayerParam->getHeader().addColumn("Value",      2, 50, 50, 300, TableHeaderComponent::defaultFlags);

    LayerParam->getHeader().setSortColumnId (1, true);
    LayerParam->getHeader().setStretchToFitActive (true);

    //font.setHeight(14.0f);
    //[/Constructor]
}

KurzLayerTab::~KurzLayerTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (LayerParam);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void KurzLayerTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void KurzLayerTab::resized()
{
    LayerParam->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
    //[UserResized] Add your own custom resize handling here..
    // position our table with a gap around its edge
    LayerParam->setBoundsInset(BorderSize<int>(8));
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

// This is overloaded from TableListBoxModel, and should fill in the background of the whole row
int KurzLayerTab::getNumRows()
    {
    rowCount = 9;

    if(Layer.LFO[0].lfobID > 0)
        rowCount++;
    if(Layer.LFO[1].lfobID > 0)
        rowCount++;

    return rowCount;
    return 0;
    }

void KurzLayerTab::paintRowBackground(Graphics& g, int /*rowNumber*/, int /*width*/,	int /*height*/, bool rowIsSelected)
    {
    if (rowIsSelected)
        g.fillAll(Colours::lightblue);
    }

// This is overloaded from TableListBoxModel, and must paint any cells that aren't using custom
// components.
void KurzLayerTab::paintCell(Graphics& g, int rowNumber, int columnId, int width, int height,	bool /*rowIsSelected*/)
    {
    //g.setColour(Colours::black.withAlpha(0.2f));
    g.setColour(Colours::black);
    g.setFont(font);

    g.fillRect(width - 1, 0, 1, height);



 switch(rowNumber)
        {
        case 0:
            if(columnId == 1)
                {
                g.drawText(String("Layer ID"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Layer.ldbID), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 1:
            if(columnId == 1)
                {
                g.drawText(String("Layer Size"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Layer.ldbSize), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 2:
            if(columnId == 1)
                {
                g.drawText(String("Layer Key Map"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Layer.ldbKeymap), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 3:
            if(columnId == 1)
                {
                g.drawText(String("Lo Key"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Layer.ldbLokey), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 4:
            if(columnId == 1)
                {
                g.drawText(String("Hi Key"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Layer.ldbHikey), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 5:
            if(columnId == 1)
                {
                g.drawText(String("Transpose"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((int)Layer.ldbTrans), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 6:
            if(columnId == 1)
                {
                g.drawText(String("DeTune"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((int)Layer.ldbDtune), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 7:
            if(columnId == 1)
                {
                g.drawText(String("Delay"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((unsigned int)Layer.ldbDelay), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 8:
            if(columnId == 1)
                {
                g.drawText(String("Volume"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String((int)Layer.ldbVolume), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 9:
            if(columnId == 1)
                {
                g.drawText(String("LFO 1"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String("Enabled"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        case 10:
            if(columnId == 1)
                {
                g.drawText(String("LFO 2"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            else
                {
                g.drawText(String("Enabled"), 2, 0, width - 4, height,
                       Justification::centredLeft, true);
                }
            break;
        }
    /*
    uint8 ldbType;	// = layerType
    uint8 ldbID;
    int   ldbSize;
    uint8 ldbKeymap;	// ID of keymapType object
    uint8 ldbLokey;	// lowest MIDI key #
    uint8 ldbHikey;	// highest MIDI key #
    int8  ldbTrans;	// transpose (+/- semi-tones)
    int8  ldbDtune;	// detune (+/- cents)
    uint8 ldbDelay;	// delay (enum table 23)
    int8  ldbVolume;	// volume adjust (+/-dB)
    int8  ldbStereo;	// stereo position
    uint8 ldbEffect;	// compiled effect ID
    uint8 ldbNLink;	// compiled effect linkage
    uint8 ldbKflags;	// key state flags
    uint8 ldbXflags;	// effects flags
    uint8 ldbEnable;	// enable switch (enum table #1)
    uint8 ldbLegato;	// alt attack switch (enum table #1)
    uint8 ldbVflags;	// velocity trigger stuff
    uint8 ldbDynam;	// dynamic range (dB)
    int8  ldbKeyTilt;	// amplitude tilt (+/-dB)
    uint8 ldbBalCtl;	// balance control (enum table #1)
    int8  ldbSpRange;	// soft pedal range (+/-dB)
    int8  ldbPwRange;	// pitch wheel range (+/- quarter-tones)
    uint8 ldbLastOut;	// used by compiled effects
    */
    }
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="KurzLayerTab" componentName="Layer Tab"
                 parentClasses="public Component, public TableListBoxModel" constructorParams="KurzLayer &amp;Layr"
                 variableInitialisers="Layer(Layr)" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330000013" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GENERICCOMPONENT name="Layer Parameters" id="91a8e377aa85cc08" memberName="LayerParam"
                    virtualName="" explicitFocusOrder="0" pos="0 0 100% 100%" class="TableListBox"
                    params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
