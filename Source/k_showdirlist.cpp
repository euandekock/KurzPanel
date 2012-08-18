/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  18 Aug 2012 5:55:41pm

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

#include "k_showdirlist.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
k_ShowDirList::k_ShowDirList (KurzDirList *listQ)
  : internalQ(listQ),
    DirTableList (0)
{
  addAndMakeVisible (DirTableList = new TableListBox());
  DirTableList->setName (L"List of Directory Items");


  //[UserPreSize]
  //[/UserPreSize]

  setSize (600, 400);


  //[Constructor] You can add your own custom stuff here..

  // Set the tables Model class to our own class.
  DirTableList->setModel(this);

  // give it a border
  DirTableList->setColour (ListBox::outlineColourId, Colours::grey);
  DirTableList->setOutlineThickness (1);

  // Now we will define our Table Columns:
  // Type, List ID, Size, Location, Name

  DirTableList->getHeader().addColumn("Type",    1, 150, 50, 150, TableHeaderComponent::defaultFlags);
  DirTableList->getHeader().addColumn("ID",      2, 50, 50, 50, TableHeaderComponent::defaultFlags);
  DirTableList->getHeader().addColumn("Size",    3, 50, 50, 50, TableHeaderComponent::defaultFlags);
  DirTableList->getHeader().addColumn("Source",  4, 50, 50, 50, TableHeaderComponent::defaultFlags);
  DirTableList->getHeader().addColumn("Name",    5, 250, 200, 400, TableHeaderComponent::defaultFlags);

  DirTableList->getHeader().setSortColumnId (1, true);
  DirTableList->getHeader().setStretchToFitActive (true);

  font.setHeight(14.0f);


  //[/Constructor]
}

k_ShowDirList::~k_ShowDirList()
{
  //[Destructor_pre]. You can add your own custom destruction code here..
  //[/Destructor_pre]

  deleteAndZero (DirTableList);


  //[Destructor]. You can add your own custom destruction code here..
  //[/Destructor]
}

//==============================================================================
void k_ShowDirList::paint (Graphics& g)
{
  //[UserPrePaint] Add your own custom painting code here..
  //[/UserPrePaint]

  g.fillAll (Colours::white);

  //[UserPaint] Add your own custom painting code here..
  //[/UserPaint]
}

