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
 * FUNCTION PrintPerson
 *_________________________________________________________________________
 *  This function retrieves the name of the input and output files from the
 *  user
 *  - returns nothing ->
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		*head      : Link in list to be popped - Must be pre-defined
 * 		os         : Output stream - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		Will output the link in the list to be popped
 *************************************************************************/
void PrintPerson(PersonInfo *head,    // OUT - Link in list to be popped
			     ostream&   os)       // OUT - Output stream
{
	// DECLARATIONS

	// INITIALIZATIONS
	os << left;
	os << "POPPING\n";
	os << setw(OUT_WIDTH) << "Name:"   << head -> name   << endl;
	os << setw(OUT_WIDTH) << "Gender:" << head -> gender << endl;
	os << setw(OUT_WIDTH) << "Age:"    << head -> age    << endl;
	os << right           << endl;

}
