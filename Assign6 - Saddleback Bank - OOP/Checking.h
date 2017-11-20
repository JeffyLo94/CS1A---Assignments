/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#ifndef CHECKING_H_
#define CHECKING_H_

#include <string>
#include <math.h>
#include <cstdlib>
#include "Date.h"
using namespace std;

// G L O B A L   C O N S T A N T S
/**************************************************************************
* Used for Fee Constants
* ------------------------------------------------------------------------
* OVERDRAW_FEE - Holds the penalty fee for overdrawing an account
**************************************************************************/
const float OVERDRAW_FEE = 20.00;

// C L A S S E S
/**************************************************************************
 * Checking
 *------------------------------------------------------------------------
 *	This class contains attributes of the date the account was last
 *	accessed; and methods for getting, setting, and displaying said
 *	attribute, as well as checking if the account has been overdrawn, and
 *	withdrawing funds.
 *------------------------------------------------------------------------
 *	Attributes:
 *		lastAccess		- Date of the last transaction
 *************************************************************************/
class Checking : public Account
{
	public:
		Checking();
		Checking(string  newName,	  //IN - name to update to
				 int     newAcctNum,  //IN - account number to update to
				 double  newBalance,  //IN - balance value to update to
				 int	 newMonth,	  //IN - month value to update to
				 int 	 newDay,	  //IN - day value to update to
				 int 	 newYear);	  //IN - year value to update to
		virtual ~Checking();

		//M U T A T O R S
		/******************************************************************
		* Method OverdrawPenalty
		*------------------------------------------------------------------
		*	This method calculates the penalization amount for an
		*	overdrawn account
		* RETURNS: boolean on if transaction was successful
		******************************************************************/
		void OverdrawPenalty(Date currDate);

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

		// A C C E S S O R S
		/******************************************************************
		* Method GetLastAccess
		*------------------------------------------------------------------
		*	This method gets the date of the latest transaction
		* RETURNS: returns the date
		******************************************************************/
		Date GetLastAccess() const;

};


#endif /* CHECKING_H_ */
