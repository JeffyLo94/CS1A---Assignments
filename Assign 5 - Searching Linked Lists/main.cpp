/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

// Preprocessor Directives
#include "Header.h"

/**************************************************************************
 * Program Name
 *------------------------------------------------------------------------
 *	This program <description>
 *------------------------------------------------------------------------
 *	Input
 *		inputVariable  - <input description>
 *	Output
 *		outputVariable - <output description>
 *************************************************************************/
int main()
{
	/**********************************************************************
	* C O N S T A N T S
	* --------------------------------------------------------------------
	* Used for ...
	* --------------------------------------------------------------------
	* LOW_MENU_BOUND   - Integer for lowest menu option
	* UP_MENU_BOUND    - Integer for highest menu option
	* USER_COMM_PROMPT - The input prompt for the user's command
	**********************************************************************/
	const int    LOW_MENU_BOUND     = 0;
	const int    UP_MENU_BOUND      = 6;
	const string USER_COMM_PROMPT   = "Enter an option: ";

	// Structs

	// Variable List
	MovieInfo *dvdList;
	string    inFileName;
	string    outFileName;
	int       userCommand;
	ofstream  oFile;
	string    searchStr;
	int       searchInt;
	int       itemsFound;

	// Enums

	// Initializations

	// OutputProgramHeader - Outputs Assignment Header
	OutputProgramHeader(cout, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	// GetFileName - Gets file names from user
	inFileName  = GetFileName('I');
	outFileName = GetFileName('O');

	// CreateList - creates list of dvd/movies
	dvdList = CreateList(inFileName);

	// DisplayMenu - Outputs menu of user commands
	DisplayMenu(cout);

	// GetAndCheckOneInt - Gets one integer command from user
	userCommand = GetCommand(USER_COMM_PROMPT,
									UP_MENU_BOUND,
									LOW_MENU_BOUND);

	// Processing - opens output file
	oFile.open(outFileName.c_str());

	// Processing - continues prompting and performing user commands until
	//              user exits.
	while(userCommand != EXIT)
	{
		searchStr.clear();
		searchInt = 0;
		itemsFound = 0;

		switch(userCommand)
		{
			case OUTLIST	  : cout << "Listing all movies!\n";
								OutputList(oFile, dvdList);
								break;
			case TITLESEARCH  : cout << "Which title are you looking for? ";
								getline(cin, searchStr);
								cout << "\nSearching for the title "
									 << searchStr;
								itemsFound = SearchList(userCommand,
														searchInt,
														searchStr,
														dvdList,
														oFile);
								if(itemsFound > 0)
								{
									cout << "\nFound the movie "
										 << searchStr << endl << endl;
								}
								else
								{
									cout << "\nSorry the movie \""
										 << searchStr
										 << "\" was not found.\n\n";
								}
								break;
			case GENRESEARCH  : cout << "Which genre are you looking for? ";
								getline(cin, searchStr);
								cout << "\nSearching for the genre "
									 << searchStr;
								itemsFound = SearchList(userCommand,
														searchInt,
														searchStr,
														dvdList,
														oFile);
								if(itemsFound > 0)
								{
									cout << "\nFound " << itemsFound
										 << " movies for the genre "
										 << searchStr  << "!\n\n";
								}
								else
								{
									cout << "\nSorry no movies for the "
										 << "genre, "
										 << searchStr
										 << " were not found.\n\n";
								}
								break;
			case ACTORSEARCH  : cout << "Which actor are you looking for? ";
								getline(cin, searchStr);
								cout << "\nSearching for the actor "
									 << searchStr;
								itemsFound = SearchList(userCommand,
														searchInt,
														searchStr,
														dvdList,
														oFile);
								if(itemsFound > 0)
								{
									cout << "\nFound " << itemsFound
										 << " movies for the actor "
										 << searchStr  << "!\n\n";
								}
								else
								{
									cout << "\nSorry no movies for the "
										 << "actor, "
										 << searchStr
										 << " were not found.\n\n";
								}
								break;
			case YEARSEARCH   : searchInt =
					GetAndCheckOneInt("Which year are you looking for? ",
									  3000, 1878);

								cout << "\nSearching for the year "
									 << searchInt;
								itemsFound = SearchList(userCommand,
														searchInt,
														searchStr,
														dvdList,
														oFile);
								if(itemsFound > 0)
								{
									cout << "\nFound " << itemsFound
										 << " movies for the year "
										 << searchInt  << "!\n\n";
								}
								else
								{
									cout << "\nSorry no movies for the "
										 << "year, "
										 << searchStr
										 << " were not found.\n\n";
								}
								break;
			case RATINGSEARCH : searchInt =
					GetAndCheckOneInt("Which rating are you looking for? ",
									  9, 0);

								cout << "\nSearching for the year "
									 << searchInt;
								itemsFound = SearchList(userCommand,
														searchInt,
														searchStr,
														dvdList,
														oFile);
								if(itemsFound > 0)
								{
									cout << "\nFound " << itemsFound
										 << " movies for the rating "
										 << searchInt  << "!\n\n";
								}
								else
								{
									cout << "\nSorry no movies for the "
										 << "rating, "
										 << searchStr
										 << " were not found.\n\n";
								}
								break;
			default			  : cout << "\n**ERROR- Command not found**\n";
		}

		// DisplayMenu - Outputs menu of user commands
		DisplayMenu(cout);

		// GetAndCheckOneInt - Gets one integer command from user
		userCommand = GetAndCheckOneInt(USER_COMM_PROMPT,
										UP_MENU_BOUND,
										LOW_MENU_BOUND);
	}
	oFile.close();

	cout << "\nThank You for using this program! Good Bye!\n";

	return 0;
}
