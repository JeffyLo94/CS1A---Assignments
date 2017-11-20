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
* FUNCTION GetFileName
*--------------------------------------------------------------------------
*	This function prompts, reads, and checks the user to input for file
*	name
* RETURNS: the file name
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		fileType   : Determines the type of file the name is for.
*
* POST-CONDITIONS
* 		Returns file name provided by user.
**************************************************************************/
string GetFileName(char fileType) //IN - Determines the type of file the
								  //     file name is for
{
	// DECLARATIONS
	// Variable List
	bool   invalidFile; //CALC      - holds condition to determine if file
						//            is valid
	string fileName;    //IN & OUT  - Holds the file name input by user

	// Processing - Gets File Name
	do //while(invalidFile)
	{
		invalidFile = false;
		cout << "What ";

		// Processing - determines if file is for input or output
		if(toupper(fileType) == 'I')
		{
			cout << "input";
		}
		else if (toupper(fileType) == 'O')
		{
			cout << "output";
		}
		else
		{
			cout << "\n** ERROR - File type undefined **\n";
		}
		cout << " file would you like to use "
			 << "(type d for default file)? ";
		getline(cin, fileName);

		// Processing - Error checks for user to input ".txt" at the end or
		//              if user wants to use default files
		if(toupper(fileName[0]) == 'D')
		{
			if(toupper(fileType) == 'I')
			{
				fileName = "DefaultInputFile.txt";
			}
			else if (toupper(fileType) == 'O')
			{
				fileName = "DefaultOutputFile.txt";
			}// END if (toupper(fileType) == "I")
		}// END if(toupper(fileName[0]) == "D")
		else if(fileName.substr(fileName.length()-4, 4) != ".txt")
		{
			cout << "** Error - file missing .txt extension **\n";
			invalidFile = true;
		}
	}while(invalidFile);

	return fileName;
}
