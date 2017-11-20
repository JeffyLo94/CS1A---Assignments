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
* FUNCTION DisplayTableHead
*--------------------------------------------------------------------------
*	This function outputs the table header
* RETURNS: nothing
* -> Table header is output
**************************************************************************/
void DisplayTableHead(ostream& os)
{
	os << left;
	os << setw(COL_ONE) << "TRANSACTION";
	os << setw(COL_TWO) << "DATE";
	os << setw(COL_THREE) << "ACCT#";
	os << setw(COL_FOUR) << "ACCT NAME";
	os << right << setw(COL_FIVE-3) << "AMOUNT";
	os << setw(3) << ' '
	   << setw(COL_SIX-3)  << "BALANCE";
	os << setw(COL_SEVEN) << "FROM ACCT#";
	os << setw(COL_EIGHT) << "FROM ACCT BAL";
	os << endl;

	os << right;
	os << setfill ('-');
	os << setw(COL_ONE) << "    ";
	os << setw(COL_TWO) << "   ";
	os << setw(COL_THREE) << "    ";
	os << setw(COL_FOUR) << "  ";
	os << setw(COL_FIVE) << "  ";
	os << setw(COL_SIX)  << "  ";
	os << setw(COL_SEVEN) << ' ';
	os << setw(COL_EIGHT) << ' ';
	os << setfill(' ');
	os << endl;
}
