/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Parallel Arrays
 * CLASS		: CS1B
 * SECTION		: MTh: 8am-1pm
 * DUE DATE		: 6/10/14
 ************************************************************************/

#include "AssignTwoHeader.h"

/*************************************************************************
 * Assignment 2: Parallel Arrays
 *------------------------------------------------------------------------
 * This program will recieve names, ids, and balance information from an
 * 	input file and store them into parallel arrays. The program then
 * 	prompts the user for a name to search; when found, the program outputs
 * 	the person's id, name, and balance to the output file. The program also
 * 	calculates the average of all balances of the found names.
 *------------------------------------------------------------------------
 * INPUT
 * 		-inFileName  : Holds input file name provided by user
 * 		-outFileName : Holds output file name provided by user
 * 		-searchName  : User defined name search query
 * 		-idAr[]      : Array that holds individuals' ID numbers
 * 		-balanceAr[] : Array that holds individuals' balance
 * 		-nameAr[]    : Array that holds individuals' names
 * OUTPUT
 * 		-avgBalance  : Holds average of found name balances
 * 		-outFile     : Holds output file
 * 		-namesFound  : Holds names found from search
 *************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR FORMATING
	 * -------------------------------------------------------------------
	 * ARRAY_SIZE      : Holds value for array size for 3 parallel arrays
	 * COL_ONE_WIDTH   : Holds setw size for first column
	 * COL_TWO_WIDTH   : Holds setw size for second column
	 * COL_THREE_WIDTH : Holds setw size for third column
	 * FILE_IN_ALIGN   : Holds setw size for input/output file prompts
	 * -------------------------------------------------------------------
	 * USED FOR PRINT HEADER
	 * -------------------------------------------------------------------
	 * PROGRAMMER : Programmer Name
	 * CLASS      : Class Name
	 * CLASS_TIME : Section Time
	 * AS_NUM     : Holds Assignment Number
	 * AS_NAME    : Holds Assignment Name
	 * AS_TYPE    : Holds Assignment Type (Lab or Assignment)
	 *********************************************************************/
	const int ARRAY_SIZE  = 10;
	const int COL_ONE_WIDTH = 9;
	const int COL_TWO_WIDTH = 25;
	const int COL_THREE_WIDTH = 10;
	const int FILE_IN_ALIGN = 40;
	const string PROGRAMMER = "Jeffrey Lo";
	const string CLASS      = "CS1B";
	const string CLASS_TIME = "M-TH 8am - 1pm";
	const int    AS_NUM     = 2;
	const string AS_NAME    = "Parallel Arrays";
	const char   AS_TYPE    = 'A';

	// Variable List
	ofstream outFile;               //IN/OUT  - Output file
	int      idAr[ARRAY_SIZE];      //IN/CALC - id numbers from input file
	float    balanceAr[ARRAY_SIZE]; //IN/CALC - balance from input file
	string   nameAr[ARRAY_SIZE];    //IN/CALC - names from input file
	string   inFileName;            //IN      - Input file name
	string   outFileName;           //IN      - Output file name
	string   searchName;            //IN      - Holds name to be searched
	int      foundValue;            //IN/CALC - Holds index of found name
	float    balanceSum;            //CALC    - Holds sum of balances of
									//          names found
	float    avgBalance;            //CALC    - Holds average of balances
									//          of names found
	float    namesFound;            //CALC    - Holds number of names found


	// Input - Prompts and reads input and output filenames
	cout << left;
	cout << setw(FILE_IN_ALIGN)
		 << "What input file would you like to use? ";
	getline(cin, inFileName);
	cout << setw(FILE_IN_ALIGN)
		 << "What output file would you like to use? ";
	getline(cin, outFileName);
	cout << endl;
	cout << right;


	// FileToArray - Transfers input file data into 3 parallel arrays that
	//               hold names, balances, and id numbers.
	FileToArray(idAr, balanceAr, nameAr, ARRAY_SIZE, inFileName);

	// Processing - opens output file
	outFile.open(outFileName.c_str());

	// PrintHeaderToFile - Outputs Assignment Header to output file
	PrintHeaderToFile(outFile, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
			          AS_NAME, AS_TYPE);

	// Output - outputs table heading to output file
	outFile << left;
	outFile << setw(COL_ONE_WIDTH) << "ID #"        << setw(COL_TWO_WIDTH)
			<< "NAME"              << "BALANCE DUE" << endl;
	outFile << setw(COL_ONE_WIDTH) << "----"        << setw(COL_TWO_WIDTH)
			<< "--------------------"
			<< "-----------"       << endl;
	outFile << right;

	// Input - Prompts and reads input for name user wants to search for
	cout << "Who do you want to search for (enter done to exit): ";
	getline(cin, searchName);

	/*********************************************************************
	 * Processing - Calls NameSearchToFile to search array for user-defined
	 * 			    name and outputs whether or not searched name was
	 * 			    found. Loops until user enters done or Done
	 *********************************************************************/
	while(searchName != "done" && searchName != "Done")
	{
		/*****************************************************************
		 * NameSearchToFile - searches name array for specified name,
		 *                    outputs balance, id, and name to output file
		 *                    if name is found and returns index where the
		 *                    name was found
		 *****************************************************************/
		foundValue = NameSearchToFile(outFile, balanceSum, idAr, balanceAr,
									  nameAr, ARRAY_SIZE, searchName);

		// Processing - Outputs whether or not searched name was found
		if(foundValue < ARRAY_SIZE)
		{
			cout << "Found.\n\n";
			namesFound++;
		}
		else
		{
			cout << searchName << " was not found.\n\n";
		}

		cout << "Who do you want to search for (enter done to exit): ";
		getline(cin, searchName);
	}

	// Processing - Calculates average of balances from names found
	avgBalance = balanceSum / namesFound;

	// Output - outputs average balance to output file
	outFile << endl                    << right
			<< setw(COL_ONE_WIDTH + COL_TWO_WIDTH)
			<< "Average Balance Due: " << "$"
			<< right                   << setw(COL_THREE_WIDTH)
			<< setprecision(2)         << fixed
			<< avgBalance;

	outFile.close();

	// Output - outputs valediction for program ending
	cout << left;
	cout << "\nThank you for using my program.";
	cout << right;

	return 0;
}