void k_ShowDirList::resized()
{
  DirTableList->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
  //[UserResized] Add your own custom resize handling here..

  // position our table with a gap around its edge
  DirTableList->setBoundsInset(BorderSize<int>(8));
  //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

/*
 * TableListBoxModel virtual overrides here...
 */
int k_ShowDirList::getNumRows()
{
  return internalQ->List.size();
}

// This is overloaded from TableListBoxModel, and should fill in the background of the whole row
void k_ShowDirList::paintRowBackground(Graphics& g, int /*rowNumber*/, int /*width*/,	int /*height*/, bool rowIsSelected)
{
  if (rowIsSelected)
    g.fillAll(Colours::lightblue);
}

// This is overloaded from TableListBoxModel, and must paint any cells that aren't using custom
// components.
void k_ShowDirList::paintCell(Graphics& g, int rowNumber, int columnId, int width, int height,	bool /*rowIsSelected*/)
{
  /*
    Here we create a Reference to a value pointed to by the pointer.
    This allows us to user the operator[] parameters directly.

    vector<KurzDirEntry> &intQRef = *internalQ;
    KurzDirEntry entry = intQRef[rowNumber];

    Another way to do this...
    KurzDirEntry entry = (*internalQ)[rowNumber];
    */

  String str;
  KurzDirEntry entry = internalQ->List[rowNumber];

  g.setColour(Colours::black);
  g.setFont(font);

  if (rowNumber >= 0)
    {
      switch (columnId)
        {
        case 1:
          str = String(entry.getTypeName().c_str());

          g.drawText(str, 2, 0, width - 4, height,
                     Justification::centredLeft, true);
          break;
        case 2:
          str = String(entry.ID);
          g.drawText(str, 2, 0, width - 4, height,
                     Justification::centredLeft, true);
          break;
        case 3:
          str = String(entry.Size);
          g.drawText(str, 2, 0, width - 4, height,
                     Justification::centredLeft, true);
          break;
        case 4:
          g.drawText(String(entry.Zone.c_str()), 2, 0, width - 4, height,
                     Justification::centredLeft, true);
          break;
        case 5:
          g.drawText(String(entry.Name.c_str()), 2, 0, width - 4, height,
                     Justification::centredLeft, true);
          break;

        }

    }

  g.setColour(Colours::black.withAlpha(0.2f));
  g.fillRect(width - 1, 0, 1, height);
}

// Sort compare routine
// This must implement strict weak ordering in order to work properly.
bool k_ShowDirList::compareKL(const KurzDirEntry &a, const KurzDirEntry &b)
{
  bool cmp;

  switch (a.sortCol)
    {
    case 1:
      if (a.sortDir == true)
        return a.Type < b.Type;
      else
        return b.Type < a.Type;
      break;
    case 2:
      if (a.sortDir == true)
        return a.ID < b.ID;
      else
        return b.ID < a.ID;
      break;
    case 3:
      if (a.sortDir == true)
        return a.Size < b.Size;
      else
        return b.Size < a.Size;
      break;
    case 4:
      if (a.sortDir == true)
        return a.Zone < b.Zone;
      else
        return b.Zone < a.Zone;
      break;
    case 5:
      if (a.sortDir == true)
        return a.Name < b.Name;
      else
        return b.Name < a.Name;
      break;
    default:
      if (a.sortDir == true)
        return a.Type < b.Type;
      else
        return b.Type < a.Type;
      break;
    }
  return true;

}

// This is overloaded from TableListBoxModel, and tells us that the user has clicked a table header
// to change the sort order.
void k_ShowDirList::sortOrderChanged(int newSortColumnId, bool isForwards)
{
  if (newSortColumnId != 0)
    {
      // Actually Sort our vector of data here

      KurzDirEntry::sortCol = newSortColumnId;
      KurzDirEntry::sortDir = isForwards;

      stable_sort(internalQ->List.begin(), internalQ->List.end(), k_ShowDirList::compareKL);

      DirTableList->updateContent();
    }
}

void k_ShowDirList::cellDoubleClicked(int rowNumber, int columnId, const MouseEvent &e)
{
//if(internalQ->List[rowNumber].Type = shapeType)
if(internalQ->Type = shapeType)
	{
	KurzLFOShapeList *lfoDir = (KurzLFOShapeList *)internalQ;

	uint8 ID = lfoDir->List[rowNumber].ID;

	if(lfoDir->getItemStatus(rowNumber, 1) == KurzDirEntry::KITEM_FULL)
		{
		map<uint8, KurzLFOShape>::iterator i;

		i = lfoDir->LFOShapes.find(ID);

		if(i != lfoDir->LFOShapes.end())
			{
			KurzLFOShape &shape = i->second;
			KurzViewLFOShape *LFOView = new KurzViewLFOShape(shape.vectWave);
			DialogWindow::showModalDialog(String(lfoDir->List[rowNumber].Name.c_str()), LFOView, LFOView, Colours::black, false, true, true);
			delete LFOView;
			}
		}
	}

  //internalQ->ShowItem(rowNumber);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="k_ShowDirList" componentName=""
                 parentClasses="public Component, public TableListBoxModel" constructorParams="KurzDirList *listQ"
                 variableInitialisers="internalQ(listQ)" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330000013" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GENERICCOMPONENT name="List of Directory Items" id="17ee00feb7104e06" memberName="DirTableList"
                    virtualName="" explicitFocusOrder="0" pos="0 0 100% 100%" class="TableListBox"
                    params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
