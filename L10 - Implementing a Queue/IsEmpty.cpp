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
* FUNCTION IsEmpty
*__________________________________________________________________________
*  This function receives the head of the list and checks if it points to
*  null
*  - returns true or false
*__________________________________________________________________________
* PRE-CONDITIONS
*		head : the start of the list must be predefined
* POST-CONDITIONS
*		The function returns true or false depending if the list is empty.
**************************************************************************/
bool IsEmpty(PersonInfo *head)
{
	return head == NULL;
}
