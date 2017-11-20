/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374780
 * Assign #6	: Saddleback Bank - OOP
 * CLASS		: CS1B
 * SECTION		: M-Th : 8am - 1:05pm
 * DUE DATE		: 7/8/14
 *************************************************************************/

// Preprocessor Directives
#include "Header.h"

/**************************************************************************
 * Saddleback Bank - OOP
 *------------------------------------------------------------------------
 *	This program manages bank accounts, be it checking, savings, or money
 *	market accounts. The program keeps track of account information and
 *	performs transactions between the accounts
 *------------------------------------------------------------------------
 *	Input
 *		inputVariable  - <input description>
 *	Output
 *		outputVariable - <output description>
 *************************************************************************/
int main()
{
	// Variable List
	string inFileName;
	ofstream oFile;
	Account *head;

	// Initialize input file name
	inFileName = "input.txt";

	//Output - opens output file
	oFile.open("output.txt");

	//Outputs program header
	OutputProgramHeader(oFile, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	//Output - Displays table header
	DisplayTableHead(oFile);

	//InitializeAccounts - initializes the 3 accounts
	head = InitializeAccounts(oFile);

	//Start transaction - performs the transactions
	StartTransactions(head, inFileName, oFile);

	oFile.close();
	return 0;
}
