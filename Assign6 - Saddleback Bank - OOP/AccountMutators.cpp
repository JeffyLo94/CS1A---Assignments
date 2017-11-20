/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374780
 * Assign #6	: Saddleback Bank - OOP
 * CLASS		: CS1B
 * SECTION		: M-Th : 8am - 1:05pm
 * DUE DATE		: 7/8/14
 *************************************************************************/

#include "Header.h"

/**************************************************************************
* Method SetName
*--------------------------------------------------------------------------
*	This method sets the account owner's name in the Account object
* RETURNS: nothing
* -> sets account owner's name in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newName		: the new account name must be predefined
*
* POST-CONDITIONS
* 		Account owner's name will be updated with value defined in
* 		the passed parameter
**************************************************************************/
void Account::SetName(string  newName)	 //IN - name to update to
{
	name = newName;
}

/**************************************************************************
* Method SetAcctNum
*--------------------------------------------------------------------------
*	This method sets the account number in the Account object
* RETURNS: nothing
* -> sets account number in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newAcctNum	: the new account number must be predefined
*
* POST-CONDITIONS
* 		Account number will be updated with value defined in
* 		the passed parameter
**************************************************************************/
void Account::SetAcctNum(int newAcctNum) //IN - account number to update to
{
	acctNum = newAcctNum;
}

/**************************************************************************
* Method SetOpenDate
*--------------------------------------------------------------------------
*	This method sets the date the account is opened in the Account
*	object
* RETURNS: nothing
* -> sets account number in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newMonth	: the new month must be predefined
* 		newDay		: the new day must be predefined
* 		newYear		: the new year must be predefined
*
* POST-CONDITIONS
* 		Account opening date will be updated with values defined in
* 		the passed parameters
**************************************************************************/
void Account::SetOpenDate(int 	 newMonth,	//IN - month value to update to
						  int 	 newDay,	//IN - day value to update to
						  int 	 newYear)	//IN - year value to update to
{
	openDate.SetAll(newMonth, newDay, newYear);
}

/**************************************************************************
* Method SetCurrDate
*--------------------------------------------------------------------------
*	This method sets the date of the current transaction in the Account
*	object
* RETURNS: nothing
* -> sets account number in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newMonth	: the new month must be predefined
* 		newDay		: the new day must be predefined
* 		newYear		: the new year must be predefined
*
* POST-CONDITIONS
* 		Account current date will be updated with values defined in
* 		the passed parameters
**************************************************************************/
void Account::SetCurrDate(int 	 newMonth,	//IN - month value to update to
						  int 	 newDay,	//IN - day value to update to
						  int 	 newYear)	//IN - year value to update to
{
	currentDate.SetAll(newMonth, newDay, newYear);
}

/**************************************************************************
* Method SetLastAccess
*--------------------------------------------------------------------------
*	This method sets date of the last access with the passed in parameters
* RETURNS: nothing
* -> sets lastAccess to a specified date
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newMonth   : the new month must be predefined
* 		newDay	   : the new day must be predefined
* 		newYear	   : the new year must be predefined
*
* POST-CONDITIONS
* 		The date of the latest access will be updated with values defined
* 		in the passed parameters
**************************************************************************/
void Account::SetLastAccess(int newMonth, //IN - month value to update to
							 int newDay,   //IN - day value to update to
							 int newYear)  //IN - year value to update to
{
	lastAccess.SetAll(newMonth, newDay, newYear);
}

/**********************************************************************
* Method SetLastAccess
*--------------------------------------------------------------------------
*	This method sets date of the last access with the passed in parameters
* RETURNS: nothing
* -> sets lastAccess to a specified date
**********************************************************************/
void Account::SetLastAccess(Date newDate)
{
	SetLastAccess(newDate.GetMonth(), newDate.GetDay(), newDate.GetYear());
	//lastAccess.SetAll(newDate.GetMonth(), newDate.GetDay(), newDate.GetYear());
}

