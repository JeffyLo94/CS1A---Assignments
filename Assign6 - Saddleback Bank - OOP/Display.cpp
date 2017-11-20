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
* FUNCTION Display
*--------------------------------------------------------------------------
*	This function outputs the transaction info to a specified area.
* RETURNS: the head of the list created
**************************************************************************/
void Display(Account *node,
			 string transType,
			 double amount,
			 int    transferNum,
			 double transferBal,
			 ostream &os)
{
	//Outputs account info
	os << left;
	os << setw(COL_ONE) << transType;
	os << setw(COL_TWO) << node->GetCurrDate().ToString();
	os << setw(COL_THREE) << node->GetAcctNum();
	os << setw(COL_FOUR) << node->GetName();
	os << '$' << right << fixed << setprecision(2)
	   << setw(COL_FIVE-3) << amount;
	os << setw(3) << '$'
	   << setw(COL_SIX-3)  << node->GetBalance();
	if(transType == "Transfer")
	{
		os << setw(COL_SEVEN) << transferNum;
		os << setw(COL_EIGHT) << transferBal;
	}
	os << endl;
}

