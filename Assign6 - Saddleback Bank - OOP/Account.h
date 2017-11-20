/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

// Preprocessor Directives
#include <string>
#include "Date.h"
using namespace std;

// E N U M S   &   T Y P E D E F S


// C L A S S E S
/**************************************************************************
 * Account
 *------------------------------------------------------------------------
 *	This class contains attributes of the account owner’s name, account
 *	number, account opening date and account balance; and methods for
 *	getting, setting and display the name, number, date and balance;
 *	depositing, withdrawing, and transferring funds.
 *------------------------------------------------------------------------
 *	Attributes:
 *		name		- Account owner's name
 *		acctNum		- Account number
 *		openDate	- Date Account was opened
 *		balance		- Current Balance of account
 *		next		- Pointer to next node in list
 *		prev		- Pointer to previous node in list
 *************************************************************************/
class Account
{
	public:
	/**********************************************************************
	* Method Account
	*----------------------------------------------------------------------
	*	This method is the default constructor.
	* RETURNS: nothing
	* -> Initializes data in Account object
	**********************************************************************/
	Account();

	/**********************************************************************
	* Method Account
	*----------------------------------------------------------------------
	*	This method is another constructor that will initialize the Account
	*	 object attributes to the parameter values passed in
	* RETURNS: nothing
	* -> sets variables in method to a value
	**********************************************************************/
	Account(string  newName,	  //IN - name to update to
			int     newAcctNum,   //IN - account number to update to
			double  newBalance,   //IN - balance value to update to
			int		newMonth,	  //IN - month value to update to
			int 	newDay,		  //IN - day value to update to
			int 	newYear);	  //IN - year value to update to

	/**********************************************************************
	* Method Destructor
	*----------------------------------------------------------------------
	*	This method is the destructor.
	* RETURNS: nothing
	**********************************************************************/
	virtual ~Account();

	// M U T A T O R S
	/**********************************************************************
	* Method SetAll
	*----------------------------------------------------------------------
	*	This method sets all the data in the Account object
	* RETURNS: nothing
	* -> sets variables in method to a value
	**********************************************************************/
	void SetAll(string  newName,	  //IN - name to update to
				int     newAcctNum,   //IN - account number to update to
				double  newBalance,   //IN - balance value to update to
				int 	newMonth,	  //IN - month value to update to
				int 	newDay,		  //IN - day value to update to
				int 	newYear);	  //IN - year value to update to

	/**********************************************************************
	* Method SetName
	*----------------------------------------------------------------------
	*	This method sets the account owner's name in the Account object
	* RETURNS: nothing
	* -> sets account owner's name in method to a value
	**********************************************************************/
	void SetName(string newName);	  //IN - name to update to

	/**********************************************************************
	* Method SetAcctNum
	*----------------------------------------------------------------------
	*	This method sets the account number in the Account object
	* RETURNS: nothing
	* -> sets account number in method to a value
	**********************************************************************/
	void SetAcctNum(int newAcctNum);  //IN - account number to update to

	/**********************************************************************
	* Method SetOpenDate
	*----------------------------------------------------------------------
	*	This method sets the date the account is opened in the Account
	*	object
	* RETURNS: nothing
	* -> sets account number in method to a value
	**********************************************************************/
	void SetOpenDate(int 	 newMonth,	//IN - month value to update to
					 int 	 newDay,	//IN - day value to update to
					 int 	 newYear);	//IN - year value to update to

	/**********************************************************************
	* Method SetCurrDate
	*----------------------------------------------------------------------
	*	This method sets the date of the current transaction in the Account
	*	object
	* RETURNS: nothing
	* -> sets account number in method to a value
	**********************************************************************/
	void SetCurrDate(int 	 newMonth,	 //IN - month value to update to
					 int 	 newDay,	 //IN - day value to update to
					 int 	 newYear);	 //IN - year value to update to

