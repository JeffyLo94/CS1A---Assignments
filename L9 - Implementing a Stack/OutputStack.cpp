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
 * FUNCTION OutputStack
 *_________________________________________________________________________
 *  This function outputs all the information in the stack.
 *  - returns nothing -> Outputs all the information in the stack.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head       : Start of the linked-list - Must be pre-defined
 * 		os         : Output stream - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		Outputs all the information in the stack.
 *************************************************************************/
void OutputStack(PersonInfo *head, // CALC - Start of the stack
				 ostream&   os)    // OUT  - Output stream
{
	// DECLARATIONS

	// INITIALIZATIONS

	// If there is nobody in the stack, the console will tell the user
	if(head == NULL)
	{
		os << "There is nobody in the stack.\n\n";
	}

	// Will loop until head reaches the end of the stack
	while(head != NULL)
	{
		os << left;
		os << setw(OUT_WIDTH) << "Name:"   << head -> name   << endl;
		os << setw(OUT_WIDTH) << "Gender:" << head -> gender << endl;
		os << setw(OUT_WIDTH) << "Age:"    << head -> age    << endl;
		os << right           << endl;
		head = head->next;
	}
}
