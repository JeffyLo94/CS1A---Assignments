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
 * FUNCTION Front
 *_________________________________________________________________________
 *  This function Outputs the info at the top of the queue
 *  - returns nothing -> Outputs the info at the top of the queue
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		head       : Start of the list - Must be predefined
 * 		os         : Output stream -Must be predefined
 *
 * POST-CONDITIONS
 * 		Outputs the info at the top of the queue
 *************************************************************************/
void Front(PersonInfo *head, // CALC - start of list
		  ostream&   os)     // OUT  - output stream
{
		// Output - outputs info from the front of the queue
		os << "The first person in the queue is:\n";
		PrintPerson(head, cout);

}

