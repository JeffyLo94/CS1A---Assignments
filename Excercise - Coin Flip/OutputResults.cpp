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
 * FUNCTION OutputResults
 *------------------------------------------------------------------------
 * This function takes in the number of flips and the avg number of heads
 *  outputs the results of the game.
 * 	-Returns nothing
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		numFlips : The number of flips must be predefined
 *		avgHeads : The average number of heads must be predefined
 *
 * POST-CONDITIONS
 *		This function outputs the results into the console
 ************************************************************************/
void OutputResults(int   numFlips,  //IN - total number of coin flips
				   float avgHeads)  //IN - average number of heads flipped
{
	// OUTPUT - Outputs the number of flips and the percentage of heads
	//          flipped
	cout << "It took you "                      << numFlips
		 << " tosses to get 3 heads in a row."  << endl;
	cout << "On average you flipped heads "     << int(round(avgHeads))
		 <<"% of the time\n";
}



