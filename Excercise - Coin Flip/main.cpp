/*************************************************************************
 * AUTHORS		: Jeffrey Lo & John Zavala
 * STUDENT IDs	: 374781     & 100647
 * LAB #4		: Functions - Excercise - Coin Flips
 * CLASS		: CS1B
 * SECTION		: M-Th: 8am - 1:50pm
 * DUE DATE 	: 6/5/2014
 *************************************************************************/
#include "CoinFlipHeader.h"


/*************************************************************************
 * Coin Flip Game
 *------------------------------------------------------------------------
 * This program simulates the flipping of a coin repeatedly until three
 * 	consecutive heads are tossed. At that point, the program outputs the
 * 	total number of coin flips and the percentage of heads flipped to total
 * 	flips.
 *------------------------------------------------------------------------
 * INPUTS
 * 	-playerFirstName : Input from user and holds user first name
 * 	-playerLastName  : Input from user and holds user last name
 * 	-playerGender    : Input from user and holds user gender
 *
 * OUTPUTS
 * 	-avgNumHeads     : Holds average number of heads flipped
 * 	-totFlipsCount   : Holds total number of coin tosses performed
 *************************************************************************/
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
	const string PROGRAMMER  = "Jeffrey Lo & John Zavala";
	const char   CLASS[5]	 = "CS1B";
	const char   SECTION[25] = "M-Th: 8:00a - 1:50p";
	const int    LAB_NUM     = 4;
	const string LAB_NAME    = "Coin Flips Exercise";

	// Variable List
	string playerFirstName;	   //IN & OUT   - the player's first name
	string playerLastName;	   //IN & OUT   - the player's last name
	char   playerGender;	   //IN         - the players gender
	int    headInRowCount;	   //CALC       - accumulator for head in a row
	int    headsCount;		   //CALC 	    - accumulator for total number
							   //             of heads
	int    totFlipsCount;	   //CALC	    - accumulates the total number
							   //			  of flips
	int    previousFlip;	   //CALC       - holds the previous flip value
	float  avgNumHeads;		   //CALC & OUT - holds the average number of
							   // 			  heads
	bool   flipResult;		   //IN			- holds the flip result

	// PROCESSING - initializes the number of heads in a row, the total
	//              number of heads, the total number of flips
	headInRowCount = 0;
	headsCount = 0;
	totFlipsCount = 0;
	// PROCESSING - initializes random numbers using a seed based on time
	srand(time(NULL));

	// OUTPUT - Outputs Lab Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";

	// OUTPUT - Greeting Message
	cout << "Welcome to coin toss! Get 3 heads in a row to win!\n";

	// GetUserNameAndGender - obtains players first name, last name,
	//                        and gender
	GetUserNameAndGender(playerFirstName, playerLastName, playerGender);

	// OUTPUT - Outputs good luck message
	cout << "Try to get 3 heads in a row. Good luck " << playerFirstName
		 << "!";
	cout << endl << endl;

	//PROCESSING- loops coin flipping until the user gets 3 heads in a row
	while(headInRowCount != 3)
	{
		//FlipCoin 	 - stores the value of the coin flip
		flipResult = FlipCoin();
		//PROCESSING - increments the total number of flips
		totFlipsCount++;

		/*****************************************************************
		 * PROCESSING
		 * ---------------------------------------------------------------
		 * If the flip result is heads, outputs heads, increments heads,
		 * 	and sets a value for the previous flip. If the flip result is
		 * 	tails; outputs tails, and indicates previous flip value as
		 * 	tails
		 * ---------------------------------------------------------------
		 *****************************************************************/
		if(flipResult)
		{
			headsCount++;
			cout << "HEADS";
			previousFlip = 1;
		}
		else
		{
			cout << "TAILS";
			previousFlip = 0;
		}
		cout << endl << endl;

		/*****************************************************************
		 * PROCESSING
		 *----------------------------------------------------------------
		 * If the flip was heads, increment the number of heads in a row.
		 * 	If the flip was tails, reset the number of heads in a row.
		 *----------------------------------------------------------------
		 ****************************************************************/
		if(previousFlip == 1)
		{
			headInRowCount++;
		}
		else
		{
			headInRowCount = 0;
		}
	}

	// CalcAvg - calculates the average number of heads
	avgNumHeads = CalcAvg(headsCount, totFlipsCount);

	// OutputResults - outputs the total number of tosses and the
	//                 percentage of time heads were flipped.
	OutputResults(totFlipsCount, avgNumHeads);

	return 0;
}



