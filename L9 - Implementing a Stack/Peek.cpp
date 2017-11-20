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
 * FUNCTION Peek
 *_________________________________________________________________________
 *  This function Outputs the info at the top of the stack
 *  - returns nothing -> Outputs the info at the top of the stack
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head       : Start of the list - Must be pre-defined
 * 		os         : Output stream -Must be pre-defined
 *
 * POST-CONDITIONS
 * 		Outputs the info at the top of the stack
 *************************************************************************/
void Peek(PersonInfo *head, // CALC - start of list
		  ostream&   os)    // OUT  - output stream
{
	// DECLARATIONS
	// Variables
	bool empty;

	// INITIALIZATIONS
	empty = IsEmpty(head);

	// Outputs the info at the top of the stack, if the stack is not empty
	if(empty)
	{
		os << "There is nobody to PEEK at!!\n\n";
	}
	else
	{
		os << "PEEKING at\n";
		os << left;
		os << setw(OUT_WIDTH) << "Name:"   << head -> name   << endl;
		os << setw(OUT_WIDTH) << "Gender:" << head -> gender << endl;
		os << setw(OUT_WIDTH) << "Age:"    << head -> age    << endl
		   << endl;
		os << right;
	}
}
