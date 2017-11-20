/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment #5: New Salary
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 3/20/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * NEW SALARY
 *________________________________________________________________________
 * This program will output the class heading, as well as obtain user's
 * name, current annual salary, and percent increase due on that salary.
 * The program will also calculate, store, and output the new annual
 * salary, new monthly salary, and retroactive pay.
 *________________________________________________________________________
 * INPUT:
 *    userName:     input from user for user's name
 *    currSalary:   input from user for user's current annual salary
 *    payIncr:      input from user for user's percent increase due
 *
 * OUTPUT:
 * 	  newAnnSalary:   output user's new annual salary
 * 	  newMonthSalary: output user's new monthly salary
 * 	  retroPayDue:    output user's retroactive pay due
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
	 * ASSN_NUM  : Assignment Number (specific to this assignment)
	 * ASSN_NAME : Title of the Assignment
	 ********************************************************************/
	const char PROGRAMMER[30] = "Jeffrey Lo";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[25]    = "TTh: 10:00a - 12:00p";
	const int  ASSN_NUM       = 5;
	const char ASSN_NAME[15]   = "New Salary";

	// Variable List
	char   userName[20];   // IN         --> input from user for user's
						   //                full name
	float  currSalary;     // IN & CALC  --> input from user for user's
						   //                salary
	float  payIncr;        // IN & CALC  --> input from user for percent
						   //                increase due
	float  newAnnSalary;   // OUT & CALC --> new annual salary
	float  newMonthSalary; // OUT & CALC --> new monthly salary
	float  retroPayDue;    // OUT & CALC --> retroactive pay due for user

	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  Assignment #";
	cout << setw(2) << ASSN_NUM << ": " << ASSN_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	// INPUT - reads in 3 inputs from user (userName, currSalary, &
    //         payIncr)
	cout << left;
	// Prompts user to input for their name then reads the input
	cout << setw(29) << "What is your name?";
	cin.getline(userName,20);
	// Prompts user to input for their current salary, then reads input
	cout << setw(29) << "What is your current salary?";
	cin >> currSalary;
	cin.ignore(10000,'\n');
	// Prompts user to input for their percent increase due on their
	// current salary, then reads the input
	cout << setw(29) << "What is your pay increase?";
	cin >> payIncr;
	cin.ignore(10000,'\n');
	cout << right;

	// PROCESSING - Calculates the new annual salary, new monthly salary,
	//              and the retroactive pay due
	newAnnSalary   = currSalary * (1 + payIncr);
	newMonthSalary = newAnnSalary / 12 ;
	retroPayDue    = (newMonthSalary - (currSalary / 12)) * 6;

	// OUTPUT - Outputs the user's new annual and monthly salary, along
	//          with their retroactive pay due in a table showing
	//          2 significant numbers after the decimal point.
	cout << left << endl;
	// Heading for the output table
	cout << userName << "\'s SALARY INFORMATION" << endl;
	// Row with secondary heading names for output table
	cout << right;
	cout << "New Salary";
	cout << setw(19) << "Monthly Salary";
	cout << setw(20) << "Retroactive Pay" << endl;
	// Row of new salaries and pay due w/ setprecision of 2
	cout << right;
	cout << setw(10) << fixed << setprecision(2) << newAnnSalary;
	cout << setw(19) << fixed << setprecision(2) << newMonthSalary;
	cout << setw(20) << fixed << setprecision(2) << retroPayDue;
	cout << endl << endl << endl;

	return 0;
}
