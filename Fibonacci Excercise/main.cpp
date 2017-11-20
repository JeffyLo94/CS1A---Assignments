/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * Exercise    : Fibonacci Sequence
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 *************************************************************************/

#include <iostream>
using namespace std;
/**************************************************************************
 * Fibonacci Sequence
 * -----------------------------------------------------------------------
 * Things to do:
 * -  Use array to handle large integers?
 * -  Create function to determine when array size has reached an index of
 *	  10^999 (max reached)?
 *************************************************************************/
int main()
{
	const int MAX_ARRAY = 999;

	// Variable List
	int firstArray[MAX_ARRAY];
	int secondArray[MAX_ARRAY];
	int newArray[MAX_ARRAY];
	int firstNum;
	int secNum;
	int newNum;
	int counter;
	bool maxReached;

	// Initialization
	firstNum = 1;
	secNum = 1;
	counter = 0;
	maxReached = false;

	cout << "F" << counter+1 << ": " << firstNum << endl;
	cout << "F" << counter+2 << ": " << secNum   << endl;

	// Processing - perform fibonacci sequence until 1000 digits is reached
	while(!maxReached)
	{
		newNum   = firstNum + secNum;
		cout << "F" << counter+3 << ": " << newNum << endl;
		firstNum = secNum;
		secNum   = newNum;
		counter++;
	}


	return 0;
}
