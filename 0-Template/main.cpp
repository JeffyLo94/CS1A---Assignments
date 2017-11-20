/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * LAB #8		: Eclipse Tutorial
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 3/4/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * ECLIPSE TUTORIAL
 *________________________________________________________________________
 * This program will output the class heading
 *________________________________________________________________________
 * INPUT:
 *    <There is no input for this program - output data is obtained
 *   through the constants.>
 *
 * OUTPUT:
 * 	<This program will output a class heading>
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMER : Programmer's Name
	 * CLASS     : Student's Course
	 * SECTION   : Class Days and Times
	 * LAB_NUM   : Lab Number (specific to this lab)
	 * LAB_NAME  : Title of the Lab
	 ********************************************************************/
	const char PROGRAMMER[30] = "Jeffrey Lo";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[25]    = "TTh: 10:00a - 12:00p";
	const int  LAB_NUM        = 8;
	const char LAB_NAME[17]   = "Eclipse Tutorial";

	// variable declarations go here

	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	// INPUT - describe input here

	// PROCESSING - describe processing here

	// OUTPUT - describe output here

	return 0;
}
