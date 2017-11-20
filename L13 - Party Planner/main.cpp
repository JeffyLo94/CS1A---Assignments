/************************************************************************
 * AUTHOR		: Jeffrey Lo & William Bogle
 * STUDENT ID	: 374781 & 846455
 * LAB #13		: Party Planner
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 4/3/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Party Planner
 *________________________________________________________________________
 * This program will help someone decide which snacks and drinks to serve
 *      their friend.
 *________________________________________________________________________
 * INPUT:
 *    guestName:   input by user for guest's name
 *    guestAge:    input by user for guest's age
 *    chocoPref:   input by user for guest's chocolate preference
 *    nutPref:     input by user for guest's nut preference
 *
 * OUTPUT:
 *    SKITTLES:    output if guest should be served skittles
 *    MM:          output if guest should be served m&ms
 *    PEANUTS:     output if guest should be served peanut m&ms
 *    BEER:        output if guest should be served beer
 *    SODA:        output if guest should be served soda
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
	 * USED FOR OUTPUTS
	 * -------------------------------------------------------------------
	 * SKITTLES  : Skittles
	 * MM        : M&M's
	 * PEANUTS   : Peanut M&M's
	 * BEER      : Beer
	 * SODA      : Soda
	 * -------------------------------------------------------------------
	 * USED FOR SETW
	 * -------------------------------------------------------------------
	 * COL_WIDTH : width for setw
	 ********************************************************************/
	const char PROGRAMMER[30] = "Jeffrey Lo & William Bogle";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[25]    = "TTh: 10:00a - 12:00p";
	const int  LAB_NUM        = 13;
	const char LAB_NAME[17]   = "Party Planner";
	const char SKITTLES[9]    = "Skittles";
	const char MM[9]          = "M & M\'s";
	const char PEANUTS[16]    = "Peanut M & M\'s";
	const char BEER[5]        = "Beer";
	const char SODA[5]        = "Soda";
	const int  COL_WIDTH      = 30;

	// Variable Declarations
	char guestName[20]; //INPUT --> input from user for guest's name
	int  guestAge;      //INPUT --> input from user for guest's age
	char chocoPref;     //INPUT --> input from user for chocolate preferred
	char nutPref;       //INPUT --> input from user for nut preference
	int  candyIncr;     //CALC  --> increments to tell candy output
	int  drinkIncr;     //CALC  --> increments to tell drink output

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
	 *  INPUT - read's in 4 inputs from user (guestName, guestAge,
	 *         chocoPref, and nutPref)
	 *         Prompts user for guestName, guestAge, chocoPref
	 ********************************************************************/
	cout << left;
	cout << setw(COL_WIDTH) << "What is your friend's name?";
	cin.getline(guestName, 20);
	cout << setw(COL_WIDTH) << "How old is your friend?";
	cin >> guestAge;
	cin.ignore(1000, '\n');
	cout << setw(COL_WIDTH) << "Do they like chocolate (Y/N)?";
	cin.get(chocoPref);
	cin.ignore(1000, '\n');

	/*********************************************************************
	 *  INPUT & PROCESSING - reads input from user for nutPref if yes for
	 *                      chocolate and changes mmIncr depending on yes
	 *                      or no for nutPref. changes skittleIncr if no
	 *                      for chocolate.
	 ********************************************************************/
	if(chocoPref == 'Y')
	{
		cout << setw(COL_WIDTH) << "Do they like nuts (Y/N)?";
		cin.get(nutPref);
		cin.ignore(1000, '\n');
		if(nutPref == 'Y')
		{
			candyIncr = 1;
		}
		else
		{
			candyIncr = 2;
		}
	}
	else
	{
		candyIncr = 3;
	}
	cout << endl;
	cout << right;

	/*********************************************************************
	 *  PROCESSING - determines which drink guest receives by adjusting
	 *               drinkIncr; 1 for 21 or over, and 0 for under 21
	 ********************************************************************/
	if(guestAge >= 21)
	{
		drinkIncr = 1;
	}
	else
	{
		drinkIncr = 0;
	}

	/*********************************************************************
	 * OUTPUT - Outputs final statement. Uses a nested if then else
	 *          statement to determine candy (nested in primary false
	 *          condition). If true, outputs skittles. If false, results
	 *          in a nested if statement where true outputs peanuts and
	 *          false outputs M&M's. Uses an if else statement to
	 *          determine type of drink served to guest.
	 ********************************************************************/
	cout << "You should serve " << guestName << " ";
    if(candyIncr == 3)
    {
    	cout << SKITTLES;
    }
    else
    {
    	if (candyIncr == 1)
    	{
    		cout << PEANUTS;
    	}
    	else
    	{
    		cout << MM;
    	}
    }
    cout << " and ";
    if(drinkIncr == 1)
    {
    	cout << BEER;
    }
    else
    {
    	cout << SODA;
    }
    cout << "." << endl << endl;

	return 0;
}





