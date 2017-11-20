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
* FUNCTION InitializeAccounts
*--------------------------------------------------------------------------
*	This function Initializes the three accounts
* RETURNS: the head of the list created
**************************************************************************/
Account *InitializeAccounts(ostream &os)
{
	Account* head;
	Account* acctPtr;

	head = NULL;

	//Initialize Savings Account

	acctPtr = new Saving;

	acctPtr->SetAll("Nery Chapeton-Lamas", 1212, 300.00, 4, 1, 2012);
	acctPtr->SetLastAccess(4, 1, 2012);
	acctPtr->prev = head;
	acctPtr->next = NULL;
	head = acctPtr;

	Display(acctPtr, "Open Svings", 0.0, 0, 0.0, os);

	//Initialize Checking Account

	acctPtr = new Checking;

	acctPtr->SetAll("Jennifer Kim", 2323, 50.00, 4, 1, 2012);
	acctPtr->SetLastAccess(4, 1, 2012);
	acctPtr->prev = head;
	head->next = acctPtr;
	acctPtr->next = NULL;

	Display(acctPtr, "Open Ckings", 0.0, 0, 0.0, os);

	//Initialize MoneyMarket
	acctPtr = new MoneyMarket;

	acctPtr->SetAll("Shannon Alfaro", 3434, 100.00, 4, 1, 2012);
	acctPtr->SetLastAccess(4, 1, 2012);
	acctPtr->prev = head->next;
	head->next->next = acctPtr;
	acctPtr->next = NULL;


	Display(acctPtr, "Open MM", 0.0, 0, 0.0, os);



	return head;
}


