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
* SwitchToken
 * ------------------------------------------------------------------------
 * 	 This function switches the active player.
 * 	 It takes in a parameter representing the current player's token
 * 	 as a character value and returns the opposite (opponent's token).
 * 	 For example, if this function receives an X it returns an 0. If it
 * 	 receives and O it returns and X.
 * RETURNS: the token opposite of the one in which it receives
 * ------------------------------------------------------------------------
 * Pre-Conditions
 * 		PLAYER[] - The player information must be predefined
 * 		token    - The current player token must be predefined
 * Post-Conditions
 * 		The new token opposite of the once recieved is returned.
 *************************************************************************/
char SwitchToken(const PlayerInfo PLAYER[],  // IN - Player Information
				 char token)                 // IN - Current player's token
{
	// Variable List
	char newToken;     //OUT - holds value of the new token

	// Processing - Switches the current token to the opposite token
	if(token == PLAYER[0].token)
	{
		newToken = PLAYER[1].token;
	}
	else if (token == PLAYER[1].token)
	{
		newToken = PLAYER[0].token;
	}

	return newToken;
}
