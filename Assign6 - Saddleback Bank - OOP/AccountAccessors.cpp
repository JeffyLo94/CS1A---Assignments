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
* Method GetName
*--------------------------------------------------------------------------
*	This method gets the account name
* RETURNS: string w/ account owner's name
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account must be instantiated
*
* POST-CONDITIONS
* 		Account owner's name will be returned
**************************************************************************/
string Account::GetName() const
{
	return name;
}

/**************************************************************************
* Method GetAcctNum
*--------------------------------------------------------------------------
*	This method gets the account number
* RETURNS: integer value of the account's number
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account must be instantiated
*
* POST-CONDITIONS
* 		Account number will be returned
**************************************************************************/
int Account::GetAcctNum() const
{
	return acctNum;
}

/**************************************************************************
* Method GetOpenDate
*--------------------------------------------------------------------------
*	This method gets the date the account was created
* RETURNS: returns the date
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account must be instantiated
*
* POST-CONDITIONS
* 		Date the account was created will be returned
**************************************************************************/
Date Account::GetOpenDate() const
{
	return openDate;
}

/**************************************************************************
* Method GetCurrDate
*--------------------------------------------------------------------------
*	This method gets the current date
* RETURNS: returns the date
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account must be instantiated
*
* POST-CONDITIONS
* 		Current date will be returned
**************************************************************************/
Date Account::GetCurrDate() const
{
	return currentDate;
}

/**************************************************************************
* Method GetBalance
*--------------------------------------------------------------------------
*	This method gets the balance of the account
* RETURNS: account balance
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account must be instantiated
*
* POST-CONDITIONS
* 		Account balance will be returned
**************************************************************************/
double Account::GetBalance() const
{
	return balance;
}

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
Date Account::GetLastAccess() const
{
	return lastAccess;
}

/**************************************************************************
* Method Print
*--------------------------------------------------------------------------
*	This method prints out the account owner's name and the balance in it
* RETURNS: nothing
* -> outputs account name and balance to console
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account must be instantiated
*
* POST-CONDITIONS
* 		Nothing is returned, the account name and string are printed to
* 		the console.
**************************************************************************/
void Account::Print(ostream& os) const
{
	os << left
	   << setw(25) << name << '$'
	   << right
	   << fixed << setprecision(2)
	   << setw(10) << balance;
}

