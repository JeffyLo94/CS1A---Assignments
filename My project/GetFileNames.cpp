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
* FUNCTION GetFileNames
*--------------------------------------------------------------------------
*	This function prompts, reads, and checks the user to input for an
*	input file name and an output file name
* RETURNS: inFileName and outFileName
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		inFileName   : The input file name provided by user is returned
* 		outFileName  : The output file name provided by user is returned
**************************************************************************/
void GetFileNames(string &inFileName,   //OUT - input file name
				  string &outFileName)  //OUT - output file name
{
	// DECLARATIONS
	// Variable List
	bool   invalidFile; //CALC - holds condition to determine if file is
						//       valid

	// Processing - Gets Input File Name
	do //while(invalidFile)
	{
		invalidFile = false;
		cout << "What input file would you like to use "
			 << "(type d for default file)? ";
		getline(cin, inFileName);
		// Processing - Error checks for user to input ".txt" at the end
		if(inFileName == "d" || inFileName == "D")
		{
			inFileName = "DefaultInputFile.txt";
		}
		else if(inFileName.substr(inFileName.length()-4, 4) != ".txt")
		{
			cout << "** Error - file missing .txt extension **\n";
			invalidFile = true;
		}
	}while(invalidFile);

	// Processing - Gets - Output File Name
	do //while(invalidFile)
	{
		invalidFile = false;
		cout << "What output file would you like to use "
			 << "(type d for default file)? ";
		getline(cin, outFileName);
		// Processing - Error checks for user to input ".txt" at the end
		if(outFileName == "d" || outFileName == "D")
		{
			outFileName = "DefaultInputFile.txt";
		}
		else if(outFileName.substr(outFileName.length()-4, 4) != ".txt")
		{
			cout << "** Error - file missing .txt extension **\n";
			invalidFile = true;
		}
	}while(invalidFile);
}
