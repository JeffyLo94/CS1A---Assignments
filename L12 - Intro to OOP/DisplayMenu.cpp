/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Breanna Nelson
 * STUDENT ID  : 374780     & 272229
 * LAB #12     : Intro to OOP
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/2/14
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
* 		os		   : The output stream must be predefined
* 		shortMenu  : Boolean that determines menu display must be
* 					 predefined
*
* POST-CONDITIONS
* 		Nothing is returned, function displays a menu.
**************************************************************************/
void DisplayMenu(ostream& os,        // OUT - Output stream
				 char     menuType)  // IN  - Determines menu display
{
	if(menuType == 'L')
	{
		// Output - Outputs the menu
		os << left;
		os << INITIALIZE_ANIMAL  << " - Initialize Animals\n";
		os << CHANGE_AGE  		 << " - Change Age\n";
		os << CHANGE_VALUE  	 << " - Change Value\n";
		os << DISPLAY      		 << " - Display\n";
		os << EXIT         		 << " - Exit\n";
		os << right;
	}
	else if (menuType == 'S')
	{
		// Output - Outputs the shorter menu
		os << left;
		os << INITIALIZE_ANIMAL  << " - Initialize Animals\n";
		os << EXIT         		 << " - Exit\n";
		os << right;
	}
	else if (menuType == 'A')
	{
		// Output - Outputs the age menu
		os << left;
		os << "CHANGE AGE:\n";
		os << "1 - Fluffy\n";
		os << "2 - Maa\n";
		os << "3 - Babe\n";
		os << right;
	}
	else if (menuType == 'V')
	{
		// Output - Outputs the value menu
		os << left;
		os << "CHANGE VALUE:\n";
		os << "1 - Fluffy\n";
		os << "2 - Maa\n";
		os << "3 - Babe\n";
		os << right;
	}
	else
	{
		// Blank Menu
		os << endl;
	}
}
