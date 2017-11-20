/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Sem Diaz
 * STUDENT ID  : 374780     & 374640
 * LAB #11     : Creating an Ordered List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/30/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
* FUNCTION OutputTableHeader
*--------------------------------------------------------------------------
*	This function outputs a table header for the list
* RETURNS: nothing
* -> Outputs table header for list
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		os		   : The output stream must be predefined
*
* POST-CONDITIONS
* 		Nothing is returned, table header is output.
**************************************************************************/
void OutputTableHeader(ostream &os)  // IN - Output Stream
{
	os << left;
	// Output - Table Header
	os << right;
	os << setw(COL_ONE-5) << '#';
	os << left;
	os << setw(COL_ONE-4) << ' ';
	os << setw(COL_TWO)   << "NAME";
	os << setw(COL_THREE) << "GENDER";
	os << setw(COL_FOUR)  << "AGE";

	os << endl;
	os << right;
	os << setfill('-');
	os << setw(COL_ONE-1)   << " ";
	os << setw(COL_TWO)   << " ";
	os << setw(COL_THREE) << " ";
	os << setw(COL_FOUR)  << " ";
	os << setfill(' ');
	os << endl;
}
