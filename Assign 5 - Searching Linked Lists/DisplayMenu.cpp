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
* FUNCTION Display Menu
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
	os << "\nDVD MENU OPTIONS\n";
	os << OUTLIST 	   << " - Output Entire List\n";
	os << TITLESEARCH  << " - Title Search\n";
	os << GENRESEARCH  << " - Genre Search\n";
	os << ACTORSEARCH  << " - Actor Search\n";
	os << YEARSEARCH   << " - Year Search\n";
	os << RATINGSEARCH << " - Rating Search (0-9)\n";
	os << EXIT         << " - EXIT\n";
	os << right;
}
