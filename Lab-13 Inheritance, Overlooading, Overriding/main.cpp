/*******************************************************************************
*	AUTHOR	 : Anthony Ramirez & Jeffrey Lo
*	STU ID#	 : 369397	  & 374780
*	LAB # 13 : Inheritance, Overloading, Overriding
*	CLASS    : CS1B
*	SECTION  : 8-1PM Monday-Thursday
*	DUE DATE : 6/26/14
******************************************************************************/

#include "Header.h"

/*******************************************************************************
*	Inheritance, Overloading, Overriding
* ----------------------------------------------------------------------------
*	This program will allow a user to keep track of 2 pigs and 2 sheep. The
*	program will allow the user to display the animal's information and
*	adjust the age and the price of the animal. The user can also reset the
*	4 animal's information.
* ----------------------------------------------------------------------------
*	INPUT:
*	 userCommand : input choice by user for which function to run based
*	  on a main menu.
*	 animalNum	 : input choice by user for which animal the user wants
*	  to change.
*	 animalAge	 : input choice by user for the animal's new age
*	 animalPrice : input choice by user for the animal's new price
*	 reinitResponse	: yes or no response on whether user wants to
*	  reinitialize the specified animals
*
*	OUTPUT:
*	 All outputs are through functions
******************************************************************************/
int main()
{
	// DECLARATIONS
	/***************************************************************************
	* C O N S T A N T S
	* -------------------------------------------------------------------------
	* Used for Input/Output
	* -------------------------------------------------------------------------
	* LOW_MENU_BOUND   - Integer for lowest menu option
	* UP_MENU_BOUND    - Integer for highest menu option
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
	* AR_SIZE	   - The size of the animal array
	***************************************************************************/
	const int    LOW_MENU_BOUND   = 0;
	const int    UP_MENU_BOUND    = 5;
	const int    LOW_AGE_BOUND	  = 0;
	const int	 UP_AGE_BOUND	  = 10;
	const int    UP_CHANGE_BOUND  = 4;
	const int    LOW_CHANGE_BOUND = 1;
	const int	 LOW_VAL_BOUND	  = 0;
	const int	 UP_VAL_BOUND	  = 400000;
	const string USER_COMM_PROMPT = "Enter selection: ";
	const string REINIT_PROMPT    = "Are you sure you want to  reinitialize (Y/N)? ";
	const string CHANGE_PROMPT    = "Select the animal you'd like to change: ";
	const string AGE_PROMPT	      = "NEW AGE: ";
	const string VALUE_PROMPT	  = "NEW VALUE: ";
	const int	 AR_SIZE	      = 4;

	// Variable List
	int     userCommand;	        //IN   - input choice from the user
	int	   animalNum;	            //IN   - inputed animal index from the user
	int	   animalAge;	            //IN   - animal age input from the user
	float	   animalPrice;	        //IN   - animal price input from the user
	AnimalList animalArray[AR_SIZE];//CALC - points to the first element in the
									//       sheep linked list
	char   reinitResponse;	        //IN   - the reinitialize response
	bool	   exit;	            //CALC - used for Sentinal value for while
									//       loop

	// OutputHeader - Outputs program header
	OutputHeader(NAME, CLASS, SECTION, AS_NUM, AS_NAME, AS_TYPE, cout);

	//DisplayMenu - Displays full menu
	DisplayMenu(cout, 'S');

	//GetCommand - Gets and checks user command
	userCommand = GetCommand(USER_COMM_PROMPT,
							 UP_MENU_BOUND,
							 LOW_MENU_BOUND,
							 'S');
	//Begin switch
	 switch(userCommand)
	{
		case INITIALIZE_ANIMALS  ://InitializeSheep - propagates sheep into
								  //array

								 InitializeSheep(animalArray);
								 //InitializePig - propagates pig into
								 //	  array
								 InitializePig(animalArray);

								 cout << "Initializing Maa, BaaBaa, "
										"Babe, and Wilbur...\n\n";
								 break;

		case START_EXIT	         :exit = true;
								 break;
	}//End switch

	if(!exit)
	{
		// DisplayMenu - Displays full menu
		DisplayMenu(cout, 'L');

		//GetCommand - Gets and checks user command
		userCommand = GetCommand(USER_COMM_PROMPT,
								 UP_MENU_BOUND,
								 LOW_MENU_BOUND,
								 'L');
	}
	//PROCESSING - Continues reprompting and executing user commands until
	//	   user enters exit command
	while(!exit && userCommand != MAIN_EXIT )
	{
		switch(userCommand)
		{
			case INITIALIZE_SHEEP  : // GetAndCheckChar - gets and
									 //                   checks a user
									 //                   input character
									 reinitResponse = GetAndCheckChar(REINIT_PROMPT,
																	  'Y', 'N');
									 // Processing - creates list if
									 //              user wants to do so
									 if(reinitResponse == 'Y')
									 {
										 cout << "Initializing Maa & "
											  << "BaaBaa...\n\n";
										//InitializeSheep - propagates sheep
										//	 into array
										InitializeSheep(animalArray);
									 }
									 else
									 {
										cout << "Sheep have not been"
										 << " re-initialized!\n\n";
									 }
									break;

			case INITIALIZE_PIG	   :// GetAndCheckChar - gets and
									//                   checks a user
									//                   input character
									reinitResponse = GetAndCheckChar(REINIT_PROMPT,
																	 'Y', 'N');
									// Processing - creates list if
									//              user wants to do so
									if(reinitResponse == 'Y')
									{
										cout << "Initializing "
										 << "Babe & Wilbur...\n\n";
										//InitializePig - propagates pigs into
										//	 array
										InitializePig(animalArray);
									}
									else
									{
										cout << "Pigs have not been"
										 << " re-initialized!\n\n";
									}

									break;

			case CHANGE_AGE	   : //DisplayMenu - Displays age menu
								DisplayMenu(cout, 'A');
								//GetCommand - gets index of animal
								//             from user
								animalNum = GetCommand(CHANGE_PROMPT,
													   UP_CHANGE_BOUND,
													   LOW_CHANGE_BOUND,
													   'A');

								//GetCommand - gets age of animal from
								//	    user
								animalAge = GetCommand(AGE_PROMPT,
													   UP_AGE_BOUND,
													   LOW_AGE_BOUND,
													   ' ');
								//AssignNewAge - assigns age to animal
								AssignAge(animalArray,
										  animalNum,
										  animalAge);

								cout << "Changing the age of "
									 << GetAnimalName(animalArray,
													  animalNum)
									 << " to "  << animalAge << "...\n\n";
								break;

			case CHANGE_VALUE	   : //DisplayMenu - displays value menu
									DisplayMenu(cout, 'V');

									//GetCommand - gets index of animal
									//             from user
									animalNum = GetCommand(CHANGE_PROMPT,
														   UP_CHANGE_BOUND,
														   LOW_CHANGE_BOUND,
														   'V');
									//GetCommand - gets price of animal
									//	    from user
									animalPrice = GetFloat(VALUE_PROMPT,
														   UP_VAL_BOUND,
														   LOW_VAL_BOUND,
														   ' ');
									//AssignNewAge - assigns price to animal
									AssignValue(animalArray, animalNum,
												animalPrice);

									cout << "\nChanging the value of "
										 << GetAnimalName(animalArray,
														  animalNum)
										 << " to "  << animalPrice << "...\n\n";
									break;

			case DISPLAY	   ://Display - displays both the pig and the
								//	 		sheep lists
								Display(animalArray);
								break;
		}// End switch(userCommand)

		// DisplayMenu - Displays full menu
		DisplayMenu(cout, 'L');

		//GetCommand - Gets and checks user command
		userCommand = GetCommand(USER_COMM_PROMPT,
								 UP_MENU_BOUND,
								 LOW_MENU_BOUND,
								 'L');
	}// End while(!exit && userCommand != MAIN_EXIT )


	// Output - End Program message
	cout << "Thanks for using my program! :)";


}
