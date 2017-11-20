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
* FUNCTION AssignNewAge
*--------------------------------------------------------------------------
*	This function Assigns a new age to the user defined node in a user
*	defined list.
* RETURNS: nothing
* -> changes a node
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		listItem   : The list number being changed must be predefined
* 		newAge	   : The new age being assigned must be predefined
* 		head	   : The list must be predefined
*
* POST-CONDITIONS
* 		Returns nothing, but changes a node.
**************************************************************************/
AnimalStruct* AssignNewAge(int listItem,       //IN - List number being
											   //     changed
						   int newAge,		   //IN - New age being assigned
						   AnimalStruct* head) //IN - List
{
	// DECLARATIONS
	// Variables
	AnimalStruct* animalPtr;  //CALC - Dynamic pointer to traverse list
	bool          changed;	  //CALC - Boolean determining if age has been
							  //       changed

	// INITIALIZATIONS
	animalPtr = head;
	changed = false;

	// Processing - goes through list until item is changed or list changed
	while(!changed && animalPtr != NULL)
	{
		// Processing - Changes the age of the specified animal object
		if(listItem == animalPtr->index)
		{
			cout << "Changing "    << animalPtr->someAnimal.GetName()
				 << "\'s age to " << newAge << "...\n\n\n";
			animalPtr->someAnimal.ChangeAge(newAge);
			changed = true;
		}
		else
		{
			animalPtr = animalPtr->next;
		}
	}

	return head;
}
