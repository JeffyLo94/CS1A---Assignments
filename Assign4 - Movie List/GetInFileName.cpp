/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Movie List
 * CLASS		: CS1B
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/19/14
 *************************************************************************/

#include "AssignFourHeader.h"

/*************************************************************************
* GetInFileName
 *------------------------------------------------------------------------
 *	This function prompts, reads, and checks the user to input the name
 *	of the string.
 * RETURNS: Input File Name
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 *		This function returns the user inputed input file name
 ************************************************************************/
string GetInFileName()
{
	// Variable List
	bool   invalidFile; //CALC - holds condition to determine if file is
						//       valid
	string inFileName;  //OUT  - Input File Name provided by user

	// Input - Promtps, Reads, and error checks for input file name
	do //while(invalidFile)
	{
		invalidFile = false;
		cout << "Please enter input file name (name.txt): ";
		getline(cin, inFileName);
		// Processing - Error checks for user to input ".txt" at the end
		if(inFileName.substr(inFileName.length()-4, 4) != ".txt")
		{
			cout << "** Error - this is not a .txt file **\n";
			invalidFile = true;
		}
	}while(invalidFile);

	return inFileName;
}

