/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Parallel Arrays
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 5/6/14
 ************************************************************************/


#include "AssignTenHeader.h"

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
	 ********************************************************************/
	const int ARRAY_SIZE  = 10;
	const int COL_ONE_WIDTH = 9;
	const int COL_TWO_WIDTH = 25;
	const int COL_THREE_WIDTH = 10;
	const int FILE_IN_ALIGN = 40;

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

	// Processing - Initializes variables
	balanceSum = 0.0;
	namesFound = 0.0;

	// Input - Prompts and reads input and output file names
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

	// PrintHeaderToFile - Prints assignment header to output file
	PrintHeaderToFile(outFile, "Parallel Arrays", 'A', 10);

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

	// Processing - Calls NameSearchToFile to search array for user-defined
	//              name and outputs whether or not searched name was
	//              found. Loops until user enters done or Done
	while(searchName != "done" && searchName != "Done")
	{
		// NameSearchToFile - searches name array for specified name,
		//                    outputs balance, id, and name to output file
		//                    if name is found and returns index where the
		//                    name was found
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
	cout << "/nThank you for using my program.";
	cout << right;

	return 0;
}


