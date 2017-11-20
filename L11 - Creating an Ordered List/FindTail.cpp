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
* FUNCTION FindTail
*--------------------------------------------------------------------------
*	This function finds the tail of the list and returns it
* RETURNS: Tail of a list
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head	   : The head of the list must be predefined
*
* POST-CONDITIONS
* 		Returns tail of list
**************************************************************************/
PersonInfo* FindTail(PersonInfo* head)
{
	// DECLARATIONS
	// Variables
	PersonInfo* tail;
	PersonInfo* perPtr;
	bool		found;

	// INITIALIZATIONS
	perPtr = head;
	found = false;

	// Processing - searches through string until reaches end or finds tail
	while(!found && perPtr != NULL)
	{
		// Processing - Assigns the node to tail pointer
		if(perPtr->next == NULL)
		{
			tail = perPtr;
			found = true;
		}
		else
		{
			perPtr = perPtr->next;
		}
	}

	return tail;
}
