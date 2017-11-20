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
* FUNCTION DisplayMenu
*--------------------------------------------------------------------------
*	This function displays the menu in the designated output stream
 * RETURNS: nothing
 * -> Displays Menu for user
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		os		   : The output stream
*
* POST-CONDITIONS
* 		Nothing is returned, function displays a menu.
**************************************************************************/
void DisplayMenu(ostream& os) // OUT - Output stream
{
	// Output - Outputs the menu
	os << left;
	os << "\nList Menu:\n";
	os << CREATELIST   << " - Create List\n";
	os << DISPLAYLIST  << " - Display List\n";
	os << REVERSELIST  << " - Display List in Reverse\n";
	os << ISEMPTY      << " - Is the list empty?\n";
	os << SEARCHNAME   << " - Search by name\n";
	os << REMOVE	   << " - Remove Node\n";
	os << CLEARLIST    << " - Clear List\n";
	os << EXIT         << " - to Exit\n";
	os << right;
}
