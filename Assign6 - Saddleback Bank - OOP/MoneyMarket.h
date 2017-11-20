/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#ifndef MONEYMARKET_H_
#define MONEYMARKET_H_

#include <string>
#include <math.h>
#include <cstdlib>
#include "Date.h"
using namespace std;

// G L O B A L   C O N S T A N T S
/**************************************************************************
* Used for Fee Constants
* ------------------------------------------------------------------------
* MM_RATE 	  - Holds the interest rate for the MM account
* MM_WITHDRAW - Holds the cost of withdrawing from a MM account
**************************************************************************/
const double MM_RATE = 0.20;
const double MM_WITHDRAW = 1.50;

// C L A S S E S
/**************************************************************************
 * MoneyMarket
 *------------------------------------------------------------------------
 *	This class contains attributes of the date the account was last
 *	accessed; and methods for getting, setting, and displaying said
 *	attribute, as well as paying the interest monthly, and
 *	withdrawing funds.
 *------------------------------------------------------------------------
 *	Attributes:
 *		lastAccess		- Date of the last transaction
 *************************************************************************/
class MoneyMarket : public Saving
{
	public:
		MoneyMarket();
		MoneyMarket(string  newName,	  //IN - name to update to
				int     newAcctNum,   //IN - account number to update to
				double  newBalance,   //IN - balance value to update to
				int	 newMonth,		  //IN - month value to update to
				int 	 newDay,	  //IN - day value to update to
				int 	 newYear);	  //IN - year value to update to
		virtual ~MoneyMarket();

		//M U T A T O R S
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

		/******************************************************************
		* Method PayInterest
		*------------------------------------------------------------------
		*	This method calculates and pays the interest due
		* RETURNS: nothing
		* -> the balances is adjusted if interest is due
		******************************************************************/
		virtual void PayInterest(Date currDate);

		/******************************************************************
		* Method Withdraw
		*------------------------------------------------------------------
		*	This method performs a withdrawal from an account
		* RETURNS: boolean on if transaction was successful
		******************************************************************/
		virtual bool Withdraw(Date   currDate,     //IN - Current date
							  double withdrawAmt); //IN - withdraw amount

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


};

#endif /* MONEYMARKET_H_ */
