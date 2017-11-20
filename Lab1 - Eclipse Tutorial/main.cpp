/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * LAB #1		: Eclipse Tutorial
 * CLASS		: CS1B
 * SECTION		: M-Th: 8:00a - 1:50p
 * DUE DATE		: 6/2/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * PROGRAMER : Programmer's Name
	 * CLASS     : Student's Course
	 * SECTION   : Class Days and Times
	 * LAB_NUM   : Lab Number (specific to this lab)
	 * LAB_NAME  : Title of the Lab
	 ********************************************************************/
	const char PROGRAMMER[30] = "Jeffrey Lo";
	const char CLASS[5]	      = "CS1B";
	const char SECTION[25]    = "M-Th: 8:00a - 1:50p";
	const int  LAB_NUM        = 1;
	const char LAB_NAME[17]   = "Eclipse Tutorial";

	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	return 0;
}
