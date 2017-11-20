/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/**************************************************************************
 * CalcFourBarsPerSheep
 * -----------------------------------------------------------------------
 * 	This function calculate the number of sheep that get four bars
 * 	RETURN: number of sheep that get four bars
 * -----------------------------------------------------------------------
 * Pre-Condition
 * 		numBars  : The number of chocolate bars must be predefined
 * 		totSheep : The total number of sheep must be predefined
 * Post-Condition
 * 		The number of sheep that get four bars is returned
 *************************************************************************/
int CalcFourBarsPerSheep(float numBars,  //IN - Number of choco bars
						 int   totSheep) //IN - Total number of sheep
{
	// Variable list
	int sheepWithFour; //CALC & OUT - Holds the number of sheep with four
					   //             bars

	// Processing - calculates the number of sheep with four bars
	if(totSheep > 0)
	{
		sheepWithFour = int(numBars) / MAX_BARS;
		if(sheepWithFour > totSheep)
		{
			sheepWithFour = totSheep;
		}
	}
	else
	{
		sheepWithFour = 0;
	}
	return sheepWithFour;
}

