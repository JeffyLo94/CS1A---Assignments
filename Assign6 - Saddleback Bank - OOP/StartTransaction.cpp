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
* FUNCTION StartTransactions
*--------------------------------------------------------------------------
*	This function obtains the transaction information from a file
*	and performs it.
* RETURNS: the head of the list created
**************************************************************************/
void StartTransactions(Account* head,
					   string inFileName,
					   ostream &os)
{
	// Variable List
	ifstream inFile;
	int		 month;
	int		 day;
	int		 year;
	int		 accountNum;
	int		 transferNum;
	double	 amount;
	string	 transactType;
	Account* foundAcct;
	Account* transAcct;
	Date	 currentDate;


	inFile.open(inFileName.c_str());

	while(inFile)
	{
		inFile >> month;
		inFile >> day;
		inFile >> year;
		inFile >> accountNum;
		inFile >> amount;
		inFile.ignore(numeric_limits<streamsize>::max(), ' ');
		getline(inFile, transactType);


		currentDate.SetAll(month, day, year);
		cerr << month <<"/" << day << "/" << year
		 << "   ACCT#: " << accountNum
		 << "   amount: " << amount
		 << "   transaction:" << transactType << endl;


		if(transactType == "Transfer" || transactType == "transfer")
		{
			inFile >> transferNum;
			inFile.ignore(numeric_limits<streamsize>::max(), '\n');


			foundAcct = SearchByAcctNum(head, accountNum);
			transAcct = SearchByAcctNum(head, transferNum);

			ExecuteTransfer(foundAcct, transAcct, amount, currentDate, os);
		}
		else
		{
			foundAcct = SearchByAcctNum(head, accountNum);

			ExecuteTransaction(foundAcct, amount, currentDate,
							   transactType, os);
		}


		foundAcct = new Account;
	}

	delete foundAcct;

	inFile.close();
}
