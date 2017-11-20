/*******************************************************************************
 *	AUTHOR		: Anthony Ramirez & Jeffrey Lo
 *	STU ID#		: 369397		  & 374780
 *	LAB # 13  	: Inheritance, Overloading, Overriding
 *	CLASS   	: CS1B
 *	SECTION 	: 8-1PM Monday-Thursday
 *	DUE DATE 	: 6/26/14
 ******************************************************************************/
#include "Header.h"
#include <math.h>
/**************************************************************************
 * FUNCTION GetFloat
 *------------------------------------------------------------------------
 *  This function retrieves the command that the user would like to run
 *  - returns inputFloat -> The command the user would like to execute
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		PROMPT     : String to prompt user with - Must be predefined
 * 		UP_BOUND   : Upper bound to check against input
 * 					 - Must be predefined
 * 		LOW_BOUND  : Lower bound to check against input
 * 					 - Must be predefined
 *
 * POST-CONDITIONS
 * 		inputFloat : The number that the user entered is returned to main
 *************************************************************************/
float GetFloat(const string PROMPT,   	  // OUT  - String to prompt
										  //        user
			   const int    UP_BOUND, 	  // CALC - Highest number the
										  //        input can be
			   const int    LOW_BOUND,	  // CALC - Lowest number the
										  //        input can be
			   const char   menuVersion)  // IN   - Determines menu display
{
	// DECLARATIONS
	// Variables
	float         inputFloat; // CALC - The integer entered by the user
	bool          invalid;    // CALC - Checks whether the integer that was
				              //        input is valid
	string        errorMsg;   // OUT  - First part of error message
	string        errorMsg2;  // OUT  - Second part of error message
	string        errPad;     // OUT  - Padding for error message
	ostringstream ss;		  // OUT  - converts error message to string
	ostringstream os;		  // OUT  - converts error message to string

	// INITIALIZATIONS
	errPad    = "****";
	errorMsg  = "The number ";
	errorMsg2 = " is an invalid entry";

	// Processing - Will loop until the user enters an INTEGER between the
	//  			 upper and lower bounds
	do
	{
		invalid = false;
		cout << PROMPT;
		// If the user inputs anything besides a number,  they will receive
		// an error message and will have to re-enter their input
		if(!(cin >> inputFloat))
		{
			cout << endl;
			cout << "**** Please input a NUMBER between "
				 << LOW_BOUND << " and "
				 << UP_BOUND  << " ****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			invalid = true;
		}
		// If the user enters an integer that is not between the upper and
		// lower bounds, they will be given an error message and be asked
		// to re-enter their input
		else if(inputFloat < LOW_BOUND || inputFloat > UP_BOUND)
		{
			ss << "The number " << inputFloat << " is an invalid entry";

			//converts the error message to a string
			errorMsg = ss.str();

			os   << "Please input a number between " << LOW_BOUND
				 << " and " << UP_BOUND;

			//converts the error message to a string
			errorMsg2 = os.str();

			//IF checks in the first error message is longer the the second
			//   error message. The length will be adjusted according to
			//   the longer error message
			cout << left;
			if (errorMsg.length() > errorMsg2.length())
			{
				//OUTPUT - Error message with padding to message 1
				cout << "\n**** "
					 << setw(errorMsg.length()) << errorMsg
					 << " ****";
				cout << "\n**** "
					 << setw(errorMsg.length()) << errorMsg2
					 << " ****";
			}
			else
			{
				//OUTPUT - Error message with padding to message 2
				cout << "\n**** "
					 << setw(errorMsg2.length()) << errorMsg
					 << " ****";
				cout << "\n**** "
					 << setw(errorMsg2.length()) << errorMsg2
					 << " ****";
			}
			cout << right;
			invalid = true;

			//Initialize string to empty
			ss.str("");

			//Initialize string to empty
			os.str("");

			cin.ignore(numeric_limits<streamsize>::max(),'\n');

			invalid = true;
		}

		if(invalid)
		{
			cout << endl;
			// Displays the option menu
			DisplayMenu(cout, menuVersion); // OUT - Output stream
		}
	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout << endl;

	return inputFloat;
}
