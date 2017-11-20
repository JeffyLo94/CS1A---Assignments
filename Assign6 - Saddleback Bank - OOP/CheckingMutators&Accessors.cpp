/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374780
 * Assign #6	: Saddleback Bank - OOP
 * CLASS		: CS1B
 * SECTION		: M-Th : 8am - 1:05pm
 * DUE DATE		: 7/8/14
 *************************************************************************/

#include "Header.h"

// M U T A T O R S
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
void Checking::Deposit(Date   currDate,     //IN - Current date
					  double depositAmt)   //IN - Deposit amount
{
	//OverdrawPenalty - checks/performs the penalty
	OverdrawPenalty(currDate);

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
bool Checking::Withdraw(Date   currDate,    //IN - Current date
						double withdrawAmt) //IN - withdraw amount
{
	// Variable List
	bool goodTransaction; //Calc - tracks if transaction is successful

	//OverdrawPenalty - checks/performs the penalty
	OverdrawPenalty(currDate);

	goodTransaction = false;

	if((balance - withdrawAmt) > -200)
	{
		balance -= withdrawAmt;

		if((balance - withdrawAmt) < 0)
		{
			balance -= OVERDRAW_FEE;
		}

		goodTransaction = true;
	}

	currentDate = currDate;

	return goodTransaction;
}

/**************************************************************************
* Method OverdrawPenalty
*--------------------------------------------------------------------------
*	This method calculates the penalization amount for an overdrawn account
* RETURNS: boolean on if transaction was successful
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		withdrawAmt	: the withdrawal amount must be predefined
*
* POST-CONDITIONS
* 		Withdraws specified amount from account
**************************************************************************/
void Checking::OverdrawPenalty(Date currDate) //IN - Current date
{
	// Variable List
	int monthDiff;	//Calc - tracks month difference
	int yearDiff;   //Calc - tracks year difference
	int dayDiff;    //Calc - tracks day difference

	yearDiff = currDate.GetYear() - lastAccess.GetYear();
	monthDiff = currDate.GetMonth() - lastAccess.GetMonth();
	dayDiff	  = currDate.GetDay() - lastAccess.GetDay();

	if(!(yearDiff == 0 && monthDiff == 0 && dayDiff == 0) && balance < 0)
	{
		if(yearDiff == 0)
		{
			if(monthDiff > 0)
			{
				balance -= (monthDiff * OVERDRAW_FEE);
			}
		}
		else
		{
			balance -= (((std::abs(yearDiff) * 12) + monthDiff)
					    * OVERDRAW_FEE);
		}

		lastAccess = currDate;
	}
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
bool Checking::Transfer(Date   currDate,    //IN - Current date
					   Account* transferTo, //IN - Account to transfer to
					   double transferAmt) //IN - amount to be transfered
{
	//Variable list
	bool goodTransaction;
	bool validTransfer;
	bool sufficientFunds;

	//OverdrawPenalty - checks/performs the penalty
	OverdrawPenalty(currDate);

	validTransfer = false;
	sufficientFunds = false;

	// Processing - makes sure not the same account numbers
	if(transferTo->GetAcctNum() != GetAcctNum())
	{
		validTransfer = true;
	}

	// Processing - makes sure not taking from negative
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


// A C C E S S O R S
/**************************************************************************
* Method GetLastAccess
*--------------------------------------------------------------------------
*	This method gets the date of the latest transaction
* RETURNS: returns the date
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account must be instantiated
*
* POST-CONDITIONS
* 		Date of the latest transaction will be returned
**************************************************************************/
Date Checking::GetLastAccess() const
{
	return lastAccess;
}
