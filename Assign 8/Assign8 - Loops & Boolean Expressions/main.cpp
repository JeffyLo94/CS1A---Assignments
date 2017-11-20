/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment #8: Loops & Boolean Expressions
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 3/20/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*************************************************************************
 *Loops & Boolean Expressions
 *________________________________________________________________________
 *
 *________________________________________________________________________
 * INPUT:
 *
 * OUTPUT:
 *
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMER : Programmer's Name
	 * CLASS     : Student's Course
	 * SECTION   : Class Days and Times
	 * ASSN_NUM  : Assignment Number (specific to this assignment)
	 * ASSN_NAME : Title of the Assignment
	 ********************************************************************/
	const char PROGRAMMER[30] = "Jeffrey Lo";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[25]    = "TTh: 10:00a - 12:00p";
	const int  ASSN_NUM       = 8;
	const char ASSN_NAME[30]  = "Loops & Boolean Expressions";

	// Processing Constants
	const int  COL_WIDTH        = 10;
	const char ACCEPT_MSG[35]   = "This candidate has been ACCEPTED!";
	const char REJECT_MSG[50]   = "This candidate has been rejected based on"
			" the ";
	const char WEIGHT_RSN[20]   = "WEIGHT requirement.";
	const char HEIGHT_RSN[20]   = "HEIGHT requirement.";
	const char BOTH_RSN[35]     = "HEIGHT and WEIGHT requirements.";
	const char INV_GEND_IN[50]  = "***** Invalid gender; please enter M or"
			" F ******";
	const char INV_HGHT_IN[100] = "***** Invalid height; please enter a"
			" height in inches between 36 and 110";
	const char INV_WGHT_IN[100] = "***** Invalid weight; please enter a"
			" weight in lbs between 50 and 1400";

	// Variable List
	char  gender;
	int   height;
	int   weight;
	int   minHeight;
	int   maxHeight;
	int   minWeight;
	int   maxWeight;
	bool  heightOK;
	bool  weightOK;
	int   totCandidates;
	int   totAccepted;
	float avgAccepted;
	float pctAccepted;

	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  Assignment #";
	cout << setw(2) << ASSN_NUM << ": " << ASSN_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	// INPUT - Prompt and Read user input for candidate's
	//         gender
	do
	{
		cout << left;
		cout << "Please enter the candidate's information (enter 'X' to exit)."
			 << endl;
		cout << setw(COL_WIDTH) << "Gender: ";
		cin.get(gender);
		cin.ignore(1000, '\n');

		if(gender != 'm' && gender != 'M' && gender != 'f' &&
				gender != 'F')
		{
			cout << INV_GEND_IN;
			cout << endl;
		}

		cout << right;
	} while(gender != 'm' && gender != 'M' && gender != 'f' &&
			gender != 'F');

	totCandidates = 0;
	totAccepted = 0;

	// PROCESSING
	while (gender != 'x' && gender != 'X')
	{
		// INPUT - Prompt and Read user input for candidate's
		//         height
		do
		{
			cout << left;
			cout << setw(COL_WIDTH) << "Height: ";
			cin  >> height;
			cin.ignore(1000, '\n');

			if(height >= 36 && height <= 110)
			{
				cout << INV_HGHT_IN;
				cout << endl;
			}

			cout << right;
		} while(height >= 36 && height <= 110);

		// INPUT - Prompt and Read user input for candidate's
		//         weight
		do
		{
			cout << left;
			cout << setw(COL_WIDTH) << "Weight: ";
			cin  >> weight;
			cin.ignore(1000, '\n');

			if(weight >= 50 && weight <= 1400)
			{
				cout << INV_WGHT_IN;
				cout << endl;
			}

			cout << endl << endl;
			cout << right;
		} while(weight >= 50 && weight <= 1400);

		totCandidates = totCandidates + 1;

		if (gender == 'm' || gender == 'M')
		{
			minHeight = 65;
			maxHeight = 80;
			minWeight = 130;
			maxWeight = 250;
		}
		else
		{
			minHeight = 62;
			maxHeight = 75;
			minWeight = 130;
			maxWeight = 185;
		}

		heightOK = (height >= minHeight && height <= maxHeight);
		weightOK = (weight >= minWeight && weight <= maxWeight);

//		cout << "gender"       << gender   << endl;
//		cout << "heightOK is " << heightOK << endl;
//		cout << "weightOK is " << weightOK << endl;
//		cout << "maxWegiht = " << maxWeight << endl;

		if (heightOK && weightOK)
		{
			totAccepted = totAccepted + 1;

			cout << left;
			cout << ACCEPT_MSG;
			cout << endl << endl << endl << endl;
			cout << right;
		}
		else if (!heightOK && weightOK)
		{
			cout << left;
			cout << REJECT_MSG << HEIGHT_RSN;
			cout << endl << endl << endl << endl;
			cout << right;
		}
		else if (heightOK && !weightOK)
		{
			cout << left;
			cout << REJECT_MSG << WEIGHT_RSN;
			cout << endl << endl << endl << endl;
			cout << right;
		}
		else if (!heightOK && !weightOK)
		{
			cout << left;
			cout << REJECT_MSG << BOTH_RSN;
			cout << endl << endl << endl << endl;
			cout << right;
		}

		// INPUT - Prompt and Read user input for candidate's
		//         gender
		do
		{
			cout << left;
			cout << "Please enter the candidate's information (enter 'X' to exit)."
				 << endl;
			cout << setw(COL_WIDTH) << "Gender: ";
			cin.get(gender);
			cin.ignore(1000, '\n');

			if(gender != 'm' && gender != 'M' && gender != 'f' &&
					gender != 'F')
			{
				cout << INV_GEND_IN;
				cout << endl;
			}

			cout << right;
		} while(gender != 'm' && gender != 'M' && gender != 'f' &&
				gender != 'F');

	}

	// PROCESSING
	avgAccepted = float(totAccepted/totCandidates);
	pctAccepted = avgAccepted * 100;
//	cout << "total accepted - " << totAccepted << endl;
//	cout << "total cand - " << totCandidates << endl;
//	cout << "avg - " << avgAccepted << endl;
//	cout<< "percentage" << pctAccepted << endl;

	// OUTPUT - Outputs total candidates accepted and average
	cout << left;
	cout << totAccepted << " candidate(s) accepted!" << endl;
	cout << "That's "   << setprecision(4)           << pctAccepted
		 << "%!"        << endl;
	cout << right;

	return 0;
}
