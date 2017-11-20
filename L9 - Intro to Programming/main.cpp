 /***********************************************************************
 * AUTHOR		: Jeffrey Lo & Thomas Stevens
 * STUDENT ID	: 374781
 * LAB #9		: Intro to Programming
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 3/6/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * INTRO to PROGRAMMING
 *________________________________________________________________________
 * This program adds two integers and outputs the results
 *________________________________________________________________________
 * INPUT:
 *    firstNum:  first input from user to be summed
 *    secondNum: second input from user to be summed
 *
 * OUTPUT:
 * 	  sumNum:  The sum of the two integers input
 * 	  avgNum:  The average of the two integers input
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
	const char PROGRAMMER[30] = "Jeffrey Lo & Thomas Stevens";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[25]    = "TTh: 10:00a - 12:00p";
	const int  LAB_NUM        = 9;
	const char LAB_NAME[21]   = "Intro to Programming";


	int   firstNum;     //  IN & OUT   --> First number input from user
	int   secondNum;    //  IN & OUT   --> Second number input from user
	int   sumNum;       //  CALC & OUT --> sum of 2 integers input
	float avgNum;       //  CALC & OUT --> average of 2 integers input

	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	// INPUT - reads in two inputs from the user (firstNum & secondNum)
	// Prompts the user for the first input then reads the input
	cout << "Enter the first integer: ";
	cin  >> firstNum;

	// Prompts the user for the second input then reads the input
	cout << "Enter the second integer: ";
	cin  >> secondNum;


	// PROCESSING - Calculates the sum and average of the two inputs
	sumNum = firstNum + secondNum;
	avgNum = sumNum / 2.0;

	// OUTPUT - Outputs the inputs, the sum, and the average as specified
	cout << endl;
	cout << endl << firstNum << " + " << secondNum << " = " << sumNum;
    cout << endl << "The average is: ";
    cout << fixed << setprecision(2) << avgNum;
	cout << endl << endl << endl;

	return 0;
}
