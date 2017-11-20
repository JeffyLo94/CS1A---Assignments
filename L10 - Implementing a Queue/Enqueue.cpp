/**************************************************************************
 * AUTHOR      : Jeffrey Lo && Owen Mack
 * STUDENT ID  : 374780     && 112325
 * LAB #10     : Implementing a Queue
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/25/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
*
* FUNCTION Enqueue
*__________________________________________________________________________
*  This function inputs one node into the queue
*  - returns the head and tail ->
*__________________________________________________________________________
* PRE-CONDITIONS
*		head       : the start of the list must be predefined
*		tail       : the end of the list must be predefined
*
* POST-CONDITIONS
* 		Head and tail are returned and a new PersonInfo node is added
* 		to the list.
**************************************************************************/
void Enqueue(PersonInfo *&head,  //IN & OUT - points to start of list
			 PersonInfo *&tail) //IN & OUT - points to end of list
{
	// DECLARATIONS
	// Variables
	PersonInfo *perPtr;       //CALC - temporary pointer for node

	// INITIALIZATIONS
	perPtr = new PersonInfo;

	// Processing - if not empty adds person to tail, else adds person head
	if(!(IsEmpty(head)))
	{
		// GetPersonInput prompts the user to enter in the information for
		// the new link
		GetPersonInput(perPtr);
		tail -> next = perPtr;
		perPtr -> next = NULL;
		tail = perPtr;
	}
	else
	{
		// GetPersonInput prompts the user to enter in the information for
		// the new link
		GetPersonInput(perPtr);
		perPtr -> next = NULL;
		head = perPtr;
		tail = perPtr;
	}
	perPtr = NULL;
}