	/**********************************************************************
	* Method SetLastAccess
	*--------------------------------------------------------------------------
	*	This method sets date of the last access with the passed in parameters
	* RETURNS: nothing
	* -> sets lastAccess to a specified date
	**********************************************************************/
	void SetLastAccess(int newMonth, //IN - month value to update to
								 int newDay,   //IN - day value to update to
								 int newYear); //IN - year value to update to

	/**********************************************************************
	* Method SetLastAccess
	*--------------------------------------------------------------------------
	*	This method sets date of the last access with the passed in parameters
	* RETURNS: nothing
	* -> sets lastAccess to a specified date
	**********************************************************************/
	void SetLastAccess(Date newDate); // IN - new date to be updated to

	/**********************************************************************
	* Method SetBal
	*----------------------------------------------------------------------
	*	This method sets the account balance in the Account object
	* RETURNS: nothing
	* -> sets account balance in method to a value
	**********************************************************************/
	void SetBal(double newBalance);   //IN - account balance to update to

	/**********************************************************************
	* Method Deposit
	*----------------------------------------------------------------------
	*	This method deposits a parameter value into the total balance of
	*	the account
	* RETURNS: nothing
	* -> adds to the balance in method to a value
	**********************************************************************/
	virtual void Deposit(Date   currDate,     //IN - Current date
				 double depositAmt);  //IN - Deposit amount

	/**********************************************************************
	* Method Transfer
	*----------------------------------------------------------------------
	*	This method performs a transfer of funds from one account to
	*	another
	* RETURNS: boolean on if transaction was successful
	**********************************************************************/
	virtual bool Transfer(Date   currDate,     //IN - Current date
				  Account* transferTo,  //IN - Account to transfer to
				  double transferAmt); //IN - amount to be transfered

	/**********************************************************************
	* Method Withdraw
	*----------------------------------------------------------------------
	*	This method performs a withdrawal from an account
	* RETURNS: nothing
	* -> withdraws specified amount from account
	**********************************************************************/
	virtual bool Withdraw(Date   currDate,
						  double withdrawAmt); //IN - withdraw amount

	// A C C E S S O R S
	/**********************************************************************
	* Method GetName
	*----------------------------------------------------------------------
	*	This method gets the account name
	* RETURNS: string w/ account owner's name
	**********************************************************************/
	string GetName() 			const;

	/**********************************************************************
	* Method GetAcctNum
	*----------------------------------------------------------------------
	*	This method gets the account number
	* RETURNS: integer value of the account's number
	**********************************************************************/
	int    GetAcctNum() 		const;

	/**********************************************************************
	* Method GetDate
	*----------------------------------------------------------------------
	*	This method gets the date the account was created
	* RETURNS: returns the date
	**********************************************************************/
	Date   GetOpenDate()			const;

	/**********************************************************************
	* Method GetDate
	*----------------------------------------------------------------------
	*	This method gets the date of the last transaction
	* RETURNS: returns the date
	**********************************************************************/
	Date   GetCurrDate()		const;

	/**********************************************************************
	* Method GetBalance
	*----------------------------------------------------------------------
	*	This method gets the balance of the account
	* RETURNS: account balance
	**********************************************************************/
	double GetBalance() 		const;

	/******************************************************************
	* Method GetLastAccess
	*------------------------------------------------------------------
	*	This method gets the date of the latest transaction
	* RETURNS: returns the date
	******************************************************************/
	Date GetLastAccess() const;


	/**********************************************************************
	* Method Print
	*----------------------------------------------------------------------
	*	This method prints out the account owner's name and the balance in
	*	it
	* RETURNS: nothing
	* -> outputs account name and balance to console
	**********************************************************************/
	void   Print(ostream& os)	const;


	string ToString()			const;

	// Public Attributes
	Account* next;
	Account* prev;

	protected:
		string  name;
		int	    acctNum;
		Date    openDate;
		Date	currentDate;
		Date    lastAccess;
		double  balance;
};

#endif /* ACCOUNT_H_ */
