/*
 ==============================================================================

 This file was auto-generated!

 It contains the basic outline for a simple desktop window.

 ==============================================================================
 */
#include "MainWindow.h"
#include "Rack.h"

Rack *rack;

//==============================================================================
MainAppWindow::MainAppWindow() :
	DocumentWindow(JUCEApplication::getInstance()->getApplicationName(),
		Colours::lightgrey, DocumentWindow::allButtons)
    {


    rack = new Rack;

    setContentComponentSize(rack->getWidth(), rack->getHeight());

    rack->setBounds(getWidth() - rack->getWidth(),
	    getHeight() - rack->getHeight(), rack->getWidth(),
	    rack->getHeight());

    setContentOwned(rack, true);

    setUsingNativeTitleBar(true);

    setVisible(true);
    }

MainAppWindow::~MainAppWindow()
    {
    std::cout << "Deleting Rack..." << std::endl;
    delete rack;
    std::cout << "Rack Deleted..." << std::endl;
    }

void MainAppWindow::closeButtonPressed()
    {
    std::cout << "Request Quit..." << std::endl;
    JUCEApplication::getInstance()->systemRequestedQuit();
    }
