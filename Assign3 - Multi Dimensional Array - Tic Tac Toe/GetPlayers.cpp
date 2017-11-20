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
 * GetPlayers
 *	 This function prompts the user and gets the input for the players'
 *	 names and their tokens.
 * RETURNS: the players' information will be returned
 ************************************************************************/
void GetPlayers(PlayerInfo player[])   // OUT - player's info
{
	// Variable List
	string name;
	char   token;
	int    playerNum;
	char   usedToken;
	bool   tokenOkay;

	usedToken = '\'';

	for(playerNum = 0; playerNum < 2; playerNum++)
	{
		cout << "Enter player's name: ";
		getline(cin, player[playerNum].name);
		do
		{
			cout << "Pick a player marker (limit to one character): ";
			cin.get(token);
			cin.ignore(1000, '\n');
			if(usedToken == toupper(token))
			{
				cout << "**Error - that player marker is already taken, "
					 << "please input another**\n";
				tokenOkay = false;
			}
			else
			{
				tokenOkay = true;
			}
			usedToken = toupper(token);
		}while(!tokenOkay);

		player[playerNum].token = toupper(token);
		cout << endl;
	}
	cout << endl;
}
