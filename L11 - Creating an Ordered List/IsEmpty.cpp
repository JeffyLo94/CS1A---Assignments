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
* FUNCTION IsEmpty
*--------------------------------------------------------------------------
*	This function checks if the linked list is empty
* RETURNS: true or false
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head   : Head of the list must be predefined
*
* POST-CONDITIONS
* 		returns a boolean on whether or not the head is of the list is
* 		empty
**************************************************************************/
bool IsEmpty(PersonInfo* head)
{
	return head == NULL;
}
