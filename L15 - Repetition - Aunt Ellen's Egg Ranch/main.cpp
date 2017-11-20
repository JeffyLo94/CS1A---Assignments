/************************************************************************
 * AUTHOR		: Jeffrey Lo & Derrick Na
 * STUDENT ID	: 374781 & 868158
 * LAB #15		: Repetition - Aunt Ellen's Egg Ranch
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 4/10/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*************************************************************************
 * Lab 15 - Repetition - Aunt Ellen's Egg Ranch
 *________________________________________________________________________
 * This program will ask the user to input the number of eggs gathered and
 * the program will output the number of dozens as well as the number of
 * excess eggs. It will also output the total number of eggs gathered in
 * dozens and remaining and the average number of eggs input.
 *________________________________________________________________________
 * INPUT:
 *      numEggs:   Input from user for the number of egs
 *
 * OUTPUT:
 *      numDozens:
 *      extraEggs:
 *      avgEggs:
 *      totDozen:
 *      totRemain:
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
	 * LAB_NUM   : Lab Number (specific to this lab)
	 * LAB_NAME  : Title of the Lab
	 ********************************************************************/
	const char PROGRAMMER[30] = "Jeffrey Lo & Derrick Na";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[25]    = "TTh: 10:00a - 12:00p";
	const int  LAB_NUM        = 15;
	const char LAB_NAME[36]   = "Repetition - Aunt Ellen's Egg Ranch";

	const int  ST_LOOP        = 1;
	const int  END_LOOP       = 3;
	const char TEST[7]        = "TEST #";

	const int  DOZEN          = 12;

	int   numEggs;
	int   numDozens;
	int   extraEggs;
	int   eggCounter;
	int   totDozen;
	int   totRemain;
	int   totEggs;
	int   testNum;
	float avgEggs;

	//INITIALIZATION
	eggCounter  = 0;
	totEggs     = 0;
	testNum     = 0;

	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	for(testNum = ST_LOOP; testNum <= END_LOOP; testNum = testNum + 1)
	{
		cout << left;
		cout << TEST     << testNum << endl;
		cout << "Welcome to Aunt Ellen's eggs to dozens converter!";
		cout << endl     << endl;
		cout << "\tEnter the number of eggs gathered: ";
		cin  >> numEggs;
		cout << right;

		while(numEggs >= 0)
		{
			numDozens  = numEggs / DOZEN;
			extraEggs  = numEggs % DOZEN;
			totEggs    = totEggs + numEggs;
			eggCounter = eggCounter + 1;

			if(extraEggs > 0 && numDozens > 0)
			{
				cout << left;
				cout << "\tYou have " << numDozens << " dozen ";
				cout << extraEggs   << " eggs."  << endl << endl;
				cout << right;
			}
			else
			{
				if(extraEggs > 0)
				{
					cout << left;
					cout << "\tYou have " << extraEggs   << " eggs.";
					cout << endl          << endl;
					cout << right;
				}
				else
				{
					cout << left;
					cout << "\tYou have " << numDozens   << " dozen eggs.";
					cout << endl          << endl;
					cout << right;
				}
			}


			cout << "\tEnter the number of eggs gathered: ";
			cin  >> numEggs;
			cin.ignore(1000,'\n');
			cout << right;
		}

		avgEggs   = totEggs / float(eggCounter);
		totDozen  = totEggs / DOZEN;
		totRemain = totEggs % DOZEN;

		if(totEggs > 0)
		{
			cout << left;
			cout << setprecision(1) << fixed;
			cout << "\nTOTALS:"     << endl;
			cout << "\tOn average " << avgEggs;
			cout << " eggs have been gathered.";
			cout << endl;
			cout.unsetf(ios::fixed);
			cout << setprecision(6);
			cout << "\tA total of " << totDozen << " dozen and ";
			cout << totRemain       << " eggs have been gathered!";
			cout << endl            << endl     << endl;
			cout << right;
		}

		eggCounter  = 0;
		totEggs     = 0;
	}

	return 0;
}
