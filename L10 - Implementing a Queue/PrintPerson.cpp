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
 * FUNCTION PrintPerson
 *_________________________________________________________________________
 *  This function retrieves the name of the input and output files from the
 *  user
 *  - returns nothing
 *  -> Outputs person info
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head      : Link in list to be popped - Must be predefined
 * 		os         : Output stream - Must be predefined
 *
 * POST-CONDITIONS
 * 		Will output the link in the list to be popped
 *************************************************************************/
void PrintPerson(PersonInfo *head,    // OUT - Link in list to be popped
			     ostream&   os)       // OUT - Output stream
{
	// Output - outputs person node information
	os << left;
	os << setw(OUT_WIDTH) << "Name:"   << head -> name   << endl;
	os << setw(OUT_WIDTH) << "Gender:" << head -> gender << endl;
	os << setw(OUT_WIDTH) << "Age:"    << head -> age    << endl;
	os << right           << endl;

}
