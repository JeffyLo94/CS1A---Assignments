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
 * InitBoard
 * ----------------------------------------------------------------------
 *	 This function initializes each spot in the board to a space ' '.
 * 		returns: Board initialized with all spaces
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		None
 * POST-CONDITIONS
 * 		The board initialized with all spaces is returned
 ************************************************************************/
void InitBoard(char boardAr[ROW_NUM][COL_NUM])  // OUT - tic tac toe board
{
	int rowCount;
	int colCount;

	for (rowCount = 0; rowCount < ROW_NUM; rowCount++)
	{
		 for (colCount = 0; colCount < COL_NUM; colCount++)
		 {
			 boardAr[rowCount][colCount] = ' ';
		 }
	}

}
