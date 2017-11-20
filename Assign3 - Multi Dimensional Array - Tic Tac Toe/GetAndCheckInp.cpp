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
 * GetAndCheckInp
 * -----------------------------------------------------------------------
 *	 This function takes the move input, checks it, and performs the move
 *	 by placing the player's token into the game board.
 * RETURNS: the modified boardAr
 * -----------------------------------------------------------------------
 * Pre-Conditions:
 * 		boardAr  - the tic tac toe board must be predefined
 * 		player[] - the player information must be predefined
 * 		token    - the current player token must be predefined
 * Post-Conditions:
 * 		The modified board will be returned by reference
 *************************************************************************/
void GetAndCheckInp(char boardAr[ROW_NUM][COL_NUM], // IN - tic tac toe
													//      board
					PlayerInfo player[],			// IN - Player Info
					char token)            			// IN - Token
{
	// Variable List
	int  row;				//IN - The row value input from user
	int  col;               //IN - The col value input from user
	int  playerNum;         //CALC - The index for the player info
	int  currentPlayer;     //CALC - The index for the current player
	bool playerDetermined;  //CALC - Boolean for if the the current player
							//       was determined
	bool spotTaken;         //CALC - Boolean for if the user defined spot
							//       is taken
	bool badRow;			//CALC - Boolean for out of bounds row input
	bool badCol;            //CALC - Boolean for out of bounds col input

	//Initialization - initializes LCV
	playerDetermined = false;
	playerNum = 0;

	// Processing - determines and outputs whose turn it is
	while(playerNum < 2 && !playerDetermined)
	{
		if(player[playerNum].token == token)
		{
			cout << player[playerNum].name << "\'s turn!\n";
			currentPlayer = playerNum;
			playerDetermined = true;
		}
		else
		{
			playerNum ++;
		}//End If
	}//End For

	//Processing - Prompts and reads the player move and error checks
	do
	{
		cout << player[currentPlayer].name
			 << " please input your move (row col): ";
		cin >> row;
		cin >> col;
		cin.ignore(1000, '\n');

		spotTaken = boardAr[row-1][col-1] != ' ';
		badRow    = row < 1 || row > 3;
		badCol    = col < 1 || col > 3;

		// OUTPUT - outputs error messages
		if(badRow || badCol)
		{
			cout << "**Error - row or col input is not within bounds "
				 <<	"(1 to 3)**\n";
		}
		else if(spotTaken)
		{
			cout << "**Error - specified spot is taken**\n";
		}

	}while(spotTaken || badRow || badCol );

	//Processing - places user token on board
	boardAr[row-1][col-1] = player[currentPlayer].token;
}

