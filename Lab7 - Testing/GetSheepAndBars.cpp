/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/**************************************************************************
 * GetSheepAndBars
 * -----------------------------------------------------------------------
 * 	This function will prompt and read the number of sheep and number of
 * 	bars
 * 	RETURN: number of sheep and number of bars
 * -----------------------------------------------------------------------
 * Pre-Condition
 * 		None
 * Post-Condition
 * 		numSheep : the user inputed amount of sheep will be returned
 * 		numBars  : the user inputed amount of bars will be returned
 *************************************************************************/
void GetSheepAndBars(int&   numSheep, //OUT - number of sheep
					 float& numBars)  //OUT - number of bars
{
	// Input - Prompts, reads, and checks the number of sheep
	do
	{
		cout << "Enter the number of sheep: ";
		cin >> numSheep;
		cin.ignore(1000, '\n');

		if(numSheep < 0)
		{
			cout << "** ERROR - Sheep input can't be negative **\n";
		}
	}while(numSheep < 0);

	// Input - Prompts, reads, and checks the number of bars
	do
	{
		cout << "Enter the number of bars: ";
		cin >> numBars;

		if(numBars < 0.0)
		{
			cout << "** ERROR - Chocolate Bars input can't be negative **\n";
		}
	}while(numBars < 0.0);

	cin.ignore(1000,'\n');
	cout << endl;
}




