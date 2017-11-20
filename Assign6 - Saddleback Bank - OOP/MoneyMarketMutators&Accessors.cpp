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
void MoneyMarket::Deposit(Date   currDate,     //IN - Current date
					  double depositAmt)   //IN - Deposit amount
{
	PayInterest(currDate);

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
bool MoneyMarket::Withdraw(Date   currDate,    //IN - Current date
						double withdrawAmt) //IN - withdraw amount
{
	bool goodTransaction;

	PayInterest(currDate);

	goodTransaction = false;

	if((balance - withdrawAmt - MM_WITHDRAW) > 0)
	{
		balance -= (withdrawAmt + MM_WITHDRAW);
		goodTransaction = true;
	}

	currentDate = currDate;

	return goodTransaction;
}

/**************************************************************************
* Method PayInterest
*--------------------------------------------------------------------------
*	This method calculates and pays the interest due
* RETURNS: nothing
* -> the balances is adjusted if interest is due
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		currDate	: the current date must be predefined
*
* POST-CONDITIONS
* 		Account balance maybe changed from this function
**************************************************************************/
void MoneyMarket::PayInterest(Date currDate) //IN - Current date
{
	int monthDiff;
	int yearDiff;
	int dayDiff;
//this->lastAccess;
	yearDiff = currDate.GetYear() - this->GetLastAccess().GetYear();
	monthDiff = currDate.GetMonth() - this->GetLastAccess().GetMonth();
	dayDiff	  = currDate.GetDay() - this->GetLastAccess().GetDay();

	if(!(yearDiff == 0 && monthDiff == 0 && dayDiff == 0))
	{
		if(yearDiff == 0)
		{
			if(monthDiff > 0)
			{
				balance = balance * pow((1 + MM_RATE), monthDiff);
			}
		}
		else
		{
			balance = balance * pow ((1 + MM_RATE),
					   	   ((std::abs(yearDiff) * 12) + monthDiff));
		}

		this->SetLastAccess(currDate.GetMonth(), currDate.GetDay(), currDate.GetYear());
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
bool MoneyMarket::Transfer(Date   currDate,    //IN - Current date
					   Account* transferTo, //IN - Account to transfer to
					   double transferAmt) //IN - amount to be transfered
{
	bool goodTransaction;
	bool validTransfer;
	bool sufficientFunds;

	PayInterest(currDate);

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
