/**************************************************************************
 * AUTHOR      : Duncan Bauer && Jeffrey Lo
 * STUDENT ID  : 290722 && 374780
 * LAB #9      : Implementing a Stack
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/23/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
 *
 * FUNCTION GetAndCheckOneInt
 *_________________________________________________________________________
 *  This function retrieves the command that the user would like to run
 *  - returns inputInt -> The command the user would like to execute
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		PROMPT     : String to prompt user with - Must be pre-defined
 * 		UP_BOUND   : Upper bound to check against input
 * 					 - Must be pre-defined
 * 		LOW_BOUND  : Lower bound to check against input
 * 					 - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		inputInt   : The number that the user entered is returned to main
 *************************************************************************/

int GetAndCheckOneInt(const string PROMPT,   // OUT  - String to prompt
											 //        user
					  const int    UP_BOUND, // CALC - Highest number the
											 //        input can be
					  const int    LOW_BOUND)// CALC - Lowest number the
											 //        input can be
{
	// DECLARATIONS
	// Variables
	int           inputInt; // CALC - The integer entered by the user
	bool          invalid;  // CALC - Checks whether the integer that was
				            //        input is valid
	string        errorMsg; // OUT  - First part of error message
	string        errorMsg2;// OUT  - Second part of error message

	// INITIALIZATIONS
	errorMsg  = "**** The number ";
	errorMsg2 = " is an invalid entry";

	// Will loop until the user enters an INTEGER between the upper and
	// lower bounds
	do
	{
		invalid = false;
		cout << PROMPT;
		// If the user inputs anything besides a number,  they will receive
		// an error message and will have to re-enter their input
		if(!(cin >> inputInt))
		{
			cout << endl;
			cout << "**** Please input a NUMBER between "
				 << LOW_BOUND << " and "
				 << UP_BOUND  << " ****\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			invalid = true;
		}
		// If the user enters an integer that is not between the upper and
		// lower bounds, they will be given an error message and be asked
		// to re-enter their input
		else if(inputInt < LOW_BOUND || inputInt > UP_BOUND)
		{
			cout << endl;
			ErrorWordWrapping(errorMsg,
							  errorMsg2,
							  inputInt,
							  cout);

			cout << "**** Please input a number between "
				 << LOW_BOUND << " and "
				 << UP_BOUND  << " ****\n";
			invalid = true;
		}

		if(invalid)
		{
			cout << endl;
			// Displays the option menu
			DisplayMenu(cout); // OUT - Output stream
		}
	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout << endl;

	return inputInt;
}
