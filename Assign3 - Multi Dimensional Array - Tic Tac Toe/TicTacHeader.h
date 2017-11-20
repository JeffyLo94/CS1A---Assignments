/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Multi-Dimensional Array
 * CLASS		: CS1A
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/17/14
 ************************************************************************/

#ifndef TICTACHEADER_H_
#define TICTACHEADER_H_


#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

/*************************************************************************
 * Global Constants
 * -----------------------------------------------------------------------
 * ROW_NUM : Number of tic tac toe board rows
 * COL_NUM : Number of tic tac toe board columns
 *************************************************************************/
const int ROW_NUM = 3;
const int COL_NUM = 3;

// S T R U C T S
/**************************************************************************
 * PlayerInfo
 * -----------------------------------------------------------------------
 * 	 A struct that holds player info, specifically the player's name and
 * 	 their token of choice.
 *************************************************************************/
struct PlayerInfo
{
	string name;
	char   token;
};

// P R O T O T Y P E S
/**************************************************************************
 * AssignHeader
 *------------------------------------------------------------------------
 *	This function outputs the header for the assignment.
 * RETURNS: nothing
 * -> Displays program header
 *************************************************************************/
void OutputProgramHeader(ostream& outOption, //IN - Output stream option
						 string  programmer, //IN - Programmer Name
				         string  className,  //IN - Class
				         string  section,    //IN - Class time
				         int     asNum,      //IN - Assignment Number
				         string  asName,     //IN - Assignment Name
					     char    asType);     //IN - Assignment Type

/**************************************************************************
 * OutputInstruct
 * -----------------------------------------------------------------------
 * 	This function outputs instructions to the users. There are no input
 * 	or output parameters for this function as it only displays text to
 * 	the screen.
 * RETURNS: nothing
 * -> Displays the instructions to the user
 *************************************************************************/
void OutputInstruct();

/**************************************************************************
 * InitBoard
 * -----------------------------------------------------------------------
 *	 This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 *************************************************************************/
void InitBoard(char boardAr[ROW_NUM][COL_NUM]);  // OUT - tic tac toe board

/**************************************************************************
 * DisplayBoard
 * -----------------------------------------------------------------------
 *	 This function outputs the tic tac toe board including the tokens
 *	 played in the proper format (as described below).
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
 * RETURNS: nothing
 * -> outputs the current state of the board
 *************************************************************************/
void DisplayBoard(char boardAr[ROW_NUM][COL_NUM]);  // IN - tic tac toe
													//      board

/**************************************************************************
 * GetPlayers
 * -----------------------------------------------------------------------
 *	 This function prompts the user and gets the input for the players'
 *	 names and their tokens.
 * RETURNS: the players' information will be returned
 *************************************************************************/
void GetPlayers(PlayerInfo player[]); // OUT - Player information

/**************************************************************************
 * GetAndCheckInp
 * ------------------------------------------------------------------------
 *	 This function takes the move input, checks it, and performs the move
 *	 by placing the player's token into the game board.
 * RETURNS: modified boardAr
 *************************************************************************/
void GetAndCheckInp(char boardAr[ROW_NUM][COL_NUM], // IN - tic tac toe
													//      board
					PlayerInfo player[],			// IN - Player Info
					char token);           			// IN - Token

/**************************************************************************
 * SwitchToken
 * ------------------------------------------------------------------------
 * 	 This function switches the active player.
 * 	 It takes in a parameter representing the current player's token
 * 	 as a character value and returns the opposite (opponent's token).
 * 	 For example, if this function receives an X it returns an 0. If it
 * 	 receives and O it returns and X.
 * RETURNS: the token opposite of the one in which it receives
 *************************************************************************/
char SwitchToken(const PlayerInfo PLAYER[],  // IN - Player Information
				 char token);                // IN - Current player's token

/**************************************************************************
 * CheckWin
 * ------------------------------------------------------------------------
 * 	 This function checks to see if either player has run. Once it is
 * 	 possible for a win condition to exist, this should run after each a
 * 	 player makes a play.
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 *************************************************************************/
char CheckWin(const char boardAr[ROW_NUM][COL_NUM], // IN - tic tac toe
													//      board
			  const PlayerInfo player[]);   		// IN - Player info

/**************************************************************************
 * OutputWinner
 * ------------------------------------------------------------------------
 *   This function receives as input a character indicating which player
 *   won or if the game was a tie and outputs an appropriate message. This
 *   function does not return anything as it simply outputs the
 *   appropriate message to the screen.
 * RETURNS: nothing
 * -> Displays the winner’s name
 *************************************************************************/
void OutputWinner(char whoWon,                //IN - token value of result
				  PlayerInfo player[]);       //IN - player info

#endif /* TICTACHEADER_H_ */
