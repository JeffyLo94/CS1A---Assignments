/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/**************************************************************************
 * OutResults
 * -----------------------------------------------------------------------
 * 	This function outputs the number of sheep with four bars, the sheep
 * 	with remainding bars, sheep with no bars, and bars left over.
 * 	RETURNS: nothing
 * 	-> outputs results
 * -----------------------------------------------------------------------
 * Pre-Condition
 * 		barsLeft   		: The number of bars must be predefined.
 * 		sheepWithFour   : The number of sheep with four chocolate bars must
 * 						  be predefined.
 * 		sheepLeft		: The number of sheep left must be predefined
 * Post-Condition
 * 		Outputs results.
 *************************************************************************/
void  OutResults(int sheepLeft,     //IN - Sheep remaining
				 float barsLeft,    //IN - Bars remaining
				 int sheepWithFour) //IN - Sheep with four bars
{
	// Output - outputs amount of sheep with four bars
	cout << sheepWithFour << " Sheep get "
		 << MAX_BARS      << " chocolate bars.\n";

	// Processing & Output - determines if any sheep take the remaining
	//                       chocolate bars or outputs bars left over
	if(sheepLeft == 0)
	{
		cout << "There are " << barsLeft
			 << " chocolate bars left over.\n";
	}
	else if(barsLeft == 0)
	{
		cout << sheepLeft    << " Sheep get 0 chocolate bars.\n";
		cout << "There are " << barsLeft
			 << " chocolate bars left over.\n";
	}
	else if(sheepLeft > 0 && barsLeft < MAX_BARS)
	{
		cout << "1 Sheep gets " << barsLeft << " chocolate bars.\n";
		cout << sheepLeft-1     << " Sheep get 0 chocolate bars.\n";
	}
	else
	{
		cerr << "catch";
		cout << sheepLeft    << " Sheep get 0 chocolate bars.\n";
		cout << "There are " << barsLeft
			 << " chocolate bars left over.\n";
	}

	cout << endl;
}


