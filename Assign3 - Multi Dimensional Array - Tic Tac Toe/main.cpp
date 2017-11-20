/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Multi-Dimensional Array
 * CLASS		: CS1A
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/17/14
 ************************************************************************/

#include "TicTacHeader.h"

int main()
{
   /***********************************************************************
	* CONSTANTS
	* --------------------------------------------------------------------
	* Used for Program Header
	* --------------------------------------------------------------------
	* PROGRAMMER - Name of programmer
	* CLASS      - Class name
	* CLASS_TIME - Class time
	* AS_NUM     - Assignment number
	* AS_NAME    - Assignment Name
	* AS_TYPE    - Assignment Type
	* --------------------------------------------------------------------
	* Used for game
	* --------------------------------------------------------------------
	* TURN_LIMIT - Maximum Turns Possible in Tic Tac Toe game
	* PLAYER_NUM - Maximum amount of players
	**********************************************************************/
	const string PROGRAMMER = "Jeffrey Lo";
	const string CLASS      = "CS1B";
	const string CLASS_TIME = "M-Th 8am - 1pm";
	const int    AS_NUM     = 3;
	const string AS_NAME    = "Multi-Dimensional Arrays";
	const char   AS_TYPE    = 'A';

	const int TURN_LIMIT = 9;
	const int PLAYER_NUM = 2;

	//Variable List
	PlayerInfo gamePlayer[PLAYER_NUM];  //IN & OUT - holds player info
	char newGame;                       //IN       - holds new Game status
	char winnerToken;					//IN & OUT - holds winner indicating
										//           token
	char turnToken;						//CALC     - holds turn indicating
										//           token
	char newPlayerQuery;                //IN       - holds determining value
										//           on if there is a new
										//           player
	char gameBoard[ROW_NUM][COL_NUM];   //IN & OUT - tic tac toe gameboard
	int  turnNum;                       //CALC     - holds number of turns
										//           that have happened
	bool gameWon;                       //CALC     - Determines if game has
										//           been won or tied
	bool newPlayer;                     //CALC     - Determines if user
										//           input yes to new player

	//Outputs program header
	OutputProgramHeader(cout, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	//Initialization - initializes new player in preparation for the first
	//                 game
	newPlayerQuery = 'Y';
	newPlayer = toupper(newPlayerQuery) == 'Y';

	//OutputInstruct - Outputs the game instructions
	OutputInstruct();

	//Input - Prompts and Reads if user wants to play tic tac toe
	cout << "Do you want to play (Y or N)? ";
	cin.get(newGame);
	cin.ignore(1000, '\n');

	//Processing - The loop for one whole game
	while(toupper(newGame) != 'N')
	{
		// InitBoard - initializes gameboard to a new board
		InitBoard(gameBoard);

		// GetPlayers - gets players names and markers/tokens
		if(newPlayer)
		{
			GetPlayers(gamePlayer);
		}

		//Initialize - sets/reset turn variables to default
		turnNum = 1;
		gameWon = false;
		turnToken = gamePlayer[0].token;

		//Processing - Loops through alternating players' turns until
		//             a person wins or game ends in a tie.
		do //while(!gameWon && turnNum <= TURN_LIMIT)
		{
			// DisplayBoard- displays game board
			DisplayBoard(gameBoard);
			// GetAndCheckInp - prompts, reads, and error checks
			//                  player's move
			GetAndCheckInp(gameBoard, gamePlayer, turnToken);

			// CheckWin - checks if game has been won
			winnerToken = CheckWin(gameBoard, gamePlayer);

			// Processing- Determines if turns should end or continue
			//             based on if there is a winner or a tie
			if(winnerToken == gamePlayer[0].token ||
			   winnerToken == gamePlayer[1].token)
			{
				gameWon = true;
			}
			else if(turnNum == TURN_LIMIT &&
					winnerToken == 'T')
			{
				gameWon = true;
			}
			else
			{
				turnToken = SwitchToken(gamePlayer, turnToken);
				turnNum++;
			}
		}while(!gameWon && turnNum <= TURN_LIMIT);

		// Output - outputs final gameboard
		DisplayBoard(gameBoard);
		// OutputWinner - outputs winner of the game
		OutputWinner(winnerToken, gamePlayer);

		// Input - Prompts and reads if user wants to play again
		cout << "Do you want to play again (Y or N)? ";
		cin.get(newGame);
		cin.ignore(1000, '\n');

		// Input - Prompts and reads if user wants to change players or
		//         tokens
		if(toupper(newGame) == 'Y')
		{
			cout << "Do you want to change players or change markers "
				 << "(Y or N)? ";
			cin.get(newPlayerQuery);
			cin.ignore(1000, '\n');
			newPlayer = toupper(newPlayerQuery) == 'Y';
		}
	}// End while(toupper(newGame) != 'N')

	return 0;
}


