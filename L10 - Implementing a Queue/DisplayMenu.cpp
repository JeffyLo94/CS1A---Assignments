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
	// Constants
	const int OUT_SIZE = 9;  // Holds the setw size

	// Output - Outputs the menu
	os << left;
	os << "QUEUE MENU\n";
	os << ENQUEUE 	  << setw(OUT_SIZE) << "-ENQUEUE"
	   << "(Add a person)\n";
	os << DEQUEUE  	  << setw(OUT_SIZE) << "-DEQUEUE"
	   << "(Remove a person)\n";
	os << ISEMPTY     << setw(OUT_SIZE) << "-ISEMPTY"
	   << "(Is the queue empty?)\n";
	os << FRONT       << setw(OUT_SIZE) << "-FRONT"
	   << "(Who is in front?)\n";
	os << SIZE        << setw(OUT_SIZE) << "-SIZE"
	   << "(How many people are there?)\n";
	os << CLEARQUEUE  << "-Clear the Queue\n";
	os << OUTQUEUE    << "-Output the Queue\n";
	os << EXIT        << "-Exit\n";
	os << right;
}
