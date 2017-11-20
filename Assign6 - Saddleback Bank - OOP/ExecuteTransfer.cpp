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
* FUNCTION ExecuteTransfer
*--------------------------------------------------------------------------
*	This function obtains the transaction information from a file
*	and performs it.
* RETURNS: nothing
* -> account information is adjusted
**************************************************************************/
void ExecuteTransfer(Account* targetAcct,
					 Account* transferAcct,
					 double   amount,
					 Date     currentDate,
					 ostream &os)
{
	bool goodTransfer;
	string errorMsg;
	string errorMsg2;
	ostringstream ss;
	ostringstream oss;

	goodTransfer = transferAcct->Transfer(currentDate,targetAcct,amount);

	if(!goodTransfer)
	{
		Display(targetAcct, "Transfer", amount, transferAcct->GetAcctNum(),
				transferAcct->GetBalance(), os);

		ss << "TRANSFER FROM " << transferAcct->GetAcctNum()
		   << " TO " << targetAcct->GetAcctNum() << " NOT ALLOWED!";

		//converts the error message to a string
		errorMsg = ss.str();

		oss   << "DUE TO INSUFFICEIENT FUNDS";

		//converts the error message to a string
		errorMsg2 = oss.str();

		//IF checks in the first error message is longer the the second
		//   error message. The length will be adjusted according to
		//   the longer error message
		os << left;
		if (errorMsg.length() > errorMsg2.length())
		{
			//OUTPUT - Error message with padding to message 1
			os << "**** "
				 << setw(errorMsg.length()) << errorMsg
				 << " ****";
			os << "\n**** "
			   << setw(errorMsg.length()) << errorMsg2
			   << right << " ****";
		}
		else
		{
			//OUTPUT - Error message with padding to message 2
			os << "**** "
				 << setw(errorMsg2.length()) << errorMsg
				 << " ****";
			os << "\n**** "
				 << setw(errorMsg2.length()) << errorMsg2
				 << " ****";
		}//End if else (errorMsg.length() > errorMsg2.length())

		os << endl;
	}
	else
	{
		Display(targetAcct, "Transfer", amount, transferAcct->GetAcctNum(),
				transferAcct->GetBalance(), os);

	}
}
