/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/**************************************************************************
 * CalcSheepLeft
 * -----------------------------------------------------------------------
 * 	This function calculates the number of sheep left. Returns the number
 * 	of sheep left.
 * -----------------------------------------------------------------------
 * Pre-Condition
 * 		totSheep  		: The number of sheep must be predefined.
 * 		sheepWithFour   : The number of sheep with four chocolate bars.
 * Post-Condition
 * 		The number of sheep that are left gets returned.
 *************************************************************************/
int CalcSheepLeft(int totSheep, 	 //IN - The number of total sheep.
				  int sheepWithFour) //IN - The number of sheep with
									 //		four chocolate bars.
{
	// Variable List
	int sheepLeft;    //CALC & OUT - number of sheep left

	// Processing - calculates number of sheep left
	sheepLeft = totSheep - sheepWithFour;

	return  sheepLeft;
}


