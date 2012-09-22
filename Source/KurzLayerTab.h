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

#ifndef __JUCER_HEADER_KURZLAYERTAB_KURZLAYERTAB_772783D8__
#define __JUCER_HEADER_KURZLAYERTAB_KURZLAYERTAB_772783D8__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
#include "k_layer.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class KurzLayerTab  : public Component,
                      public TableListBoxModel
{
public:
    //==============================================================================
    KurzLayerTab (KurzLayer &Layr);
    ~KurzLayerTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    // TableListBoxModel Virtual Overrides
    int getNumRows();
    void paintRowBackground(juce::Graphics&, int, int, int, bool);
    void paintCell(juce::Graphics&, int, int, int, int, bool);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    KurzLayer &Layer;
    //[/UserVariables]

    //==============================================================================
    TableListBox* LayerParam;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KurzLayerTab);
};


#endif   // __JUCER_HEADER_KURZLAYERTAB_KURZLAYERTAB_772783D8__
