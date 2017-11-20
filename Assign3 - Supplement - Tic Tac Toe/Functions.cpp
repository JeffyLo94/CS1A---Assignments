/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Supplement - Tic Tac Toe
 * CLASS		: CS1B
 * SECTION		: MTh: 8am
 * DUE DATE		: 6/11/14
 ************************************************************************/

#include "TicTacHeader.h"

// F U N C T I O N S

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

/************************************************************************
 * DisplayBoard
 * ----------------------------------------------------------------------
 *	 This function outputs the tic tac toe board including the tokens
 *	 played in the proper format.
 *	 Returns: nothing
 * ----------------------------------------------------------------------
 * Pre-Conditions
 *   boardAr[][3] : must be predefined
 * Post-Conditions
 * 	 Outputs the current state of the board
 ************************************************************************/
void DisplayBoard(char boardAr[ROW_NUM][COL_NUM])
{
	 int rowNum;
	 int colNum;

	 cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";
	 for (rowNum = 0; rowNum < 3; rowNum++)
	 {

		 cout << setw(7) << "[" << rowNum+1 << "][1] | " << "[" << rowNum+1;
		 cout << "][2] | " << "[" << rowNum+1 << "][3]" << endl;
		 cout << setw(14) << "|" << setw(9) << "|" << endl;

		 for (colNum = 0; colNum < 3; colNum++)
		 {
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
		 }

		 cout << setw(14)<< "|" << setw(10) << "|\n";

		 if (rowNum != 2)
		 {
			 cout << setw(32) << "--------------------------\n";
		 }
	 }
	 cout << endl << endl;
}

/************************************************************************
 * GetPlayers
 *	 This function prompts the user and gets the input for the players'
 *	 names. playerX will always contain the name of the player that is
 *	 using the X token. playerO will always contain the name of the player
 *	 that is using the O token.
 * RETURNS: the players names through the variables playerX and playerO
 ************************************************************************/
void GetPlayers(string& playerX,   // OUT - player X's name
		        string& playerO)   // OUT - player O's name
{
	string name;
	char   token;
	int    tokenXTaken;
	int    tokenOTaken;
	int    index;

	tokenXTaken = 0;
	tokenOTaken = 0;

	//Processing - Gathers 2 players names and determines their marker
	for(index = 0; index <= 1; index++)
	{
		cout << "Enter player's name: ";
		getline(cin, name);
		do
		{
			cout << name << ", what token do you want to use (X or O): ";
			cin.get(token);
			cin.ignore(1000,'\n');
			if(toupper(token) != 'X' && toupper(token) != 'O')
			{
				cout << "**Input Error** -" << token
					 <<" is not a valid marker!\n";
			}
			else if(tokenXTaken == 1)
			{
				cout << "**Input Error** - Token X has been taken\n";
			}
			else if(tokenOTaken == 1)
			{
				cout << "**Input Error** - Token O has been taken\n";
			}
		}while(toupper(token) != 'X' && toupper(token) != 'O');
		if(toupper(token) == 'X')
		{
			playerX = name;
			tokenXTaken = 1;
		}
		else
		{
			playerO = name;
			tokenOTaken = 1;
		}// end if(toupper(token) == 'X')
		cout << endl;
	}// end for(index = 0; index <= 1; index++)
}

/************************************************************************
 * GetAndCheckInp
 *	 This function takes the move input, checks it, and preforms the move
 *
 * RETURNS: the modified boardAr
 ************************************************************************/
void GetAndCheckInp(char boardAr[ROW_NUM][COL_NUM],
					char token,
					string playerX,   // OUT - player X's name
		            string playerO)   // OUT - player O's name
{

	int row;
	int col;
	bool badRow;
	bool badCol;
	bool spotTaken;

	badRow = row < 1 && row > 3;
	badCol = row < 1 && row > 3;
	spotTaken = toupper(boardAr[row][col]) == 'X' &&
			    toupper(boardAr[row][col]) == 'O';

	// Processing - prompts correct player based on token
	if(toupper(token) == 'X')
	{
		cout << playerX << "'s turn! What's your play?: ";
	}
	else
	{
		cout << playerO << "'s turn! What's your play?: ";
	}

	// Processing - reads and error checks move input
	do
	{
		cin >> row;
		cin >> col;
		cin.ignore(1000, '\n');
		if(spotTaken && badRow && badCol)
		{
			cout << "**INPUT ERROR - row & column are both incorrect"
				 << " or the spot is taken";
		}
		else if(badRow)
		{
			cout << "**INPUT ERROR - row input is not correct";
		}
		else if(badCol)
		{
			cout << "**INPUT ERROR - column input is not correct";
		}

		cout << "Please input another move (row column)?: ";
	}while(badRow && badCol);

	// Processing - places marker in specified position
	if(toupper(token) == 'X')
	{
		boardAr[row][col] = 'X';
	}
	else
	{
		boardAr[row][col] = 'O';
	}
}


