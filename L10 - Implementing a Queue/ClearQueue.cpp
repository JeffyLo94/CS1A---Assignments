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
* FUNCTION ClearQueue
*__________________________________________________________________________
*  This function the list and deletes all items in the queue
*  - returns head & tail
*__________________________________________________________________________
* PRE-CONDITIONS
* 		head       : the start of the list must be predefined
* 		tail       : the end of the list must be predefined
*
* POST-CONDITIONS
* 		index      : Location of the array in which the string was found is
* 					 returned to main
**************************************************************************/
void ClearQueue(PersonInfo *&head,  // IN & OUT - Start of the list
		        PersonInfo *&tail)  // IN & OUT - End   of the list
{
	// DECLARATIONS
	// Variables
	PersonInfo *perPtr;

	// Will loop until the head reaches the end of memory
	while(head != NULL)
	{
		perPtr = head;
		cout << perPtr -> name << endl;
		// Moves infoPtr to the next link in the list
		head = head -> next;
		delete perPtr;
	}
	perPtr = NULL;
	tail   = NULL;

}
