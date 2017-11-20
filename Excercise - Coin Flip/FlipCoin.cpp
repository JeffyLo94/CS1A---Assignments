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
 * FUNCTION FlipCoin
 *------------------------------------------------------------------------
 * This function flips the coin and determines whether the flip result
 * is false(tails) or true(head).
 *
 * 	- Returns the result of the flip(as a boolean)
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	no pre-conditions.
 *
 * POST-CONDITIONS
 *		this function performs the flip and returns the result
 ************************************************************************/
bool FlipCoin()
{
	bool flipResult;		//IN & OUT- boolean that holds the result
	int  flipValue;			//CALC    - holds the value for the flip

	//INPUT- prompts user to press enter to flip the coin
	cout << "Press <enter> to flip";
	cin.ignore(1000,'\n');

	//PROCESSING - generates a random value and stores it in flip value
	flipValue = rand() % 2;

	//PROCESSING- if the flip value is tails the result is set to false
	// and if the flip value is heads the result is set to true.
	if(flipValue == 0)
	{
		flipResult = false;
	}
	else
	{
		flipResult = true;
	}

	return flipResult;
}
