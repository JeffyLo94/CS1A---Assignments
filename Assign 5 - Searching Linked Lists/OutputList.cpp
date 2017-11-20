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
* FUNCTION OutputList
*--------------------------------------------------------------------------
*	This function outputs the entire movie list.
* RETURNS: nothing
* -> Outputs entire movie list
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		os		   : The output stream must be predefined
* 		head	   : The head of the list must be predefined
*
* POST-CONDITIONS
* 		Nothing is returned, function outputs entire movie list.
**************************************************************************/
void OutputList(ostream &os,      // IN - Output stream
				MovieInfo *head)  // IN - Movie Info list
{
	// DECLARATIONS
	// Variables
	MovieInfo *movPtr;
	int        counter;

	// INITIALIZATIONS
	movPtr = head;
	counter = 1;

	// Output - Table Title
	os << left;
	os << "\nCOMPLETE MOVIE LISTING\n";

	// Output - Table Header
	OutputTableHeader(os);

	// Processing - loops through whole list until the end and outputs info
	while(movPtr != NULL)
	{
		 OutputMovieInfo(movPtr, counter, os);
		 counter++;
		 movPtr = movPtr -> next;
	}
	delete movPtr;
	movPtr = NULL;

}
