/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374780
 * Assign #6	: Saddleback Bank - OOP
 * CLASS		: CS1B
 * SECTION		: M-Th : 8am - 1:05pm
 * DUE DATE		: 7/8/14
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <limits>
#include "Account.h"
#include "Date.h"
#include "Checking.h"
#include "Saving.h"
#include "MoneyMarket.h"
using namespace std;

// G L O B A L   C O N S T A N T S
/**************************************************************************
* CONSTANTS
* ------------------------------------------------------------------------
* Used for Program Header
* ------------------------------------------------------------------------
* PROGRAMMER - Name of programmer
* CLASS      - Class name
* CLASS_TIME - Class time
* AS_NUM     - Assignment number
* AS_NAME    - Assignment Name
* AS_TYPE    - Assignment Type
* ------------------------------------------------------------------------
* Used for Table
* ------------------------------------------------------------------------
* COL_ONE	 - first column width
* COL_TWO	 - second column width
* COL_THREE  - third column width
* COL_FOUR   - fourth column width
* COL_FIVE   - fifth column width
* COL_SIX	 - sixth column width
* COL_SEVEN  - seventh column width
* COL_EIGHT  - eighth column width
**************************************************************************/
//Used for Program Header
const string PROGRAMMER = "Jeffrey Lo";
const string CLASS      = "CS1B";
const string CLASS_TIME = "M-Th 8am - 1pm";
const int    AS_NUM     = 6;
const string AS_NAME    = "Saddleback Bank - OOP";
const char   AS_TYPE    = 'A';
//Used for Table
const int    COL_ONE    = 15;
const int    COL_TWO    = 13;
const int    COL_THREE  = 8;
const int    COL_FOUR   = 22;
const int    COL_FIVE   = 13;
const int    COL_SIX    = 15;
const int    COL_SEVEN  = 13;
const int    COL_EIGHT  = 16;


// E N U M S   &   T Y P E D E F S


// S T R U C T S
/**************************************************************************
* STRUCT NAME : <description>
* ------------------------------------------------------------------------
* Members:
* memberName - <description>
**************************************************************************/


// P R O T O T Y P E S
/**************************************************************************
 * OutputProgramHeader
 *------------------------------------------------------------------------
 *	This function outputs the header for the assignment.
 * RETURNS: nothing
 * -> Displays program header
 *************************************************************************/
void OutputProgramHeader(ostream& outOption, //IN - Output stream option
						 string  programmer, //IN - Programmer Name
				         string  className,  //IN - Class
				         string  section,    //IN - Class time
				         int     asNum,      //IN - Assignment Number
				         string  asName,     //IN - Assignment Name
					     char    asType);     //IN - Assignment Type

/**************************************************************************
* FUNCTION DisplayTableHead
*--------------------------------------------------------------------------
*	This function outputs the table header
* RETURNS: nothing
* -> Table header is output
**************************************************************************/
void DisplayTableHead(ostream& os);   //IN - Output stream option

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
			 ostream &os);            //IN - Output stream option

/**************************************************************************
 * FUNCTION InitializeAccounts
 *-------------------------------------------------------------------------
 *	This function Initializes the three accounts
 * RETURNS: the head of the list created
 *************************************************************************/
Account *InitializeAccounts(ostream &os);

/**************************************************************************
* FUNCTION StartTransactions
*--------------------------------------------------------------------------
*	This function obtains the transaction information from a file
*	and performs it.
* RETURNS: the head of the list created
**************************************************************************/
void StartTransactions(Account* head,
					   string inFileName,
					   ostream &os);

/**************************************************************************
* FUNCTION SearchByAcctNum
*--------------------------------------------------------------------------
*	This function searches through a list for an account of a specific
*	number passed in thru the parameters
* RETURNS: the found account
**************************************************************************/
Account* SearchByAcctNum(Account* head,
					     int      keyNum);

/**************************************************************************
* FUNCTION ExecuteTransaction
*--------------------------------------------------------------------------
*	This function obtains the transaction information from a file
*	and performs it.
* RETURNS: nothing
* -> account information is adjusted
**************************************************************************/
void ExecuteTransaction(Account* targetAcct,
						double   amount,
						Date     currDate,
						string transactType,
						ostream &os);

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
					 ostream &os);

#endif /* HEADER_H_ */
