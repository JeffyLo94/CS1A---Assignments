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
* FUNCTION ExecuteTransaction
*--------------------------------------------------------------------------
*	This function obtains the transaction information from a file
*	and performs it.
* RETURNS: nothing
* -> account information is adjusted
**************************************************************************/
void ExecuteTransaction(Account* targetAcct,
						double   amount,
						Date     currDate,
						string transactType,
						ostream &os)
{
	bool goodTransact;

	if(transactType == "Deposit" || transactType == "deposit")
	{
		cerr << "\n**** ENTERED DEPOSIT ****\n";

		cerr << "\nTarget Account Name: " << targetAcct->GetName() << endl;
		targetAcct->Deposit(currDate, amount);

		cerr << "\n** deposit successfull**\n";

		Display(targetAcct, transactType, amount, 0, 0.0, os);
	}

	if(transactType == "Withdrawal" || transactType == "withdrawal")
	{
		cerr << "\n**** ENTERED WITHDRAW ****\n";

		goodTransact = targetAcct->Withdraw(currDate, amount);

		if(!goodTransact)
		{
			Display(targetAcct, transactType, amount, 0, 0.0, os);

			os << "***    WITHDRAWAL UNSUCESSFUL   ***\n";
			os << "*** DUE TO INSUFFICEIENT FUNDS  ***\n";
		}
		else
		{
			Display(targetAcct, transactType, amount, 0, 0.0, os);
		}
	}
}
