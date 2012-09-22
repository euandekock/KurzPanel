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
    g.setColour(Colours::black.withAlpha(0.2f));
    g.fillRect(width - 1, 0, 1, height);
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
