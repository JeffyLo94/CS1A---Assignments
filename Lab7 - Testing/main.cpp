/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/**************************************************************************
 * Testing
 * ------------------------------------------------------------------------
 * 	This program will prompt the user for the number of sheep and the
 * 	number of chocolate bars and return the number of bars per sheep and
 * 	the number of left over bars. Sheep can have 4 bars at a maximum
 * ------------------------------------------------------------------------
 * INPUT
 * 		numSheep : the number of sheep
 * 		numBars  : the number of chocolate bars
 * OUTPUT
 * 		barsLeft : the number of bars left over
 *************************************************************************/
int main()
{
	/**********************************************************************
	 * C O N S T A N T S
	 * --------------------------------------------------------------------
	 * 	Used for program header
	 * --------------------------------------------------------------------
	 *	PROGRAMMER : Programmer Name
	 *	CLASS      : Class name
	 *	SECTION    : Class Time
	 *	AS_NUM	   : Assignment Number
	 *	AS_NAME    : Assignment Name
	 *	AS_TYPE    : Assignment Type
	 *********************************************************************/
	const string PROGRAMMER = "Jeffrey Lo";
	const string CLASS      = "CS1B";
	const string CLASS_TIME = "M-Th 8a";
	const int    AS_NUM     = 7;
	const string AS_NAME    = "Testing";
	const char   AS_TYPE    = 'L';

	// Variable List
	int   numSheep;
	int   fourBarSheep;
	int   sheepLeft;
	float numBars;
	float barsLeft;
	char  endPrompt;

	// OutputProgramHeader - Outputs program header
	OutputProgramHeader(cout, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	// TestDriver - Outputs test driver
	TestDriver();

	// Input - prompts and reads from user if they want to use program
	cout << "Would you like to use (Y or N)? ";
	cin.get(endPrompt);
	cin.ignore(1000,'\n');

	// PROCESSING - If user wants to use program, takes input of number of
	//              sheep and bars and outputs the bars per sheep and left
	//              over bars
	while(toupper(endPrompt) != 'N')
	{
		//GetSheepAndBars - Gets user input for number of sheep and bars
		GetSheepAndBars(numSheep, numBars);

		//CalcFourBarsPerSheep - Calculates number of sheep with four bars
		fourBarSheep = CalcFourBarsPerSheep(numBars, numSheep);

		//CalcSheepLeft - Calculates number of sheep remaining
		sheepLeft = CalcSheepLeft(numSheep, fourBarSheep);

		//CalcBarsLeft - Calculates number of bars remaining
		barsLeft = CalcBarsLeft(numBars, fourBarSheep);

		//OutResults - Outputs amount of bars per sheep and left over bars
		OutResults(sheepLeft, barsLeft, fourBarSheep);

		// Input - Prompts and reads user if they want to use program
		cout << "Would you like to run again (Y or N)? ";
		cin.get(endPrompt);
		cin.ignore(1000,'\n');
	}



}
