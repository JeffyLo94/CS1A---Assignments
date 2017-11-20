/**************************************************************************
 * AUTHOR      : Duncan Bauer && Jeffrey Lo
 * STUDENT ID  : 290722 && 374780
 * LAB #9      : Implementing a Stack
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/23/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
 *
 * FUNCTION
 *_________________________________________________________________________
 *  This function retrieves the name of the input and output files from the
 *  user
 *  - returns nothing ->
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head       : Front of the linked-list - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		head       : Front of the linked-list with the new link - Will be
 * 					 returned to main
 *************************************************************************/
PersonInfo *Push(PersonInfo *head) // CALC - The front of the linked-list
{
	// DECLARATIONS
	// Variables
	PersonInfo *infoPtr; // CALC - Temp pointer used to add a new link to
						 //        the list

	// INITIALIZATIONS
	infoPtr = NULL;

	// Allocates memory to add a new link to the list
	infoPtr = new PersonInfo;
	if(infoPtr != NULL)
	{
		// GetPersonInput prompts the user to enter in the information for
		// the new link
		GetPersonInput(infoPtr);
		// Adds the new link to the front of the list, then updates the
		// head to include the new link
		infoPtr -> next = head;
		head = infoPtr;
		// Allocates memory for infoPtr so that it can be pointed away from
		// the list after the push is complete
		infoPtr = new PersonInfo;
	}
	// Deallocates the unused link and reassigns infoPtr to point away from
	// deallocated memory
	delete infoPtr;
	infoPtr = NULL;

	return head;
}
