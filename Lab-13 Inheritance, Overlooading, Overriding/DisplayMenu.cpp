/*******************************************************************************
 *	AUTHOR		: Anthony Ramirez & Jeffrey Lo
 *	STU ID#		: 369397		  & 374780
 *	LAB # 13  	: Inheritance, Overloading, Overriding
 *	CLASS   	: CS1B
 *	SECTION 	: 8-1PM Monday-Thursday
 *	DUE DATE 	: 6/26/14
 ******************************************************************************/
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
		// Output - Outputs the larger main menu
		os << left;
		os << INITIALIZE_SHEEP   << " - Initialize Sheep\n";
		os << INITIALIZE_PIG     << " - Initialize Pigs\n";
		os << CHANGE_AGE  		 << " - Change Age\n";
		os << CHANGE_VALUE  	 << " - Change Value\n";
		os << DISPLAY      		 << " - Display\n";
		os << MAIN_EXIT			 << " - Exit\n";
		os << right;
	}
	else if (menuType == 'S')
	{
		// Output - Outputs the shorter menu
		os << left;
		os << INITIALIZE_ANIMALS << " - Initialize Animals\n";
		os << START_EXIT		 << " - Exit\n";
		os << right;
	}
	else if (menuType == 'A')
	{
		// Output - Outputs the age menu
		os << left;
		os << "CHANGE AGE:" << endl;
		os << "1 - Maa"     << endl;
		os << "2 - BaaBaa"  << endl;
		os << "3 - Babe"    << endl;
		os << "4 - Wilbur"  << endl;
		os << right;
	}
	else if (menuType == 'V')
	{
		// Output - Outputs the value menu
		os << left;
		os << "CHANGE VALUE:" << endl;
		os << "1 - Maa"     << endl;
		os << "2 - BaaBaa"  << endl;
		os << "3 - Babe"    << endl;
		os << "4 - Wilbur"  << endl;
		os << right;
}
	else
	{
		// Blank Menu
		os << endl;
	}
}
