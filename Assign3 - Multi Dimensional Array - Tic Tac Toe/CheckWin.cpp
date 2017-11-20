/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Multi-Dimensional Array
 * CLASS		: CS1A
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/17/14
 ************************************************************************/

#include "TicTacHeader.h"

/**************************************************************************
 * CheckWin
 * ------------------------------------------------------------------------
 * 	 This function checks to see if either player has run. Once it is
 * 	 possible for a win condition to exist, this should run after each a
 * 	 player makes a play.
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 * ------------------------------------------------------------------------
 * Pre-Condition
 * 		boardAr  - the tic tac toe board must be predefined
 * 		player[] - the player information must be predefined
 * Post-Condition
 * 		The character value of the winner or that of a tie is returned.
 *************************************************************************/
char CheckWin(const char boardAr[ROW_NUM][COL_NUM], // IN - tic tac toe
													//      board
			  const PlayerInfo player[])    		// IN - Player info
{
	char result; //OUT - holds character value of player that won or tie
	int  row;    //CALC - holds row values
	int  col;    //CALC - holds column values
	bool winFound; //CALC - determines if a win is found

	winFound = false;

	//Processing - Horizontal Checking
	for(row = 0; row < ROW_NUM; row++)
	{
		if(boardAr[row][0] == boardAr[row][1] &&
		   boardAr[row][1] == boardAr[row][2])
		{
			result = boardAr[row][0];
			winFound = true;
		}
	}

	//Processing - Vertical Checking
	for(col = 0; col < COL_NUM; col++)
	{
		if(boardAr[0][col] == boardAr[1][col] &&
		   boardAr[1][col] == boardAr[2][col])
		{
			result = boardAr[0][col];
			winFound = true;
		}
	}

	//Processing - Diagonal Checking
	if((boardAr[0][0] == boardAr[1][1] && boardAr[1][1] == boardAr[2][2]) ||
	   (boardAr[0][2] == boardAr[1][1] && boardAr[1][1] == boardAr[2][0]))
	{
		result = boardAr[1][1];
		winFound = true;
	}

	//Processing - default result
	if(!winFound)
	{
		result = 'T';
	}

	return result;
}
