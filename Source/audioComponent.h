#ifndef _audioComponent_H_
#define _audioComponent_H_

#include "../JuceLibraryCode/JuceHeader.h"

class audioComponent: public Component
// Here we specify any base classes that
// give this type predefined characteristics.
// Naturally, this is a Component, but we could
// also inherit other qualities. For example, if
// we want to respond to button presses, we can
// inherit 'ButtonListener', by changing it thus:
// e.g.
// public Component,
// public ButtonListener

// (Notice that they're separated by a comma, and nothing comes after the
//  final one in the list - i.e. no semicolon, because the next character
//  must be the '{' denoting the start of the class body).

// We can inherit many different classes from Juce (or classes we make
// ourselves), but be aware that some base classes require you to define
// some function bodies before it will allow your app to compile. These
// functions are called 'pure virtual' functions - an example would be
// 'buttonClicked' in ButtonListener. Some base classes will provide many
// other virtual functions - not just pure virtual ones - which you can
// define if you choose, but you do not have to do so.

    {
private:
    //==============================================================================

    // Here are some members that are useful to have in any application...

    // TooltipWindow tooltipWindow;   // To add tooltips to an application, you
    // just need to create one of these and leave it
    // there to do its work.

    // Your app will obviously have some kind of member variables, and so this
    // is the place you can declare them. For example, if you wanted to have a
    // widget or some component you've made, you'd have a pointer for it here;
    // you'd then instantiate the object in the constructor, and use the pointer
    // to access it elsewhere (e.g. to position it, update it, or respond to it).

    // e.g.
    // TextButton* myButton;
    AudioDeviceSelectorComponent* gAudioSetup;

public:
    //==============================================================================
    audioComponent(AudioDeviceManager &gAudioDevice) :
	    gAudioDevice_(gAudioDevice)
	{
	// This is where the main component is created, so we initialise and
	// configure it according to our needs.

	// One thing that covers is creating any widgets and components we want to
	// display. Also, if any widgets will need responding to, we must hook them up
	// to their listeners here too (and it's likely that this class itself will be
	// the listener in question, providing we've inherited the appropriate class!)

	// Create and add the rest of your components here!
	// e.g.
	//myButton = new TextButton (T("my button"), T("Click me!"));
	//addAndMakeVisible (myButton);
	//button2 = new newButton ();

	//gAudioDevice_.initialise(2, 2, 0, true);
	gAudioSetup = new AudioDeviceSelectorComponent(gAudioDevice_, 0, 0, 0, 0, true, false, false, false);
	addAndMakeVisible(gAudioSetup);
	gAudioSetup->setVisible(true);

	setSize(500, 600);
	gAudioSetup->setSize(getWidth(), getHeight());

	}

    ~audioComponent()
	{
	// Be sure to destroy any objects you've created using 'new' here. If your objects
	// are on the stack (i.e. they were created without pointers or the 'new' operator,
	// then they die automatically. If you've created them
	// manually on the heap (for example, if you've got a pointer and you've created a new
	// object for it) then it must be deleted.

	// However, juce has a nice neat function that will destroy all Components that have
	// been added to a Component...

	deleteAllChildren(); // This will remove all the contained components, and delete
	// the objects for you.
	}

    //==============================================================================
    void resized()
	{
	// This is called whenever this component's size changes. We could respond
	// to this in a number of ways, but the most obvious thing to do is reposition
	// all our widgets, using their 'setBounds()' function.
	// It's nice to position them relative to the size of this Component. That means
	// making use of the 'getWidth()' and 'getHeight()' functions to determine where
	// to put them and how big they should be.

	gAudioSetup->setSize(getWidth(), getHeight());
	}

    void paint(Graphics& g)
	{
	// This does any drawing required on this Component's face. You can simply
	// call functions on the provided Graphics object - although you may want to
	// make use of 'getWidth()' and 'getHeight()' (members of this Component) to
	// make sure you're drawing in the right place!

	//g.drawFittedText(PROJECT_NAME_IDENTIFIER, 0, 0, getWidth(), getHeight(), Justification::centred, 0xFFFFF);
	}

    AudioDeviceManager& gAudioDevice_;

    //==============================================================================
    };

#endif//_audioComponent_H_
