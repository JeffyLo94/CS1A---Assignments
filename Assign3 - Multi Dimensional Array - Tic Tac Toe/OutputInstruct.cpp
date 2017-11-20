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
 * OutputInstruct
 * -----------------------------------------------------------------------
 * 	This function outputs instructions to the users. There are no input
 * 	or output parameters for this function as it only displays text to
 * 	the screen.
 * RETURNS: nothing
 * -> Displays the instructions to the user
 *************************************************************************/
void OutputInstruct()
{
	cout << left;
	cout << "*******************************************************\n";
	cout << setw(15) << "*"
		 << setw(39) << "Welcome to Tic Tac Toe" << "*\n";
	cout << "*******************************************************\n";
	cout << setw(2) << "*" << setw(52) << "Instructions:" <<"*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "Tic Tac Toe is played on a 3x3 board. The goal"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "of the game is to get three tokens or markers"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "in a row (diagonaly, row, and column are all "
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "valid) before the other player. In this program"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "you can determine your own token or maker. The"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "first player to enter their name will go first."
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "When prompted to enter your move, enter the row"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "first, followed by a space, followed by the"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "column where you want to move. For example,"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "3 1 or 2 1. Also the marker/token you choose"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "must be one character long and unique from"
		 << "*\n";
	cout << setw(5) << "*"
		 << setw(49)
		 << "your opponent."
		 << "*\n";
	cout << setw(2) << "*" << setw(52) << "Good Luck!" <<"*\n";
	cout << "*******************************************************\n";
	cout << endl    << endl;
	cout << right;
}
