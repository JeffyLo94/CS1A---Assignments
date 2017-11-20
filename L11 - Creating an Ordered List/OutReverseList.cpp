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
* FUNCTION OutReverseList
*--------------------------------------------------------------------------
*	This function outputs a list of person information in reverse
* RETURNS: nothing
* -> Outputs a list of person information in reverse
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head       : Person list must be predefined
* 		os		   : Output stream must be predefined
*
* POST-CONDITIONS
* 		Nothing is returned, list of person information is output in
* 		reverse.
**************************************************************************/
void OutReverseList(PersonInfo* head,  //IN - Person list
					ostream &os)       //IN - Output Stream
{
	// DECLARATIONS
	// Variables
	PersonInfo *perPtr;
	int			counter;

	// INITIALIZATIONS
	counter = 0;

	// FindTail - Finds tail of list
	perPtr = FindTail(head);

	// OutputTableHeader - outputs the table header
	OutputTableHeader(os);

	// Processing - Outputs list in reverse
	while(perPtr != NULL)
	{
		counter++;
		OutPersonInfo(perPtr, counter, os);
		perPtr = perPtr -> prev;
	}
	delete perPtr;
	perPtr = NULL;

}
