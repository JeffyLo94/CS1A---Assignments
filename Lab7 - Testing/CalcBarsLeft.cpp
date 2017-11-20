/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/**************************************************************************
 * CalcBarsLeft
 * -----------------------------------------------------------------------
 * 	This function calculates the number of chocolate bars left.
 * 	RETURNS: the number of chocolate bars left.
 * -----------------------------------------------------------------------
 * Pre-Condition
 * 		totBars   		: The number of bars must be predefined.
 * 		sheepWithFour   : The number of sheep with four chocolate bars
 * 						  must be predefined.
 * Post-Condition
 * 		The number of bars that are left gets returned.
 *************************************************************************/
float CalcBarsLeft(float totBars,     //IN - total number of bars
		   	   	   int sheepWithFour) //IN - sheep with four bars
{
	// Variable List
	float barsLeft;

	// Processing - calculates the number of bars left
	barsLeft = totBars - float(sheepWithFour*MAX_BARS);

	return barsLeft;
}
