/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  22 Jul 2012 1:20:44am

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

#include "kurz_view_lfo_shape.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
KurzViewLFOShape::KurzViewLFOShape (vector<int16> &wave)
    : LFOShape(wave)
    {

    //[UserPreSize]
    //[/UserPreSize]

    setSize (512, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
    }

KurzViewLFOShape::~KurzViewLFOShape()
    {
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
    }

//==============================================================================
void KurzViewLFOShape::paint (Graphics& g)
    {
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff00007f));

    //[UserPaint] Add your own custom painting code here..
    vector<int16>::iterator i;

    uint16 count = 0;
    int16 start = 0;

    Path crossHair;

    crossHair.startNewSubPath(0.0f, 200.0f);
    crossHair.lineTo(512.0f, 200.0f);

    crossHair.startNewSubPath(256.0f, 0.0f);
    crossHair.lineTo(256.0f, 400.0f);

    i = LFOShape.begin();
    start = *i;

    Path waveLine;
    waveLine.startNewSubPath(0.0f, (float)(*i / 200) + 200);

    while(i != LFOShape.end())
        {
        waveLine.lineTo(2*(count++), (float)(*i / 200) + 200);
        i++;
        }
    // Tidy up by drawing to the start Y location
    waveLine.lineTo(2*(count), (float)(start / 200) + 200);

    //    myPath.startNewSubPath (10.0f, 10.0f);          // move the current position to (10, 10)
    //    myPath.lineTo (100.0f, 200.0f);                 // draw a line from here to (100, 200)
    //    myPath.quadraticTo (0.0f, 150.0f, 5.0f, 50.0f); // draw a curve that ends at (5, 50)
    //    myPath.closeSubPath();                          // close the subpath with a line back to (10, 10)

    // add an ellipse as well, which will form a second sub-path within the path..
    //myPath.addEllipse (50.0f, 50.0f, 40.0f, 30.0f);

    // double the width of the whole thing..
    //myPath.applyTransform (AffineTransform::scale (2.0f, 1.0f));

    // and draw it to a graphics context with a 5-pixel thick outline.
    Rectangle<int> size;
    size = g.getClipBounds();

    crossHair.applyTransform (AffineTransform::scale((float)size.getWidth()/512, (float)size.getHeight()/400));

    g.setColour(Colours::cornflowerblue);
    g.strokePath (crossHair, PathStrokeType (1.0f));

    waveLine.applyTransform (AffineTransform::scale((float)size.getWidth()/512, (float)size.getHeight()/400));

    g.setColour(Colours::yellow);
    g.strokePath (waveLine, PathStrokeType (2.0f));

    //[/UserPaint]
    }

void KurzViewLFOShape::resized()
    {
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
    }



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="KurzViewLFOShape" componentName=""
                 parentClasses="public Component" constructorParams="vector&lt;int16&gt; &amp;wave"
                 variableInitialisers="LFOShape(wave)" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330000013" fixedSize="0" initialWidth="512"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff00007f"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
