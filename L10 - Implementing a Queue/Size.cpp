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
 * FUNCTION Size
 *_________________________________________________________________________
 *  This function will calculate the size of the list.
 * 	- Returns infoCount -> amount of people in the list.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		infoPtr    : Start of the list - Must be predefined
 *
 * POST-CONDITIONS
 * 		infoCount  : Amount of people in the list
 *************************************************************************/
int Size(PersonInfo *infoPtr) // CALC - Start of the list
{
	// DECLARATIONS
	// Variables
	int infoCount; // CALC - Counts the amount of links in the list

	// INITIALIZATIONS
	infoCount = 0;

	// Will loop until the head reaches the end of memory
	while(infoPtr != NULL)
	{
		// Moves infoPtr to the next link in the list
		infoPtr = infoPtr -> next;
		infoCount++;
	}

	return infoCount;
}
