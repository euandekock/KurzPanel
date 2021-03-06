/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  13 Oct 2012 1:09:01am

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

#include "KurzShowProgram.h"
#include "KurzProgramTab1.h"
#include "KurzLayerTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
KurzShowProgram::KurzShowProgram (KurzProgram &Prog, KurzDir &DirObj)
    : Component ("KurzShowProgram"),
      Program(Prog), Dir(DirObj),
      tabbedComponent (0)
{
    addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtTop));
    tabbedComponent->setTabBarDepth (30);
    tabbedComponent->addTab ("Program", Colours::darkgrey, new KurzProgramTab (Dir, Program), true);
    tabbedComponent->addTab ("Layer 1", Colours::darkgrey, new KurzLayerTab (Program.Layer[0]), true);
    tabbedComponent->setCurrentTabIndex (0);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (410, 500);


    //[Constructor] You can add your own custom stuff here..

    if(Program.Layer[1].ldbID > 0)
        {
        tabbedComponent->addTab ("Layer 2", Colours::darkgrey, new KurzLayerTab (Program.Layer[1]), true);
        }
    if(Program.Layer[2].ldbID > 0)
        {
        tabbedComponent->addTab ("Layer 3", Colours::darkgrey, new KurzLayerTab (Program.Layer[2]), true);
        }
    if(Program.Layer[3].ldbID > 0)
        {
        tabbedComponent->addTab ("Layer 4", Colours::darkgrey, new KurzLayerTab (Program.Layer[3]), true);
        }

    tabbedComponent->setCurrentTabIndex (0);
    /*
    // Check which Layers are valid, and remove unwanted ones.
    if(Program.Layer[3].ldbID <= 0)
        {
        tabbedComponent->removeTab(4);
        }
    if(Program.Layer[2].ldbID <= 0)
        {
        tabbedComponent->removeTab(3);
        }
    if(Program.Layer[1].ldbID <= 0)
        {
        tabbedComponent->removeTab(2);
        }
    if(Program.Layer[0].ldbID <= 0)
        {
        tabbedComponent->removeTab(1);
        }
        */
    //[/Constructor]
}

KurzShowProgram::~KurzShowProgram()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (tabbedComponent);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void KurzShowProgram::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::grey);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void KurzShowProgram::resized()
{
    tabbedComponent->setBounds (0, 0, proportionOfWidth (1.0405f), proportionOfHeight (1.0000f));
    //[UserResized] Add your own custom resize handling here..
    tabbedComponent->setBoundsInset(BorderSize<int>(2));
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="KurzShowProgram" componentName="KurzShowProgram"
                 parentClasses="public Component" constructorParams="KurzProgram &amp;Prog, KurzDir &amp;DirObj"
                 variableInitialisers="Program(Prog), Dir(DirObj)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="410" initialHeight="500">
  <BACKGROUND backgroundColour="ff808080"/>
  <TABBEDCOMPONENT name="new tabbed component" id="e34e18e6e5304a7f" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="0 0 104.053% 100%"
                   orientation="top" tabBarDepth="30" initialTab="0">
    <TAB name="Program" colour="ff555555" useJucerComp="1" contentClassName="TableListBox"
         constructorParams="Dir, Program" jucerComponentFile="KurzProgramTab1.cpp"/>
    <TAB name="Layer 1" colour="ff555555" useJucerComp="1" contentClassName=""
         constructorParams="Program.Layer[0]" jucerComponentFile="KurzLayerTab.cpp"/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
