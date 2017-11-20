/*************************************************************************
 * AUTHOR     : Jordan Carnaggio & Jeffrey Lo							 *
 * STUDENT ID : 100465		     & 374780								 *
 * LAB #3     : Intro to Functions										 *
 * CLASS      : CS1B													 *
 * SECTION    : M-Th: 8am												 *
 * DUE DATE   : 06/5/14								  					 *
 *************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// P R O T O T Y P E S
int AddTwoInts(int firstNum,   //IN - first integer to be added
			   int secondNum); //IN - second integer to be added

int MultiplyTwoInts(int firstNum,   //IN - first integer to be multiplied
					int secondNum); //IN - second integer to be multiplied

int FindLargest(int firstNum,   //IN - first integer to be compared
  				int secondNum); //IN - second integer to be compared

float AverageTwoInts(int firstNum,   //IN - first integer to be averaged
				     int secondNum); //IN - second integer to be averaged

int main ()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * Used for Output Header
	 * -------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION    : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the Lab
	 * -------------------------------------------------------------------
	 * Used for Formatting
	 * -------------------------------------------------------------------
	 * IN_WIDTH    : setw size for input
	 * LABEL_WIDTH : setw size for label section of output
	 * OUT_WIDTH   : setw size for the output value
	 *********************************************************************/
	const char PROGRAMMER[31] = "Jordan Carnaggio & Jeffrey Lo";
	const char CLASS[5]       = "CS1B";
	const char SECTION[25]    = "M-Th: 8:00a - 1:10p";
	const int  LAB_NUM        = 3;
	const char LAB_NAME[20]   = "Intro to Functions";
	const int  IN_WIDTH       = 24;
	const int  LABEL_WIDTH    = 16;
	const int  OUT_WIDTH      = 8;


	// Variables List
	int   num1;     //IN & CALC  - input by user for first integer
	int   num2;     //IN & CALC  - input by user for second integer
	int   sum;      //CALC & OUT - holds value for sum of two integers
	int   product;  //CALC & OUT - holds value for product of two integers
	int   largest;  //CALC & OUT - holds value for largest of two integers
	float average;  //CALC & OUT - holds value for average of two integers

	// Output - Header
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS"  << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION"  << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9)  << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	// Input - Prompts user to input first number
	cout << left;
	cout << setw(IN_WIDTH) << "Enter the first integer" << ": ";
	cin  >> num1;
	cout << right;

	// Processing - Terminates program if first value entered is -999
	while(num1 != -999)
	{
		// Input - Prompts user to input second number
		cout << left;
		cout << setw(IN_WIDTH) << "Enter the second integer" << ": ";
		cin  >> num2;
		cout << right << endl;

		// AddTwoInts -  Calculates sum of two integers and returns the sum
		sum 	= AddTwoInts(num1, num2);

		// MultiplyTwoInts - Calculates product of two integers and returns
		//                   the product
		product = MultiplyTwoInts(num1, num2);
		// FindLargest - Determines largest number of two integers and
		//               returns largest number
		largest = FindLargest(num1, num2);
		// AverageTwoInts - Calculates average of the integers and returns
		//                  the average
		average = AverageTwoInts(num1, num2);

		// Output - Outputs sum, product, largest, and average values
		cout << left  << setw(LABEL_WIDTH) << "The SUM is:"
			 << right << setw(OUT_WIDTH)   << sum << endl;
		cout << left  << setw(LABEL_WIDTH) << "The PRODUCT is:"
			 << right << setw(OUT_WIDTH)   << product << endl;
		cout << left  << setw(LABEL_WIDTH) << "The LARGEST is:"
			 << right << setw(OUT_WIDTH)   <<  largest << endl;
		cout << left  << setw(LABEL_WIDTH) << "The AVERAGE is:"
			 << right << setw(OUT_WIDTH)   << average << endl;

		// Input - Prompts user to input first number
		cout << endl  << endl << endl << left;
		cout << setw(IN_WIDTH) << "Enter the first integer" << ": ";
		cin  >> num1;
		cout << right;
	}

	return 0;
}

/*************************************************************************
 * FUNCTION AddTwoInts
 *------------------------------------------------------------------------
 * This function receives two integers
 * 	- Returns the sum of the two integers
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		firstNum : first integer must be predefined
 *		secondNum: second integer must be predefined
 * POST-CONDITIONS
 *		This function calculates the sum of two integers. The sum is
 *		returned to calling function
 ************************************************************************/
int AddTwoInts(int firstNum,   //IN - first integer to be added
		       int secondNum)  //IN - second integer to be added
{
	return firstNum + secondNum;
}

/*************************************************************************
 * FUNCTION MultiplyTwoInts
 *------------------------------------------------------------------------
 * This function receives two integers
 * 	- Returns the product of the two integers
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		firstNum : first integer must be predefined
 *		secondNum: second integer must be predefined
 * POST-CONDITIONS
 *		This function calculates the product of two integers. The product
 *		is returned to calling function
 ************************************************************************/
int MultiplyTwoInts(int firstNum,  //IN - first integer to be multiplied
					int secondNum) //IN - second integer to be multiplied
{
	int numsProduct;

	numsProduct = firstNum * secondNum;

	return numsProduct;
}

/*************************************************************************
 * FUNCTION FindLargest
 *------------------------------------------------------------------------
 * This function receives two integers
 * 	- Returns the largest integer
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		firstNum : first integer must be predefined
 *		secondNum: second integer must be predefined
 * POST-CONDITIONS
 *		This function determines the largest of two integers. The largest
 *		integer is returned to calling function
 ************************************************************************/
int FindLargest(int firstNum,   //IN - first integer to be compared
  				int secondNum)  //IN - second integer to be compared
{
	int numsLargest;

	if(firstNum > secondNum)
	{
		numsLargest = firstNum;
	}
	else
	{
		numsLargest = secondNum;
	}

	return numsLargest;
}

/*************************************************************************
 * FUNCTION AverageTwoInts
 *------------------------------------------------------------------------
 * This function receives two integers
 * 	- Returns the average of the two integers
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		firstNum : first integer must be predefined
 *		secondNum: second integer must be predefined
 * POST-CONDITIONS
 *		This function calculates the average of two integers. The average
 *		is returned to calling function
 ************************************************************************/
float AverageTwoInts(int firstNum,   //IN - first integer to be averaged
				     int secondNum)  //IN - second integer to be averaged
{
	float numsAverage;

	numsAverage = (firstNum + secondNum)/2.0;

	return numsAverage;
}

