/**************************************************************************
 * AUTHOR      : Jeffrey Lo && Owen Mack
 * STUDENT ID  : 374780     && 112325
 * LAB #10     : Implementing a Queue
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/25/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
 *
 * Implementing a Queue
 *_________________________________________________________________________
 * This program will create a queue and give a menu of commands that can
 * be executed within the queue
 *_________________________________________________________________________
 * INPUT
 *		userCommand : The command issued by the user
 *
 * OUTPUT
 *		Will output the menu and prompt the user for their command.
 *		It will then output the information that is calculated based on the
 *		command the user input.
 *************************************************************************/
int main()
{
	// DECLARATIONS
	// Constants
	/**********************************************************************
	 * CLASSSECTION : Class days and time
	 * ASNUM        : Assignment number
	 * ASNAME		: Assignment name
	 * ASTYPE		: Assignment type (homework or lab)
	 * LOW_BOUND	: Lower bound for user's age input
	 * UP_BOUND		: Upper bound for user's age input
	 * PROMPT     	: Prompt for the user
	 *********************************************************************/
	const string CLASSSECTION       = "M-Th: 8:00a - 1:00p";
	const int    ASNUM              = 10;
	const string ASNAME             = "Implementing a Queue";
	const char   ASTYPE             = 'L';
	const int    LOW_BOUND          = 0;
	const int    UP_BOUND           = 7;
	const string PROMPT             = "Enter a command? ";

	// Variables
	int        userCommand; // CALC - Command issued by user
	PersonInfo *head;       // CALC - Start of the linked-list
	PersonInfo *tail;

	// INITIALIZATIONS
	head = NULL;
	tail = NULL;

	// OutputClassHeader - outputs the lab header
	OutputClassHeader(CLASSSECTION, ASNUM, ASNAME, ASTYPE, cout);

	// Displays the option menu
	DisplayMenu(cout); // OUT - Output stream

	// Gets the command from the user and assigns it to userCommand
	userCommand = GetAndCheckOneInt(PROMPT, UP_BOUND, LOW_BOUND);

	// Processing - continues prompting for commands until user exits
	while(userCommand != EXIT)
	{
		PerformUserCommand(userCommand, head, tail);

		// Displays the option menu
		DisplayMenu(cout); // OUT - Output stream

		// Gets the command from the user and assigns it to userCommand
		userCommand = GetAndCheckOneInt(PROMPT, UP_BOUND, LOW_BOUND);
	}
}
