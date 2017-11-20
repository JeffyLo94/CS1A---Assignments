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
 * OutputWinner
 * ------------------------------------------------------------------------
 *   This function receives as input a character indicating which player
 *   won or if the game was a tie and outputs an appropriate message. This
 *   function does not return anything as it simply outputs the
 *   appropriate message to the screen.
 * RETURNS: nothing
 * -> Displays the winner’s name
 * ------------------------------------------------------------------------
 * Pre-Condition
 * 		whoWon   - Token value of game result must be predefined
 * 		player[] - Player information must be predefined
 * Post-Condition
 * 		None, outputs winner's name or outputs tie message
 *************************************************************************/
void OutputWinner(char whoWon,                //IN - token value of result
				  PlayerInfo player[])        //IN - player info
{
	//Determines who won and outputs winner
	if(whoWon == 'T')
	{
		cout << "Game is a Tie!" << endl;
	}
	else if(whoWon == player[0].token)
	{
		cout << player[0].name << " is the winner!" << endl;
	}
	else if(whoWon == player[1].token)
	{
		cout << player[1].name << " is the winner!" << endl;
	}

	cout << endl;
}
