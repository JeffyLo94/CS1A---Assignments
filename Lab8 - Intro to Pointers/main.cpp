/**************************************************************************
 * AUTHOR		: Jeffrey Lo & Andrea Lamore
 * STUDENT ID	: 374781     & 256144
 * LAB #8		: Intro to Pointers
 * CLASS		: CS1B
 * SECTION		: MTh: 8am
 * DUE DATE		: 6/8/14
 *************************************************************************/

#include "LabEightHeader.h"

/**************************************************************************
 * Lab #8 - Intro To Pointers
 * ------------------------------------------------------------------------
 * 	This program accepts two integers from a user and finds the sum and
 * 	product of these two integers. This program will loop and terminate
 * 	when the first input is -999. It also uses one dynamic pointer, one
 * 	static pointer, and a variable to hold all the integers.
 * ------------------------------------------------------------------------
 * Input & Output
 * 	someNum    : integer variable that stores the first integer
 * 	staticPtr  : pointer to the static integer variable
 * 	dynamicPtr : dynamically allocated pointer variable for second integer
 * 				 inside while loop
 *************************************************************************/
int main()
{
   /***********************************************************************
	* C O N S T A N T S
	* --------------------------------------------------------------------
	* Used for Program Header
	* --------------------------------------------------------------------
	* PROGRAMMER - Name of programmer
	* CLASS      - Class name
	* CLASS_TIME - Class time
	* AS_NUM     - Assignment number
	* AS_NAME    - Assignment Name
	* AS_TYPE    - Assignment Type
	* --------------------------------------------------------------------
	* Used for Formatting
	* --------------------------------------------------------------------
	* OUT_WIDTH  - Holds setw size for outputs
	* IN_WIDTH   - Holds setw size for inputs
	**********************************************************************/
	// Program Header Constants
	const string PROGRAMMER = "Jeffrey Lo & Andrea Lamore";
	const string CLASS      = "CS1B";
	const string CLASS_TIME = "M-Th 8am - 1pm";
	const int    AS_NUM     = 8;
	const string AS_NAME    = "Intro to Pointers";
	const char   AS_TYPE    = 'L';
	// Formatting Constants
	const int OUT_WIDTH = 16;
	const int IN_WIDTH  = 44;

	// Variable List
	int someNum;
	int *staticPtr;
	int *dynamicPtr;

	// Initializing pointers
	dynamicPtr = new int;
	staticPtr = &someNum;

	// OutputProgramHeader - Outputs program header
	OutputProgramHeader(cout, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	// Input - Prompts and reads first integer value from user
	cout << left;
	cout << setw(IN_WIDTH)
		 << "Input the first value (enter -999 to exit): ";
	cin  >> *staticPtr;

	/**********************************************************************
	 * Processing
	 * --------------------------------------------------------------------
	 * 	Takes in second number and outputs sum and product of two integers,
	 * 	so long as the first number is not -999 and the dynamic pointer is
	 * 	not NULL.
	 *********************************************************************/
	while(someNum != -999 && dynamicPtr != NULL)
	{
		// Input - Prompts and reads second number
		cout << setw(IN_WIDTH)
			 << "Input the second value: ";
		cin  >> *dynamicPtr;
		cout << endl;

		// Output- Outputs the sum of the two numbers
		cout << setw(OUT_WIDTH)          << "The sum is:"
			 << *dynamicPtr + *staticPtr << endl;

		// Output- Outputs the product of the two numbers
		cout << setw(OUT_WIDTH) << "The product is:"
			 << *dynamicPtr * *staticPtr
			 << endl			<< endl;

		// Input - Prompts and reads from the user the first number
		cout << "Input the first value (enter -999 to exit): ";
		cin  >> *staticPtr;
	}// End while(someNum != -999 && dynamicPtr != NULL)

	// Processing - deletes pointer, thereby avoiding memory leak
	delete dynamicPtr;

	return 0;
}

