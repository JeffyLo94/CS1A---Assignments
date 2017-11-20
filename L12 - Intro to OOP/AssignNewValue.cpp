/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Breanna Nelson
 * STUDENT ID  : 374780     & 272229
 * LAB #12     : Intro to OOP
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/2/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
* FUNCTION AssignNewValue
*--------------------------------------------------------------------------
*	This function Assigns a new value to the user defined node in a user
*	defined list.
* RETURNS: nothing
* -> changes a node
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		listItem   : The list number being changed must be predefined
* 		newValue   : The new value being assigned must be predefined
* 		head	   : The list must be predefined
*
* POST-CONDITIONS
* 		Returns nothing, but changes a node.
**************************************************************************/
AnimalStruct* AssignNewValue(int listItem,      //IN - List number being
												//     changed
				  	  	    float newValue,		//IN - New value being
				  	  	    					//     assigned
				            AnimalStruct* head) //IN - List
{
	// DECLARATIONS
	// Variables
	AnimalStruct* animalPtr;	//CALC - Dynamic pointer to traverse list
	bool          changed;		//CALC - Boolean holding if value changed

	// INITIALIZATIONS
	animalPtr = head;
	changed = false;

	// Processing - loops through list until end or value is changed
	while(!changed && animalPtr != NULL)
	{
		// Processing - changes value of specified animal
		if(listItem == animalPtr->index)
		{
			cout << "Changing "    << animalPtr->someAnimal.GetName()
				 << "\'s value to " << fixed << setprecision(2) << newValue
				 << "...\n\n\n";
			animalPtr->someAnimal.ChangeValue(newValue);
			changed = true;
		}
		else
		{
			// Processing - points to next item in list
			animalPtr = animalPtr->next;
		}
	}

	return head;
}
