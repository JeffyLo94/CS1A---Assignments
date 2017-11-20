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
 * FUNCTION PrintSize
 *_________________________________________________________________________
 *  This function will output the amount of people in the stack.
 * 	- Returns nothing -> will output the amount of people in the stack.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head       : Start of the list - Must be pre-defined
 * 		os         : Output stream - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		This function will output the amount of people in the stack.
 *************************************************************************/
void PrintSize(PersonInfo *head, // CALC - Start of the list
			   ostream&   os)    // OUT  - Output stream
{
	// DECLARATIONS
	// Variables
	int stackSize; // CALC && OUT - The size of the stack

	// INITIALIZATIONS
	// Assigns the stackSize using the Size fuction, which counts the
	// amount of links in the list
	stackSize = Size(head);

	// Changes the formatting of the output depending on how many people
	// are in the stack
	if(stackSize < 1)
	{
		os << "Nobody is on the stack!\n\n";
	}
	else if(stackSize == 1)
	{
		os << "There is one person on the stack.\n\n";
	}
	else
	{
		os << "There are " << stackSize << " people on the stack.\n\n";
	}
}
