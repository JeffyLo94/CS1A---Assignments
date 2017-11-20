/*************************************************************************
 * AUTHORS		: Jordan Carnaggio & Jeffrey Lo
 * STUDENT IDs	: 12065            & 374781
 * LAB #19		: Intro to Functions
 * CLASS		: CS1A
 * SECTION		: TTh: 10am - 11:50am
 * DUE DATE 	: 4/15/14
 *************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// PROTOTYPES
// This function accepts two integers and returns the sum of them.
int   AddTwoInts(int num1, int num2);
// This function accepts two integers and returns the product of them.
int   MultiplyTwoInts(int num1, int num2);
// This function accepts two integers and returns the largest of them.
float AverageTwoInts(int num1, int num2);
// This function accepts two integers and returns the average of them.
int   FindLargest(int num1, int num2);

/*************************************************************************
 * Intro to Functions
 * ________________________________________________________________________
 * This program will take two values from the user, output their sum,
 * 	   product, largest number, and average. This program will run until
 * 	   the user enters -999 for the first value.
 * ________________________________________________________________________
 * INPUT:
 * n1         : First value taken from user
 * n2         : Second value taken from user
 *
 * OUTPUT:
 * sum        : The sum of the two values
 * productNum : The product of the two values
 * largeNum   : The larger of the two values
 * avgNum     : The average of the two values
 *************************************************************************/
int main()
{
	/**********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS	  : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM	  : Lab Number (specific to this lab)
	 * LAB_NAME	  : Title of the Lab
	 * -------------------------------------------------------------------
	 * USED FOR PROCESSING
	 * -------------------------------------------------------------------
	 * COL_WIDTH_IN   : Constant used in aligning inputs
	 * COL_WIDTH_OUT  : Constant used in aligning type of output
	 * COL_WIDTH_OUT2 : Constant used in aligning output
	 *********************************************************************/
	const char PROGRAMMER[]   = "Jordan Carnaggio & Jeffrey Lo";
	const char CLASS[5]		  = "CS1A";
	const char SECTION[25]	  = "TTH: 10:00a - 11:50a";
	const int  LAB_NUM		  = 19;
	const char LAB_NAME[20]   = "Intro to Functions";

	// Processing Constants
	const int  COL_WIDTH_IN    = 24;
	const int  COL_WIDTH_OUT   = 17;
	const int  COL_WIDTH_OUT2  = 5;

	// Variable List
	int   n1;
	int   n2;
	int   sum;
	int   largeNum;
	int   productNum;
	float avgNum;

	// OUTPUT - Class Heading
	cout << left;
	cout << "*************************************************************"
			"******";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n***********************************************************"
			"********\n\n";
	cout << right;

	// INPUT - Prompt and read in the first number
	cout << left;
	cout << "To end this program enter -999"
		 << endl;
	cout << setw(COL_WIDTH_IN) << "Enter the first value: ";
	cin  >> n1;

	// PROCESSING - Runs the while-loop while the first value isn't -999
	while(n1 != -999)
	{
		// INPUT - Prompt and read in the second number
		cout << setw(COL_WIDTH_IN) << "Enter the second value: ";
		cin  >> n2;
		cout << endl;
		cout << right;

		// PROCESSING - Calls AddTwoInts which provides the sum
		sum        = AddTwoInts(n1, n2);
		// PROCESSING - Calls MultiplyTwoInts which provides the product
		productNum = MultiplyTwoInts(n1, n2);
		// PROCESSING - Calls FindLargest which provides the largest number
		largeNum   = FindLargest(n1, n2);
		// PROCESSING - Calls AverageTwoInts which provides the average
		avgNum     = AverageTwoInts(n1, n2);


		// OUTPUT - Outputs the sum, product, largest number, and average
		cout << left;
		cout << setw(COL_WIDTH_OUT) << "The SUM is: ";
		cout << right               << setw(COL_WIDTH_OUT2) << sum
		     << endl;
		cout << left;
		cout << setw(COL_WIDTH_OUT) << "The PRODUCT is: ";
		cout << right               << setw(COL_WIDTH_OUT2) << productNum
		     << endl;
		cout << left;
		cout << setw(COL_WIDTH_OUT) << "The LARGEST is: ";
		cout << right               << setw(COL_WIDTH_OUT2) << largeNum
		     << endl;
		cout << left;
		cout << setw(COL_WIDTH_OUT) << "The AVERAGE is: ";
		cout << right               << setw(COL_WIDTH_OUT2) << avgNum
		     << endl                << endl                 << endl;

		// INPUT - Prompt user and read in first value
		cout << left;
		cout << setw(COL_WIDTH_IN) << "Enter the first value: ";
		cin  >> n1;
	}

	return 0;
}

// FUNCTION - Accepts two integers and returns the sum of them.
int AddTwoInts(int num1, int num2)
{
	return num1 + num2;
}

// FUNCTION - Accepts two integers and returns the product of them.
int MultiplyTwoInts(int num1, int num2)
{
	return num1 * num2;
}

// FUNCTION - Accepts two integers and returns the average of them.
float AverageTwoInts(int num1, int num2)
{
	return (num1+num2)/2.0;
}

// FUNCTION - Accepts two integers and returns the largest of them.
int FindLargest(int num1, int num2)
{
	// Variable List
	int largest; //CALC --> holds largest number and is returned

	// PROCESSING - If-then-else statement that checks which number is
	//              largest and then assigns largest number to variable
	//              called largest.
	if(num1 > num2)
	{
		largest = num1;
	}
	else
	{
		largest = num2;
	}

	return largest;
}
