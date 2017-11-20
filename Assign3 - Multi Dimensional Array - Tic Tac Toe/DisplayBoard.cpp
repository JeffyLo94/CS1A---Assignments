/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Multi-Dimensional Array
 * CLASS		: CS1A
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/17/14
 ************************************************************************/

#include "TicTacHeader.h"

/************************************************************************
 * DisplayBoard
 * ----------------------------------------------------------------------
 *	 This function outputs the tic tac toe board including the tokens
 *	 played in the proper format.
 *
 *	 	       1		 2		   3
 *	 		[1] [1] | [1] [2] | [1] [3]
 *	 		        |         |
 *	  1	            |         |
 *	 		        |         |
 *	 	  -------------------------------
 *	 	    [2] [1] | [2] [2] | [2] [3]
 *	 	            |         |
 *	  2  	        |         |
 *	 		        |         |
 *	 	  -------------------------------
 *	 	    [3] [1] | [3] [2] | [3] [3]
 *	 	            |         |
 *	  3 	        |         |
 *	 		        |         |
 *
 *
 *	 Returns: nothing
 * ----------------------------------------------------------------------
 * Pre-Conditions
 *   boardAr[][] : must be predefined
 * Post-Conditions
 * 	 Outputs the current state of the board
 ************************************************************************/
void DisplayBoard(char boardAr[ROW_NUM][COL_NUM])
{
	// Variable List
	int rowNum;
	int colNum;

	// Processing - clears screen
	system("cls");

	// Output - Outputs table header indiciating column number
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";

	// Output - Creates table
	for(rowNum = 0; rowNum < 3; rowNum++)
	{
		// Output - outputs row header with array number
		cout << setw(7) << "[" << rowNum+1 << "][1] | " << "[" << rowNum+1;
		cout << "][2] | " << "[" << rowNum+1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;

		// Output - outputs column elements based on the column number
		for(colNum = 0; colNum < 3; colNum++)
		{
			// Processing - determines what to output based on the column
			//              number
			switch(colNum)
			{
				case 0: cout << rowNum + 1 << setw(9)
							 << boardAr[rowNum][colNum];
						cout << setw(4) << "|";
				break;

				case 1: cout << setw(4) << boardAr[rowNum][colNum];
						cout << setw(5) << "|";
				break;

				case 2: cout << setw(4) << boardAr[rowNum][colNum]
							 << endl;
				break;

				default: cout <<"ERROR!\n\n";
			}
		}//End for(colNum = 0; colNum < 3; colNum++)

		cout << setw(14)<< "|" << setw(10) << "|\n";

		if(rowNum != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}// End if(rowNum != 2)
	}// End for(rowNum = 0; rowNum < 3; rowNum++)
	cout << endl << endl;
}
