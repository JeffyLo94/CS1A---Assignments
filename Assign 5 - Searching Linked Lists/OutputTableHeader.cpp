/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#include "Header.h"
/**************************************************************************
* FUNCTION OutputTableHeader
*--------------------------------------------------------------------------
*	This function outputs a table header for the movie list
* RETURNS: nothing
* -> Outputs table header for movie list
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
	os << setw(COL_ONE)   << "MOVIE #";
	os << setw(COL_TWO)   << " TITLE";
	os << setw(COL_THREE) << "YEAR";
	os << setw(COL_FOUR)  << "RATING";
	os << setw(COL_FIVE)  << " GENRE";
	os << setw(COL_SIX)   << " ALT GENRE";
	os << setw(COL_SEVEN) << " LEAD ACTOR";
	os << setw(COL_EIGHT) << " SUPPORTING ACTOR";
	os << endl;
	os << right;
	os << setfill('-');
	os << setw(COL_ONE)   << " ";
	os << setw(COL_TWO)   << " ";
	os << setw(COL_THREE) << " ";
	os << setw(COL_FOUR)  << " ";
	os << setw(COL_FIVE)  << " ";
	os << setw(COL_SIX)   << " ";
	os << setw(COL_SEVEN) << " ";
	os << setw(COL_EIGHT) << "";
	os << setfill(' ');
	os << endl;
}
