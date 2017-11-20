/************************************************************************
 * AUTHOR		: Jeffrey Lo & Anthony Ramirez
 * STUDENT ID	: 374781 & 369397
 * LAB #14		: Repetition - FLo's Party Planner
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 3/4/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*************************************************************************
 * Lab 14 - Repetition - Flo's Party Planner
 *________________________________________________________________________
 * This program will obtain the name, age and chocolate preference for
 * each guest. The program will then determine the what snack and beverage
 * to serve each guest. The program will also indicate how many bags and
 * cases need to be purchased.
 *________________________________________________________________________
 * INPUT:
 *  guestName:   input by user for guest's name
 *  guestAge:    input by user for guest's age
 *  chocoPref:   input by user for guest's chocolate preference
 *  nutPref:     input by user for guest's nut preference
 *
 * OUTPUT:
 * 	snack:       outputs the snack served for each individual
 * 	beverage:    outputs the beverage served for each individual
 * 	mMBag:       outputs the number of M&M bags
 * 	peanutBag:   outputs the number of Peanut M&M bags
 * 	skittleBag:  outputs the number of Skittle bags
 * 	juiceCase:   outputs the number of Juice cases
 * 	sodaCase:    outputs the number of Soda cases
 * 	wineCase:    outputs the number of Wine cases
 * 	skitServ:    outputs the number of servings of Skittles
 * 	mMServ:      outputs the number of servings of M&Ms
 * 	peanutServ:  outputs the number of servings of Peanut M&Ms
 * 	sodaServ:    outputs the number of servings of Sodas
 * 	juiceServ:   outputs the number of servings of Juices
 * 	wineServ:    outputs the number of servings of Wines
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
	 * -------------------------------------------------------------------
	 * USED FOR FORMATTING
	 * -------------------------------------------------------------------
	 * NAME_SIZE  : sets guestName array size
	 * GUEST_AMT  : holds the set amount of guests
	 * COL_WIDTH  : sets setw() width for input prompts
	 * SNACK_SIZE : sets snack array size
	 * BEV_SIZE   : sets beverage array size
	 * OUT_COL    : sets setw() width for output table
	 * -------------------------------------------------------------------
	 * USED FOR PROCESSING
	 * -------------------------------------------------------------------
	 * CASE_SIZE  : holds the set amount of servings per case of beverage
	 * BAG_SIZE   : holds the set amount of servings per bag of snack
	 ********************************************************************/
	const char PROGRAMMER[30] = "Jeffrey Lo & Anthony Ramirez";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[25]    = "TTh: 10:00a - 12:00p";
	const int  LAB_NUM        = 14;
	const char LAB_NAME[35]   = "Repetition - Flo\'s Party Planner";

	//Formatting Constants
	const int NAME_SIZE   = 30;
	const int GUEST_AMT   = 12;
	const int COL_WIDTH   = 31;
	const int SNACK_SIZE  = 16;
	const int BEV_SIZE    = 6;
	const int OUT_COL     = 9;

	//Processing constants
	const int CASE_SIZE   = 6;
	const int BAG_SIZE    = 4;

	//Processing Variables
	int  count;			       //CALC & OUT --> is the LCV and Guest Number
	// Input Variables
	char guestName[NAME_SIZE]; //IN & OUT   --> input from user for guest
							   //               name
    int  guestAge;             //IN & CALC  --> input from user for guest
    						   //               age and used in boolean
    char chocoPref;            //IN & CALC  --> input from user for
    						   //               chocolate preference and
    						   //               used in a boolean
    char peanutPref;           //IN & CALC  --> input from user for peanut
    						   //               preference and in boolean
    // Output Variables
    char snack[SNACK_SIZE];    //OUT        --> assigns snack served with
    						   //               strncpy and output
    char beverage[BEV_SIZE];   //OUT        --> assigns beverage served
	                           //               with strncpy and output
	int  mMBag;                //OUT & CALC --> holds amount of M&M bags
	int  peanutBag;            //OUT & CALC --> holds amount of Peanut
							   //               M&M bags
	int  skittleBag;           //OUT & CALC --> holds amount of Skittle
							   //               bags
	int  juiceCase;            //OUT & CALC --> holds amount of Juice cases
	int  sodaCase;             //OUT & CALC --> holds amount of Soda cases
	int  wineCase;             //OUT & CALC --> holds amount of Wine cases
	int  skitServ;             //CALC       --> holds amount of Skittle
	                           //               servings
	int  mMServ;               //CALC       --> holds amount of M&M
                               //               servings
	int  peanutServ;           //CALC       --> holds amount of Peanut M&M
                               //               servings
	int  sodaServ;             //CALC       --> holds amount of Soda
                               //               servings
	int  juiceServ;            //CALC       --> holds amount of Juice
                               //               servings
	int  wineServ;             //CALC       --> holds amount of Wine
                               //               servings

	//Initializations
	count = 0;
	mMBag = 0;
	peanutBag = 0;
	skittleBag = 0;
	juiceCase = 0;
	sodaCase = 0;
	wineCase = 0;
	skitServ = 0;
	mMServ = 0;
	peanutServ = 0;
	sodaServ = 0;
	juiceServ = 0;
	wineServ = 0;

	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	/*********************************************************************
	 *  INPUT & Processing - Takes in input by user for guest's name, age,
	 *                      chocolate preference, and peanut preference
	 *                      (if user likes chocolate) and calculates the
	 *                      servings for beverages and snacks.
	 ********************************************************************/
	cout << "Welcome Florence! Please input your guests names, ages, and "
	     << "preferences!";
	cout << endl << endl;

	for(count=1; count <= GUEST_AMT; count = count + 1)
	{
		cout << left;
		cout << "Guest #" << count << ":" << endl;
		cout << setw(COL_WIDTH) << "What is your friend\'s name?";
		cin.getline(guestName, NAME_SIZE);

		cout << setw(COL_WIDTH) << "How old is your friend?";
		cin  >> guestAge;
		cin.ignore(1000, '\n');

		cout << setw(COL_WIDTH) << "Do they like chocolate (Y/N)?";
		cin.get(chocoPref);
		cin.ignore(1000, '\n');

		if(chocoPref == 'Y')
		{
			cout << setw(COL_WIDTH) << "Do they like nuts (Y/N)?";
			cin.get(peanutPref);
			cin.ignore(1000,'\n');
		}

		if(guestAge <= 5)
		{
			strncpy(beverage, "Juice", BEV_SIZE);
			juiceServ = juiceServ + 3;
		}
		else
		{
			if(guestAge <= 20)
			{
				strncpy(beverage, "Soda", BEV_SIZE);
				sodaServ = sodaServ + 3;
			}
			else
			{
				strncpy(beverage, "Wine", BEV_SIZE);
				wineServ = wineServ + 3;
			}
		}

		if(chocoPref != 'Y')
		{
			strncpy(snack, "Skittles", SNACK_SIZE);
			skitServ = skitServ + 1;
		}
		else
		{
			if(peanutPref != 'Y')
			{
				strncpy(snack, "M & M\'s", SNACK_SIZE);
				mMServ = mMServ + 1;
			}
			else
			{
				strncpy(snack, "Peanut M & M\'s", SNACK_SIZE);
				peanutServ = peanutServ + 1;
			}
		}

		cout << "\nYou should serve " << guestName << " " << snack
		     << " and " << beverage << "." << endl << endl << endl;

	}

	// PROCESSING - Determines amount of bags for Skittles
	if(skitServ/BAG_SIZE == 0)
	{
		skittleBag = skitServ/BAG_SIZE;
		if(skitServ%BAG_SIZE > 0)
		{
			skittleBag = skittleBag + 1;
		}
	}
	else
	{
		skittleBag = skitServ/BAG_SIZE;
		if(skitServ%BAG_SIZE > 0)
		{
			skittleBag = skittleBag + 1;
		}
	}

	// PROCESSING - Determines amount of bags for M&M's
	if(mMServ/BAG_SIZE == 0)
	{
		mMBag = mMServ/BAG_SIZE;
		if(mMServ%BAG_SIZE > 0)
		{
			mMBag = mMBag + 1;
		}
	}
	else
	{
		mMBag = mMServ/BAG_SIZE;
		if(mMServ%BAG_SIZE > 0)
		{
			mMBag = mMBag + 1;
		}
	}

	// PROCESSING - Determines amount of bags for Peanut M&M's
	if(peanutServ/BAG_SIZE == 0)
	{
		peanutBag = peanutServ/BAG_SIZE;
		if(peanutServ%BAG_SIZE > 0)
		{
			peanutBag = peanutBag + 1;
		}
	}
	else
	{
		peanutBag = peanutServ/BAG_SIZE;
		if(peanutServ%BAG_SIZE > 0)
		{
			peanutBag = peanutBag + 1;
		}
	}

	// PROCESSING - Determines amount of cases for Soda
	if(sodaServ/CASE_SIZE == 0)
	{
		sodaCase = sodaServ/CASE_SIZE;
		if(sodaServ%CASE_SIZE > 0)
		{
			sodaCase = sodaCase + 1;
		}
	}
	else
	{
		sodaCase = sodaServ/CASE_SIZE;
		if(sodaServ%CASE_SIZE > 0)
		{
			sodaCase = sodaCase + 1;
		}
	}

	// PROCESSING - Determines amount of cases for Juice
	if(juiceServ/CASE_SIZE == 0)
	{
		juiceCase = juiceServ/CASE_SIZE;
		if(juiceServ%CASE_SIZE > 0)
		{
			juiceCase = juiceCase + 1;
		}
	}
	else
	{
		juiceCase = juiceServ/CASE_SIZE;
		if(juiceServ%CASE_SIZE > 0)
		{
			juiceCase = juiceCase + 1;
		}
	}

	// PROCESSING - Determines amount of cases for Wine
	if(wineServ/CASE_SIZE == 0)
	{
		wineCase = wineServ/CASE_SIZE;
		if(wineServ%CASE_SIZE > 0)
		{
			wineCase = wineCase + 1;
		}
	}
	else
	{
		wineCase = wineServ/CASE_SIZE;
		if(wineServ%CASE_SIZE > 0)
		{
			wineCase = wineCase + 1;
		}
	}

	// OUTPUT - Outputs number of servings for each snacks and beverages
	cout << left;
	cout << endl         << "There are:"                   << endl;
	cout << skitServ     << " servings of Skittles"        << endl;
	cout << mMServ       << " servings of M & M\'s"        << endl;
	cout << peanutServ   << " servings of Peanut M & M\'s" << endl;
	cout << endl;
	cout << sodaServ     << " servings of Soda"            << endl;
	cout << juiceServ    << " servings of Juice"           << endl;
	cout << wineServ     << " servings of Wine"            << endl;
	cout << endl         << endl;
	cout << right;

	// OUTPUT - Outputs table of bags and cases of each snack and beverage
	//          to purchase.
	cout << left;
	cout << "Florence needs to purchase:"                   << endl;
	cout << setw(OUT_COL) << "BAGS"     << "SNACK"           << endl;
	cout << setw(OUT_COL) << "----"     << "-----"           << endl;
	cout << setw(OUT_COL) << skittleBag << "Skittles"        << endl;
	cout << setw(OUT_COL) << mMBag      << "M & M\'s"        << endl;
	cout << setw(OUT_COL) << peanutBag  << "Peanut M & M\'s" << endl;;
	cout << endl;
	cout << setw(OUT_COL) << "CASES"    << "BEVERAGE"        << endl;
	cout << setw(OUT_COL) << "-----"    << "--------"        << endl;
	cout << setw(OUT_COL) << juiceCase  << "Juice"           << endl;
	cout << setw(OUT_COL) << sodaCase   << "Soda"            << endl;
	cout << setw(OUT_COL) << wineCase   << "Wine"            << endl;
	cout << right;

	return 0;
}
