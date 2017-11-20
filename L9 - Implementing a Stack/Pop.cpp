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
 * FUNCTION Pop
 *_________________________________________________________________________
 *  This function will pop the link at the front of the list.
 * 	- Returns nothing -> Will pop the link at the front of the list.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		*head      : Link in list to be popped - Must be pre-defined
 * 		os         : Output stream - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		Pops the first link off of the linked-list
**************************************************************************/
PersonInfo *Pop(PersonInfo *head,    // CALC - Beginning of the linked-list
		        ostream& os)         // OUT  - Output stream
{
	// DECLARATIONS
	// Variables
	PersonInfo *perPtr;

	// INITIALIZATIONS
	perPtr = NULL;

	// If the infoPtr is not at the end of the list, it will call
	// PrintPerson to output the info in that link. It will then reassign
	// the info from the link into a temporary variable and move the head
	// of the list to the next link
	if(head != NULL)
	{
		PrintPerson(head, os);
		perPtr  = head;
		head    = head->next;
	}
	else
	{
		os << "Can't POP from an empty stack!\n\n";
	}
	// Deletes the info at that link in the list and points perPtr away
	// from any deallocated memory
	delete perPtr;
	perPtr = NULL;

	return head;
}
