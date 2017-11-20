/***********************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Title		: Personal Exercise - Structs
 * CLASS		: CS1B
 * SECTION		: MTh: 10am
 * DATE 		: 3/6/14
 ************************************************************************/

#include "StructExerciseHeader.h"

int main()
{
	/**********************************************************************
	 * C O N S T A N T S
	 * --------------------------------------------------------------------
	 *********************************************************************/
	const int NUM_ACCTS = 10;
	const int HIGH_POSSIBLE_CHOICE = 5;
	const int LOW_POSSIBLE_CHOICE = 1;

	PersonRec   accounts[NUM_ACCTS];
	MenuOptions userChoice;
	string      queryName;
	int         foundIndex;

	userChoice = MenuOptions(GetUserInt(HIGH_POSSIBLE_CHOICE,
										LOW_POSSIBLE_CHOICE));

	while(userChoice != Exit)
	{
		switch(userChoice)
		{
			case AddRecords: 	AddRecord(accounts, NUM_ACCTS);
							 	break;
			case RemoveRecords: queryName = GetName(userChoice);
								RemoveRecord(accounts,
											 NUM_ACCTS,
											 queryName);
								break;
			case SearchRecords: queryName = GetName(userChoice);
								foundIndex = SearchRecord(accounts,
														  NUM_ACCTS,
														  queryName);
								OutSearchResult(foundIndex);
								break;
			case ClearConsole:  system("cls");
		}

		userChoice = GetUserInt(HIGH_POSSIBLE_CHOICE, LOW_POSSIBLE_CHOICE);
	}


	return 0;
}
