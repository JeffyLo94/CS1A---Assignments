/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Supplement - Tic Tac Toe
 * CLASS		: CS1B
 * SECTION		: MTh: 8am
 * DUE DATE		: 6/11/14
 ************************************************************************/

#ifndef TICTACHEADER_H_
#define TICTACHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/************************************************************************
 * GLOBAL CONSTANTS
 * ----------------------------------------------------------------------
 * ROW_NUM :
 * COL_NUM :
 ************************************************************************/
const int ROW_NUM = 3;
const int COL_NUM = 3;


// P R O T O T Y P E S
/*************************************************************************
 * Prototypes
 *------------------------------------------------------------------------
 * AssignHeader - This function outputs the header for the assignment.
 *************************************************************************/
void OutputProgramHeader(string programmer, //IN - Programmer Name
				         string className,  //IN - Class
				         string section,    //IN - Class time
				         int    asNum,      //IN - Assignment Number
				         string asName,     //IN - Assignment Name
					     char   asType);    //IN - Assignment Type

/************************************************************************
 * InitBoard
 *	 This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 ************************************************************************/
void InitBoard(char boardAr[ROW_NUM][COL_NUM]);  // OUT - tic tac toe board

/************************************************************************
 * DisplayBoard
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
 *	 	  -------------------------------
 *
 * RETURNS: nothing
 * -> outputs the current state of the board
 ************************************************************************/
void DisplayBoard(char boardAr[ROW_NUM][COL_NUM]);  // IN - tic tac toe board

/************************************************************************
 * GetPlayers
 *	 This function prompts the user and gets the input for the players'
 *	 names. playerX will always contain the name of the player that is
 *	 using the X token. playerO will always contain the name of the player
 *	 that is using the O token.
 * RETURNS: the players names through the variables playerX and playerO
 ************************************************************************/
void GetPlayers(string& playerX,   // OUT - player X's name
		        string& playerO);  // OUT - player O's name

/************************************************************************
 * GetAndCheckInp
 *	 This function
 *
 * RETURNS:
 ************************************************************************/
void GetAndCheckInp(char boardAr[ROW_NUM][COL_NUM],
					char token,
					string playerX,   // OUT - player X's name
		            string playerO);  // OUT - player O's name



#endif /* TICTACHEADER_H_ */
