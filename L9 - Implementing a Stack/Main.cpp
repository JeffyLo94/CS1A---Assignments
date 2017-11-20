/**************************************************************************
 * AUTHOR      : Duncan Bauer && Jeffrey Lo
 * STUDENT ID  : 290722 && 374780
 * LAB #9      : Implementing a Stack
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/23/14
 *************************************************************************/

#include "Header.h"
/**************************************************************************
 *
 * Implementing a Stack
 *_________________________________________________________________________
 * This program will create a stack and give a menu of commands that can
 * be executed within the stack
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
	const int    ASNUM              = 8;
	const string ASNAME             = "Implementing a Stack";
	const char   ASTYPE             = 'L';
	const int    LOW_BOUND          = 0;
	const int    UP_BOUND           = 6;
	const string PROMPT             = "Enter a command? ";

	// Variables
	int        userCommand; // CALC - Command issued by user
	PersonInfo *head;       // CALC - Start of the linked-list


	// INITIALIZATIONS
	head = NULL;

	OutputClassHeader(CLASSSECTION, // OUT - Class times
					  ASNUM, 		// OUT - Assn number
					  ASNAME, 		// OUT - Assn name
					  ASTYPE,		// OUT - Assn type
					  cout);		// OUT - Output stream

	// Displays the option menu
	DisplayMenu(cout); // OUT - Output stream

	// Gets the command from the user and assigns it to userCommand
	userCommand = GetAndCheckOneInt(PROMPT,    // OUT - Prompts the user
								    UP_BOUND,  // OUT - input's lower bound
								    LOW_BOUND);// OUT - input's upper bound
	while(userCommand != EXIT)
	{
		switch(userCommand)
		{
			case PUSH     : head = Push(head); // CALC - start of the list
					        break;
			case POP      : head = Pop(head, // CALC - start of the list
									   cout);// OUT  - output stream
					        break;
			case ISEMPTY  : PrintIsEmpty(head, // CALC - start of list
							             cout);// OUT  - output stream
						    break;
			case PEEK     : Peek(head,  // CALC - start of list
								 cout); // OUT  - output stream
					        break;
			case SIZE     : PrintSize(head, // CALC - start of the list
									  cout);// OUT  - output stream
					        break;
			case OUTSTACK : OutputStack(head, // CALC - start of the list
										cout);// OUT  - output stream
				            break;
			default		  : cout << "Error\n\n";
		}

		// Displays the option menu
		DisplayMenu(cout); // OUT - Output stream

		// Gets the command from the user and assigns it to userCommand
		userCommand = GetAndCheckOneInt(PROMPT,    // OUT - Prompts the
												   //       user
									    UP_BOUND,  // OUT - input's lower
												   //       bound
									    LOW_BOUND);// OUT - input's upper
												   //       bound
	}
}
