/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Breanna Nelson
 * STUDENT ID  : 374780     & 272229
 * LAB #12     : Intro to OOP
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/2/14
 *************************************************************************/

#include "Header.h"

/**************************************************************************
* Intro to OOP
*--------------------------------------------------------------------------
* This program will allow the user to keep track of animals in the user's
* care and track and change the name, age, type, and price of animal. The
* program also displays the animals in the specified list of owned animals.
* The animal information is provided by an input file.
*--------------------------------------------------------------------------
* Inputs
*	userCommand - input choice from the user
*	animalNum	- inputed animal index from the user
*	animalAge	- animal age input from the user
*	animalPrice	- animal price input from the user
*	head		- The start of the list of animals
* Outputs
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
	* START_MENU_BOUND - Integer for starting menu option
	* LOW_AGE_BOUND    - Integer for lower age bound
	* UP_AGE_BOUND     - Integer for upper age bound
	* UP_CHANGE_BOUND  - Integer for the upper change bound
	* LOW_CHANGE_BOUND - Integer for the lower change bound
	* LOW_VAL_BOUND    - Integer for the lower value bound
	* UP_VAL_BOUND     - Integer for the upper value bound
	* USER_COMM_PROMPT - The input prompt for the user's command
	* REINIT_PROMPT    - The reinitialize prompt for the user's input
	* CHANGE_PROMPT    - The change prompt for the user's command
	* AGE_PROMPT       - The age prompt for the user's command
	* VALUE_PROMPT     - The value prompt for the user's command
	**********************************************************************/
	const int    LOW_MENU_BOUND     = 0;
	const int    UP_MENU_BOUND      = 4;
	const int    START_MENU_BOUND   = 1;
	const int    LOW_AGE_BOUND		= 0;
	const int	 UP_AGE_BOUND		= 10;
	const int    UP_CHANGE_BOUND	= 3;
	const int    LOW_CHANGE_BOUND	= 1;
	const int	 LOW_VAL_BOUND		= 0;
	const int	 UP_VAL_BOUND		= 400000;
	const string USER_COMM_PROMPT   = "Enter selection: ";
	const string REINIT_PROMPT
						= "Are you sure you want to  reinitialize (Y/N)? ";
	const string CHANGE_PROMPT
						= "Select the animal you'd like to change: ";
	const string AGE_PROMPT			= "NEW AGE: ";
	const string VALUE_PROMPT		= "NEW VALUE: ";

	// Variable List
	int   	 userCommand;		//IN - input choice from the user
	int		 animalNum;			//IN - inputed animal index from the user
	int		 animalAge;			//IN - animal age input from the user
	float	 animalPrice;		//IN - animal price input from the user
	bool  	 reinitialize;		//PRO - determine if it has been reinitialized
	AnimalStruct* head;			//PRO - points to the first element in the
								//      linked list
	char 	 reinitResponse;	//IN - the reinitialize response

	// INITIALIZATION
	head = NULL;			//assigns head to NULL
	reinitialize = false;   //assigns reinitialize to false

	// OutputProgramHeader - Outputs program header
	OutputProgramHeader(cout, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	//DisplayMenu - Displays starting menu
	DisplayMenu(cout, 'S');

	//GetCommand - get and check a user inputed command
	userCommand = GetCommand(USER_COMM_PROMPT,
							 START_MENU_BOUND,
							 LOW_MENU_BOUND,
							 'S');

	//PROCESSING - Continues reprompting and executing user commands until
	//			   user enters exit command
	while(userCommand != EXIT)
	{
		switch(userCommand)
		{
			case INITIALIZE_ANIMAL : if(reinitialize == false)
									 {
									 	 cout << "Initializing Fluffy, Maa,"
									 		  << " & Babe...\n\n";
									 	 // CreateList - creates a list
										 head = CreateList();
										 reinitialize = true;
									 }
									 else
									 {
										 // GetAndCheckChar - gets and
										 //                   checks a user
										 //                   input character
										 reinitResponse
										 = GetAndCheckChar(REINIT_PROMPT,
												 	 	   'Y', 'N');
										 // Processing - creates list if
										 //              user wants to do so
										 if(reinitResponse == 'Y')
										 {
											 cout << "Initializing Fluffy, "
												  << "Maa, & Babe...\n\n";
											 // CreateList - creates a list
											 head = CreateList();
											 reinitialize = true;
										 }
										 else
										 {
											 cout << "Animals have not been"
												  << " re-initialized!\n\n";
										 }
									 }
									 break;
									 //DisplayMenu - Displays age menu
			case CHANGE_AGE		   : DisplayMenu(cout, 'A');
									 //GetCommand - gets index of animal
									 //             from user
									 animalNum = GetCommand(CHANGE_PROMPT,
															UP_CHANGE_BOUND,
															LOW_CHANGE_BOUND,
															'A');
									 //GetCommand - gets age of animal from
									 //			    user
									 animalAge = GetCommand(AGE_PROMPT,
											 	 	 	 	UP_AGE_BOUND,
											 	 	 	 	LOW_AGE_BOUND,
											 	 	 	 	' ');
									 //AssignNewAge - assigns age to animal
									 head = AssignNewAge(animalNum,
											 	 	 	 animalAge,
											 	 	 	 head);
									 break;
									 //DisplayMenu - displays value menu
			case CHANGE_VALUE	   : DisplayMenu(cout, 'V');
									 //GetCommand - gets index of animal
									 //             from user
									 animalNum = GetCommand(CHANGE_PROMPT,
															UP_CHANGE_BOUND,
															LOW_CHANGE_BOUND,
															'V');
									 //GetCommand - gets price of animal
									 //			    from user
									 animalPrice = GetFloat(VALUE_PROMPT,
															UP_VAL_BOUND,
															LOW_VAL_BOUND,
															' ');
									 //AssignNewAge - assigns price to animal
									 head = AssignNewValue(animalNum,
														   animalPrice,
														   head);
									 break;
									 //DisplayList - displays list of animals
			case DISPLAY		   : DisplayList(head, cout);
									 break;
		}

		// DisplayMenu - Displays full menu
		DisplayMenu(cout, 'L');

		//GetCommand - Gets and checks user command
		userCommand = GetCommand(USER_COMM_PROMPT,
								 UP_MENU_BOUND,
								 LOW_MENU_BOUND,
								 'L');
	}

	//Output - outputs valediction message
	cout << "Thank you for using our program :-)\n";

	return 0;
}
