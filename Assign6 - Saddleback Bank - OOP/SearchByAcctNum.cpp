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
* FUNCTION SearchByAcctNum
*--------------------------------------------------------------------------
*	This function searches through a list for an account of a specific
*	number passed in thru the parameters
* RETURNS: the found account
**************************************************************************/
Account* SearchByAcctNum(Account* head,
					    int      keyNum)
{
	Account* acctPtr; // CALC - Dynamic pointer to traverse list
	bool	 found;

	acctPtr = head;
	found = false;

	while(!found && acctPtr != NULL)
	{
		if(acctPtr->GetAcctNum() == keyNum)
		{
			found = true;
		}
		else
		{
			acctPtr = acctPtr->next;
		}
	}

	return acctPtr;
}