/**************************************************************************
* Method SetBal
*--------------------------------------------------------------------------
*	This method sets the account balance in the Account object
* RETURNS: nothing
* -> sets account balance in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newBalance	: the new balance must be predefined
*
* POST-CONDITIONS
* 		Account balance will be updated with value defined in
* 		the passed parameter
**************************************************************************/
void Account::SetBal(double newBalance) //IN - account balance to update to
{
	balance = newBalance;
}

/**************************************************************************
* Method SetAll
*--------------------------------------------------------------------------
*	This method sets all the data in the Account object
* RETURNS: nothing
* -> sets variables in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newName		: the new account name must be predefined
* 		newAcctNum	: the new account number must be predefined
* 		newBalance	: the new account balance must be predefined
* 		newMonth	: the new month must be predefined
* 		newDay		: the new day must be predefined
* 		newYear		: the new year must be predefined
*
* POST-CONDITIONS
* 		Account object attributes will be updated with values defined in
* 		the passed parameters
**************************************************************************/
void Account::SetAll(string  newName,	 //IN - name to update to
					 int     newAcctNum, //IN - account number to update to
					 double  newBalance, //IN - balance value to update to
					 int 	 newMonth,	 //IN - month value to update to
					 int 	 newDay,	 //IN - day value to update to
					 int 	 newYear)	 //IN - year value to update to
{
	SetName(newName);
	SetAcctNum(newAcctNum);
	SetOpenDate(newMonth, newDay, newYear);
	currentDate = openDate;
	SetBal(newBalance);
}

/**************************************************************************
* Method Deposit
*--------------------------------------------------------------------------
*	This method deposits a parameter value into the total balance of the
*	account
* RETURNS: nothing
* -> adds to the balance in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		depositAmt	: the deposit amount must be predefined
*
* POST-CONDITIONS
* 		Account balance will be updated with the addition of the deposit
**************************************************************************/
void Account::Deposit(Date   currDate,     //IN - Current date
					  double depositAmt)   //IN - Deposit amount
{
	balance += depositAmt;
	currentDate = currDate;
}

/**************************************************************************
* Method Withdraw
*--------------------------------------------------------------------------
*	This method performs a withdrawal from an account
* RETURNS: boolean on if transaction was successful
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		withdrawAmt	: the withdrawal amount must be predefined
*
* POST-CONDITIONS
* 		Withdraws specified amount from account
**************************************************************************/
bool Account::Withdraw(Date   currDate,    //IN - Current date
					   double withdrawAmt) //IN - withdraw amount
{
	bool goodTransaction;

	goodTransaction = false;

	if((balance - withdrawAmt) > 0)
	{
		balance -= withdrawAmt;
		goodTransaction = true;
	}

	currentDate = currDate;

	return goodTransaction;
}

/**************************************************************************
* Method Transfer
*--------------------------------------------------------------------------
*	This method performs a transfer of funds from one account to another
* RETURNS: nothing
* -> transfers a specified amount from an account
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		transferTo	: the account being transfered to
* 		transferAmt	: the amount being transfered must be predefined
*
* POST-CONDITIONS
* 		Transfers a specified amount from an account to a speciefied
* 		account
**************************************************************************/
bool Account::Transfer(Date   currDate,    //IN - Current date
					   Account* transferTo, //IN - Account to transfer to
					   double transferAmt) //IN - amount to be transfered
{
	bool goodTransaction;
	bool validTransfer;
	bool sufficientFunds;

	validTransfer = false;
	sufficientFunds = false;

	if(transferTo->GetAcctNum() != GetAcctNum())
	{
		validTransfer = true;
	}

	if(Account::GetBalance() > 0)
	{
		sufficientFunds = true;
	}

	if(validTransfer && sufficientFunds)
	{
		goodTransaction = Withdraw(currDate, transferAmt);

		if(goodTransaction)
		{
			transferTo->Deposit(currDate, transferAmt);
		}
	}
	else
	{
		validTransfer = false;
	}

	return validTransfer;
}

