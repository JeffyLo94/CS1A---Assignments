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
* FUNCTION OutputList
*--------------------------------------------------------------------------
*	This function outputs a list of person information
* RETURNS: nothing
* -> Outputs a list of person information
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head       : Person list must be predefined
* 		os		   : Output stream must be predefined
*
* POST-CONDITIONS
* 		Nothing is returned, list of person information is output.
**************************************************************************/
void OutputList(PersonInfo* head,  //IN - Person list
				ostream &os)       //IN - Output Stream
{
	// DECLARATIONS
	// Variables
	PersonInfo *perPtr;
	int			counter;

	// INITIALIZATIONS
	perPtr  = head;
	counter = 0;

	OutputTableHeader(os);

	while(perPtr != NULL)
	{
		counter++;
		OutPersonInfo(perPtr, counter, os);
		perPtr = perPtr -> next;
	}
	delete perPtr;
	perPtr = NULL;

}
