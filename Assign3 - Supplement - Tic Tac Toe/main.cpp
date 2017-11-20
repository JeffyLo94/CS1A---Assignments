/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Supplement - Tic Tac Toe
 * CLASS		: CS1B
 * SECTION		: MTh: 8am
 * DUE DATE		: 6/11/14
 ************************************************************************/

#include "TicTacHeader.h"

int main()
{
	const char MARKER_X = 'x';
	const char MARKER_O = 'o';

	string playerX;
	string playerO;
	int    turnIndicator;
	char   gameBoard[ROW_NUM][COL_NUM];

	turnIndicator = 0;

	cout << "\nThis is all a test!\n\n";

	InitBoard(gameBoard);
	DisplayBoard(gameBoard);

	// GetPlayers - gets players names and markers
	GetPlayers(playerX, playerO);

	if(turnIndicator == 0)
	{
		GetAndCheckInp(gameBoard, MARKER_X, playerX, playerO);
		DisplayBoard(gameBoard);
		turnIndicator = 1;
	}
	else
	{
		GetAndCheckInp(gameBoard, MARKER_O, playerX, playerO);
		DisplayBoard(gameBoard);
		turnIndicator = 0;
	}

	return 0;
}

