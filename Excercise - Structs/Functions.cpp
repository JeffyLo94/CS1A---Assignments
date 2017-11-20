/***********************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Title		: Personal Exercise - Structs
 * CLASS		: CS1B
 * SECTION		: MTh: 10am
 * DATE 		: 3/6/14
 ************************************************************************/

#include "StructExerciseHeader.h"

/*************************************************************************
 * GetUserInt
 * 	Obtains an integer from user
 * 	Returns: inputInt (user inputed integer)
 *************************************************************************/
int GetUserInt(const int UP_BOUND, const int LOW_BOUND)
{
	int inputInt; //IN - User input integer

	// Processing - Gets user input and checks if within parameters
	do
	{
		cout << "Which option would you like to perform? ("
			 << LOW_BOUND
			 << "-"
			 << UP_BOUND
			 << "): ";
		cin  >> inputInt;
		if(inputInt > UP_BOUND && inputInt < LOW_BOUND)
		{
			cout << "**INPUT ERROR - input not within bounds**\n";
		}
	}while(inputInt > UP_BOUND && inputInt < LOW_BOUND);

	// Processing - clean up
	cin.ignore(1000,'\n');
	cout << endl << endl;

	return inputInt - 1;
}
