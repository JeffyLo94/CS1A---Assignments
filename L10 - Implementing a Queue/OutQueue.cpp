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
 * FUNCTION OutQueue
 *_________________________________________________________________________
 *  This function outputs all the information in the queue.
 *  - returns nothing -> Outputs all the information in the queue.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head       : Start of the linked-list - Must be predefined
 * 		os         : Output stream - Must be predefined
 *
 * POST-CONDITIONS
 * 		Outputs all the information in the stack.
 *************************************************************************/
void OutQueue(PersonInfo *head, // CALC - Start of the queue
			  ostream&   os)    // OUT  - Output stream
{
	// Processing - Will loop until head reaches the end of the stack
	while(head != NULL)
	{
		PrintPerson(head, os);
		head = head->next;
	}
}
