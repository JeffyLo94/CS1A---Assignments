/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Sem Diaz
 * STUDENT ID  : 374780     & 374640
 * LAB #11     : Creating an Ordered List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/30/14
 *************************************************************************/

#include "Header.h"

/**************************************************************************
* Creating an Ordered List
*--------------------------------------------------------------------------
*	This Program implements a doubly linked list by adding each node in
*	in alphabetical order and then allows user commands to create, display,
*	search, remove, clear, and check the list if it is empty.
*--------------------------------------------------------------------------
* Inputs
* 		userCommand   : User command input from user which is a number
* 						from 0 to 7
*
* Outputs
* 		head	      : The linked list is output
**************************************************************************/
int main()
{
	// DECLARATIONS
	/**********************************************************************
	* C O N S T A N T S
	* --------------------------------------------------------------------
	* Used for Input/Output
	* --------------------------------------------------------------------
	* LOW_MENU_BOUND   - Integer for lowest menu option
	* UP_MENU_BOUND    - Integer for highest menu option
	* USER_COMM_PROMPT - The input prompt for the user's command
	**********************************************************************/
	const int    LOW_MENU_BOUND     = 0;
	const int    UP_MENU_BOUND      = 7;
	const string USER_COMM_PROMPT   = "Enter a command (0 to exit): ";

	// Variable List
	PersonInfo* head;		 //OUT  - The linked list
	PersonInfo* targetNode;  //CALC - Specific nodes being removed/searched
	int			userCommand; //IN   - User inputed command integer
	bool		empty;		 //CALC - Boolean holding if list is empty
	string      queryName;	 //IN   - User provided search string

	// INITIALIZATION
	head = NULL;

	// OutputProgramHeader - Outputs program header
	OutputProgramHeader(cout, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	// DisplayMenu - Displays the command menu
	DisplayMenu(cout);

	// GetCommand - Gets user command
	userCommand = GetCommand(USER_COMM_PROMPT, UP_MENU_BOUND, LOW_MENU_BOUND);

	// Processing - Exits program when user inputs 0
	while (userCommand != EXIT)
	{
		// Processing - resets targetNode
		targetNode = NULL;
		switch(userCommand)
		{
			//CreateList - creates the list
			case CREATELIST  : CreateList(head);
							   break;
			// Processing - Displays list if it is not empty
			case DISPLAYLIST : if(IsEmpty(head))
							   {
								   cout << "The list is empty.\n\n";
							   }
							   else
							   {
								   //OutputList - Outputs the list
								   OutputList(head, cout);
							   }
							   break;
			// Processing - Displays list in reverse if list not empty
			case REVERSELIST : if(IsEmpty(head))
							   {
								   cout << "The list is empty.\n\n";
							   }
							   else
							   {
								   //OutReverseList - Outputs list in
								   //                 reverse
								   OutReverseList(head, cout);
							   }
							   break;
							   //IsEmpty - Checks if the list is empty
			case ISEMPTY	 : empty = IsEmpty(head);
							   //Output - Tells user if the list is empty
							   //		  or not
							   if(empty)
							   {
								   cout << "Yes, the list is empty.\n\n";
							   }
							   else
							   {
								   cout << "No, the list is NOT empty.\n\n";
							   }
							   break;
			// Input - Prompts and reads user for target string to find
			case SEARCHNAME  : if(!(IsEmpty(head)))
							   {
								   cout << "Who would you like to search for? ";
								   getline(cin, queryName);
								   // SearchName - Finds searched name and
								   //              returns node information
								   targetNode = SearchName(head,queryName);
								   // Output - Outputs info node was found
								   if(targetNode != NULL)
								   {
									   cout << left 			  << endl;
									   cout << setw(9) 			  << "Name:"
											<< targetNode->name   << endl;
									   cout << setw(9) 			  << "Gender:"
											<< targetNode->gender << endl;
									   cout << setw(9) 			  << "Age:"
											<< targetNode->age    << endl;
									   cout << right			  << endl;
								   }
								   else
								   {
									   cout << "I'm sorry, \"" << queryName
											<< "\" was NOT found!\n\n";
								   }
							   }
							   else
							   {
								   cout << "The list is empty\n\n";
						       }
							   break;
			// Input - Prompts and reads user for target string to remove
			case REMOVE		 : if(!(IsEmpty(head)))
							   {
								   cout << "Who would you like to remove? ";
								   getline(cin, queryName);
								   // SearchName - Finds searched name and
								   //              returns node info
								   targetNode = SearchName(head,queryName);
								   // Processing - removes node if node with
								   //              target string is found
								   if(targetNode != NULL)
								   {
									   // Output - Prompts user that the node is
									   //		   being removed
										cout << "\nRemoving " << targetNode->name
											 << "!\n";
									   head = RemoveNode(head, targetNode);
								   }
								   else
								   {
									   cout << "I'm sorry, \"" << queryName
											<< "\" was NOT found!\n\n";
								   }
						   	   }
						   	   else
						   	   {
								   cout << "The list is empty\n\n";
						       }
							   break;
			case CLEARLIST	 : // Processing - empties linked list and sets
							   //			   head to NULL
							   ClearList(head);
							   break;
			default 		 : cout << "\n**ERROR - UNDEFINED"
									<< " User command**\n";
		}

		// DisplayMenu - Displays the command menu
		DisplayMenu(cout);

		// GetCommand - Gets user command
		userCommand = GetCommand(USER_COMM_PROMPT, UP_MENU_BOUND, LOW_MENU_BOUND);
	}

	// Output - End program message
	cout << "\n\nThanks for using our program!!!!!\n\t;)     <3";

	return 0;
}
