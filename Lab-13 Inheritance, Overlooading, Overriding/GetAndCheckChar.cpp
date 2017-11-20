/*******************************************************************************
 *	AUTHOR		: Anthony Ramirez & Jeffrey Lo
 *	STU ID#		: 369397		  & 374780
 *	LAB # 13  	: Inheritance, Overloading, Overriding
 *	CLASS   	: CS1B
 *	SECTION 	: 8-1PM Monday-Thursday
 *	DUE DATE 	: 6/26/14
 ******************************************************************************/

#include "Header.h"

/**************************************************************************
* FUNCTION GetAndCheckChar
*--------------------------------------------------------------------------
*	This function gets and checks a user inputed character and compares it
*	to two specified bounds
* RETURNS: valid user input character
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		prompt	   : Input prompt must be predefined
* 		boundOne   : First comparison char must be predefined
* 		boundTwo   : Second comparison char must be predefined
*
* POST-CONDITIONS
* 		Returns a valid character input by user
**************************************************************************/
char GetAndCheckChar(string prompt,		//IN - Input Prompt
					 char   boundOne,   //IN - First comparison char
					 char   boundTwo)   //IN - Second comparison char
{
	// DECLARATIONS
	// Variables
	char userInput;	//IN - user input
	bool invalid;	//CALC - boolean determining if input was invalid

	invalid = true;

	// Processing - Error checks for invalid character
	do
	{
		// Output - prompts user for character
		cout << prompt;
		cin.get(userInput);
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		userInput = toupper(userInput);
		// Processing - compares input to boundaries
		if(userInput != boundOne && userInput != boundTwo)
		{
			cout << "**** " <<userInput << " is an invalid entry ****\n";
			cout << "**** Please input "
				 << boundOne << " or "
				 << boundTwo  << "   ****\n\n";
			invalid = true;
		}
		else
		{
			invalid = false;
		}
	}while(invalid);

	cout << endl;

	return userInput;
}
