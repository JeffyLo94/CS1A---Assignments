/*************************************************************************
 * AUTHORS		: Jeffrey Lo & John Zavala
 * STUDENT IDs	: 374781     & 100647
 * LAB #4		: Functions - Excercise - Coin Flips
 * CLASS		: CS1B
 * SECTION		: M-Th: 8am - 1:50pm
 * DUE DATE 	: 6/5/2014
 *************************************************************************/

#include "CoinFlipHeader.h"

/*************************************************************************
 * FUNCTION GetUserNameAndGender
 *------------------------------------------------------------------------
 * This function gets the user name from the user and gender. Once it
 * receives the gender it also does an error check to make sure the
 * input is a valid gender.
 *
 * 	- Returns first name, last name, and gender via reference.
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	no pre-conditions.
 *
 * POST-CONDITIONS
 *		userFirstName : input entered by user
 *		userLastName  : input entered by user
 *		gender        : input entered by user
 ************************************************************************/
void GetUserNameAndGender(string &userFirstName, //OUT - returns first name
												 //     to calling function
						  string &userLastName,  //OUT - returns last name
						  	  	  	  	  	  	 //     to calling function
						  char   &gender)        //OUT - returns gender to
												 //      calling function
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * COL_WIDTH : holds value for setw size
	 ********************************************************************/
	const int COL_WIDTH = 27;

	// INPUT - Prompts user for name and reads in first name and last name
	cout << left;
	cout << setw(COL_WIDTH) << "What is your name?";
	cin  >> userFirstName >> userLastName;
	cin.ignore(1000, '\n');

	// PROCESSING - Error Checks to guarantee valid gender input
	do
	{
		// INPUT - Prompts for and reads in user gender
		cout << setw(COL_WIDTH) << "What is your gender (m/f):";
		cin.get(gender);
		cin.ignore(1000, '\n');

		// PROCESSING - makes gender input upper case
		gender = toupper(gender);

		// PROCESSING - Outputs error message if gender input is invalid
		if(gender != 'M' && gender != 'F')
		{
			cout << "** INVALID INPUT - Please input 'M' or 'F' **\n";
		}
	}while(gender != 'M' && gender != 'F');
	cout << endl;
	cout << right;
}



