/**************************************************************************
 * AUTHOR      : Duncan Bauer && Jeffrey Lo
 * STUDENT ID  : 290722 && 374780
 * LAB #9      : Implementing a Stack
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/23/14
 *************************************************************************/
#include "Header.h"
#include <math.h>
/**************************************************************************
 *
 * FUNCTION ErrorWordWrapping
 *_________________________________________________________________________
 *  This function properly adjusts the error message if the user enters
 *  an extremely large number
 *  - returns nothing -> Formats the error message output
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		errorMsg    : First part of error message - Must be pre-defined
 * 		errorMsg2   : Second part of error message - Must be pre-defined
 * 		inputInt    : Integer input by the user - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		Outputs the error message with the proper formatting.
 *************************************************************************/
void ErrorWordWrapping(string   errorMsg, // OUT && CALC - First part of
										  // 			   error
					   string   errorMsg2,// OUT && CALC - Second part of
										  //  			   error
					   int      inputInt, // CALC        - Number entered
										  //               by user
					   ostream& os)       // OUT         - Output stream
{
	// DECLARATIONS
	// Constants
	/**********************************************************************
	 * MAX_LENGTH : Maximum amount of characters allowed per line
	 *********************************************************************/
	const int MAX_LENGTH = 43;

	// Variables
	int    lineSize1;   // CALC - Length of the first error message
	int    lineSize2;   // CALC - Length of the second error message
	int    lineSizeFull;// CALC - Length of the whole message
	int    inputLength; // CALC - Length of the command issued by the user
	int    spaceLeft;   // CALC - Amount of space left in the line
	int    index;		// CALC - Used to add to the line
	string lineStr;		// CALC - String to add to the line
	int    lineStrSize;	// CALC - Length of the string to be added
	int    letterCount;	// CALC - Amount of letters added to the string

	// INITIALIZATIONS
	letterCount  = 0;
	inputLength  = 0;
	lineSize1    = errorMsg.size();
	lineSize2    = errorMsg2.size();
	lineSizeFull = 0;

	// Calculates the length of the command input by the user
	if(inputInt != 0)
	{
		inputLength = floor(log10(abs(inputInt))) + 1;
	}
	else
	{
		inputLength = 1;
	}

	lineSizeFull = lineSize1 + inputLength + lineSize2;

	if(lineSizeFull > MAX_LENGTH)
	{
		spaceLeft = MAX_LENGTH - (lineSize1 + inputLength);
		// Loops until the line runs out of space
		for(index = 0; index < spaceLeft; index++)
		{
			if(errorMsg2[index] != ' ')
			{
				lineStr = lineStr + errorMsg2[index];
				letterCount++;
			}
			else
			{
				lineStrSize = lineStr.size();
				if(lineSize1 + inputLength + lineStrSize + 1
				   > 40)
				{
					os << errorMsg << inputInt << ' ' << endl;
					os << errorMsg2.substr(++letterCount,
										   lineSize2 - letterCount)
					   << endl;
				}
				else
				{
					os << errorMsg << inputInt << ' ' << lineStr
					   << endl;
					os << errorMsg2.substr(++letterCount,
										   lineSize2 - letterCount)
					   << endl;
				}
			}
		}
	}
	else
	{
		// Changes the formatting for a command less than 0 being entered
		if(inputInt < 0)
		{
			os << errorMsg << inputInt << errorMsg2
			   << right    << setw(12 - inputLength - 1) << " ****\n";
		}
		else
		{
			os << errorMsg << inputInt << errorMsg2
			   << right    << setw(12 - inputLength) << " ****\n";
		}
	}
}
