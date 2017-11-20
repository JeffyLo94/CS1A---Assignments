/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/**************************************************************************
 * TestDriver
 * -----------------------------------------------------------------------
 * 	This function performs test drives.
 * 	RETURNS: nothing
 * 	-> Output test drivers
 * -----------------------------------------------------------------------
 * Pre-Condition
 * 		none
 * Post-Condition
 * 		Nothing is returned, test drivers are output.
 *************************************************************************/
void TestDriver()
{
	// Variable List
	int   fourBarSheep; //Out - Holds sheep with four bars
	int   sheepLeft;    //Out - Holds sheep left
	float barsLeft;     //Out - Holds bars left

	//Test Drivers
	cout << "TEST DRIVERS:\n";
	fourBarSheep = CalcFourBarsPerSheep(8.0, 2);
	cout << "Testing CalcFourBarsPerSheep, numBars = 8.0, totSheep = 2 : ";
	cout << fourBarSheep
		 << endl << endl;
	sheepLeft = CalcSheepLeft(12, 4);
	cout << "Testing CalcSheepLeft, totSheep = 12, sheepWithFour = 4 : ";
	cout << sheepLeft
		 << endl << endl;
	barsLeft = CalcBarsLeft(20.0, 5);
	cout << "Testing CalcBarsLeft, totBars = 20.0, sheepWithFour = 5 : ";
	cout << barsLeft
		 << endl << endl;
}


