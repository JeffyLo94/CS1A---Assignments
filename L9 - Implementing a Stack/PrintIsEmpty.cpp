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
 * FUNCTION PrintIsEmpty
 *_________________________________________________________________________
 * 	This function will output whether or not the stack is empty.
 * 	- Returns nothing -> will output whether or not the stack is empty.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head       : Start of the list - Must be pre-defined
 * 		os         : Output stream - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		Will output whether or not the stack is empty
 *************************************************************************/
void PrintIsEmpty(PersonInfo *head, // CALC - Start of the linked-list
				  ostream&   os)    // OUT  - Output stream
{
	// DECLARATIONS
	// Variables
	bool empty; // CALC - A boolean containing whether the stack is empty

	// INITIALIZATIONS
	empty = IsEmpty(head); // CALC - Start of the linked-list

	if(empty)
	{
		os << "Yes, the stack is empty.\n\n";
	}
	else
	{
		os << "The stack is NOT empty.\n\n";
	}
}
