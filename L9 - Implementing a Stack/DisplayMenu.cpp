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
 * FUNCTION DisplayMenu
 *_________________________________________________________________________
 *  This function will display the menu options.
 *  - returns nothing -> Will display the menu options
 *_________________________________________________________________________
 * PRE-CONDITION
 *
 * POST-CONDITIONS
 * 		Will display the menu options.
 *************************************************************************/
void DisplayMenu(ostream& os) // OUT - Output stream
{
	// DECLARATIONS

	// INITIALIZATIONS

	os << "STACK MENU\n";
	os << PUSH 	   << " - Add a person (PUSH)\n";
	os << POP  	   << " - Remove a person (POP)\n";
	os << ISEMPTY  << " - Is the stack empty? (ISEMPTY)\n";
	os << PEEK     << " - Who is on top? (PEEK)\n";
	os << SIZE     << " - How many people are there? (SIZE)\n";
	os << OUTSTACK << " - Output stack\n";
	os << EXIT     << " - to Exit\n";
}
