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
* FUNCTION Dequeue
*__________________________________________________________________________
*  This function takes in the head and tail and then removes the front
*  node of the list
*  - returns new head and tail
*__________________________________________________________________________
* PRE-CONDITIONS
* 		head       : The start of the list must be predefined
* 		tail       : The end of list must be predefined
*
* POST-CONDITIONS
* 		returns the new head and tail after dequeueing
**************************************************************************/
void Dequeue(PersonInfo *&head, //IN & OUT - start of the list
			 PersonInfo *&tail) //IN & OUT - end of the list
{

	// DECLARATIONS
	// Variables
	PersonInfo *perPtr;   //CALC - Temp Pointer

	// INITIALIZATIONS
	perPtr = head;

	// PROC - if its not empty it will remove the node from the front
	if(!(IsEmpty(head)))
	{
		//PrintPerson - outputs the node that is being deleted
		PrintPerson(perPtr, cout);
		head = head -> next;
		// PROC - if there is only one node in the queue
		if(head == tail)
		{
		    tail = NULL;
		}
	}
	delete perPtr;
	perPtr = NULL;
}


