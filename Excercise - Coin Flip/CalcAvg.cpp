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
 * FUNCTION CalcAvg
 *------------------------------------------------------------------------
 * This function receives the total number of flips and the total number of
 * heads flipped and then calculates the average.
 *
 * 	- Returns the average of heads to total flips
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	numHeads - the number of heads flipped must be predefined
 *	numFlips - the total number of flips must be predefined
 *
 * POST-CONDITIONS
 *		this function will calculate the average and returns average
 ************************************************************************/
float CalcAvg(int numHeads,		//IN & CALC - the number of heads
			  int numFlips)		//IN & CALC - the total number of flips
{
	float avgHeads;  //CALC - Holds the average number of heads flipped

	// PROCESSING - calculates the average number of heads to total number
	//              of flips
	avgHeads = (numHeads / float(numFlips)) * 100;

	return avgHeads;
}


