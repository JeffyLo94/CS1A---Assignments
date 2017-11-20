/**************************************************************************
 * AUTHOR      : Jeffrey Lo && Owen Mack
 * STUDENT ID  : 374780     && 112325
 * LAB #10     : Implementing a Queue
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/25/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
 *
 * FUNCTION GetPersonInput
 *_________________________________________________________________________
 *  This function retrieves the name of the input and output files from the
 *  user
 *  - returns nothing ->
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		*perPtr    : Points towards the memory in which the info will be
 * 					 stored - Must be pre-defined
 *
 * POST-CONDITIONS
 * 		Stores the info into the memory allocated by perPtr.
 *************************************************************************/
void GetPersonInput(PersonInfo *perPtr) // CALC - Points towards the
										//        memory in which the info
										//        will be stored
{
	// DECLARATIONS
	// Constants
	const int IN_WIDTH = 14; // OUT - Used as padding when prompting the
							 //       user for input

	// Variables
	bool invalidChar; // CALC - Used to verify a valid gender input
	bool invalidInt;  // CALC - Used to verify a valid age input

	// Output - prompts user
	cout << "Who would you like to add?\n";

	cout << left;
	cout << setw(IN_WIDTH) << "Enter Name:";
	getline(cin, perPtr -> name);

	// Processing - Error checks user input for gender
	do
	{
		invalidChar = false;

		cout << setw(IN_WIDTH) << "Enter Gender:";
		cin.get(perPtr -> gender);
		perPtr -> gender = toupper(perPtr -> gender);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if(perPtr -> gender != 'M' && perPtr -> gender != 'F')
		{
			cout << "Please enter M or F!\n";
			invalidChar = true;
		}
	}while(invalidChar);

	// Processing - Error checks user input for age
	do
	{
		invalidInt = false;

		cout << setw(IN_WIDTH) << "Enter Age:";
		if(!(cin >> perPtr -> age))
		{
			cout << "Please enter a valid age!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalidInt = true;
		}
		else if(perPtr -> age < 0 || perPtr -> age > 150)
		{
			cout << perPtr -> age
				 << " is an invalid entry - please try again!\n";
			invalidInt = true;
		}
	}while(invalidInt);

	cout << right << endl;
}
