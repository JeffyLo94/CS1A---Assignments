/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Sem Diaz
 * STUDENT ID  : 374780     & 374640
 * LAB #11     : Creating an Ordered List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/30/14
 *************************************************************************/

#include "Header.h"
/**************************************************************************
* FUNCTION SearchName
*--------------------------------------------------------------------------
*	This function performs a search through the linked list that is passed
*	in and finds the string that is passed in. The found node is returned.
* RETURNS: Found Node
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head   		: The start of the list must be predefined
* 		keyName		: The string being searched for must be predefined
*
* POST-CONDITIONS
* 		This function returns the Person node with the information.
**************************************************************************/
PersonInfo* SearchName(PersonInfo* head, //IN - Start of list
					   string keyName)	 //IN - String being searched for
{
	// DECLARATIONS

	// Variables
	PersonInfo* perPtr;  //CALC&OUT - dynamic variable
	bool		found;   //CALC     - boolean to determine if name is found

	// INITIALIZATIONS
	found  = false;
	perPtr = head;

	cout << "\nSearching for " << keyName << "...\n";

	// Processing - finds name
	while(!found && perPtr != NULL)
	{
		if(perPtr->name == keyName)
		{
			found = true;
		}
		else
		{
			perPtr = perPtr->next;
		}
	}

	return perPtr;
}
