/*******************************************************************************
*	AUTHOR	 : Anthony Ramirez & Jeffrey Lo
*	STU ID#	 : 369397	  & 374780
*	LAB # 13 : Inheritance, Overloading, Overriding
*	CLASS    : CS1B
*	SECTION  kjl: 8-1PM Monday-Thursday
*	DUE DATE : 6/26/14
******************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <ios>
#include <sstream>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <limits>
#include "Animal.h"
#include "Sheep.h"
#include "Pig.h"
using namespace std;

// G L O B A L   C O N S T A N T S
/*******************************************************************************
* ----------------------------------------------------------------------------
* Used for Program Header
* ----------------------------------------------------------------------------
* PROGRAMMER - Name of programmer
* CLASS      - Class name
* CLASS_TIME - Class time
* AS_NUM     - Assignment number
* AS_NAME    - Assignment Name
* AS_TYPE    - Assignment Type
* ----------------------------------------------------------------------------
* Used for Output Formatting
* ----------------------------------------------------------------------------
* COL_ONE	 : Used for formatting
* COL_TWO   : Used for formatting
* COL_THREE : Used for formatting
* COL_FOUR  : Used for formatting
* COL_FIVE  : Used for formatting
******************************************************************************/
// Used for Program Header
const string NAME	    = "Anthony Ramirez & Jeffrey Lo";
const string CLASS      = "CS1B";
const string SECTION    = "M-Th 8am - 1pm";
const int    AS_NUM     = 13;
const string AS_NAME    = "Inheritance, Overloading, Overriding";
const char   AS_TYPE    = 'L';

//Used for table output formatting
const int COL_ONE    = 11;
const int COL_TWO    = 5;
const int COL_THREE  = 11;
const int COL_FOUR   = 19;
const int COL_FIVE   = 13;

// E N U M S
enum StartMenu
{
	START_EXIT, //Declares EXIT command for first menu
	INITIALIZE_ANIMALS, //Delclares INIIALIZE command for the first menu
};

enum MainMenu
{
	MAIN_EXIT,
	INITIALIZE_SHEEP,
	INITIALIZE_PIG,
	CHANGE_AGE,
	CHANGE_VALUE,
	DISPLAY
};

// S T R U C T S
/*******************************************************************************
* AnimalList - Holds sheep list information
* ----------------------------------------------------------------------------
* Members:
*	index	 - holds index of sheep/pig in list
*	someSheep	- holds sheep object for instance of animal in the list
*	somePig	 - holds pig object for instance of animal in the list
*	next	 - points to sheep/pig animal node in list
******************************************************************************/
struct AnimalList
{
	int	   index;
	Sheep  someSheep;
	Pig	   somePig;
};


// P R O T O T Y P E S
/*******************************************************************************
* FUNCTION OutputHeader
* -----------------------------------------------------------------------------
* This function will output the header information to the console
******************************************************************************/
void OutputHeader(const string NAME,	  // Holds the value of the name(s)
 	  	  	  	  	  	  	  	  	  	  // being output
				  const string CLASS,	  // Holds the class
				  const string SECTION,   // Holds the time and day of class
				  const int    LAB_NUM,   // Holds the lab number
				  const string LAB_NAME,  // Holds the lab name
				  char         asType,	  // Either L(lab), or A(assign)
				  ostream&   out);	  	  // Used for output

/*******************************************************************************
* FUNCTION GetAndCheckChar
*------------------------------------------------------------------------------
* This function gets and checks a user inputed character and compares it
* to two specified bounds
* RETURNS: valid user input character
*******************************************************************************/
char GetAndCheckChar(string prompt,	 //IN - Input Prompt
					 char   boundOne,   //IN - First comparison char
					 char   boundTwo);   //IN - Second comparison char

/*******************************************************************************
* FUNCTION InitializePig
* ----------------------------------------------------------------------------
* This function initializes the pigs
* RETURNS: animalAr[] *
******************************************************************************/
void InitializePig(AnimalList animalAr[]); //IN & OUT - array of AnimalList
  	  	  	  	  	  	  	  	  	  	   //	        struct

/*******************************************************************************
* FUNCTION InitializeSheep
* -----------------------------------------------------------------------------
* This function initializes the sheep
* RETURNS: animalAr[]
******************************************************************************/
void InitializeSheep(AnimalList animalAr[]); //IN & OUT - array of
											 //	          AnimalList struct

/*******************************************************************************
* FUNCTION GetCommand
*-----------------------------------------------------------------------------
*  This function retrieves the command that the user would like to run
*  RETURNS inputInt -> The command the user would like to execute
******************************************************************************/
int GetCommand(const string PROMPT,       // OUT  - String to prompt
									      //        user
			   const int    UP_BOUND,     // CALC - Highest number the
			   	   	   	   	   	   	      //        input can be
			   const int    LOW_BOUND,    // CALC - Lowest number the
			   	   	   	   	   	   	      //        input can be
			   const char   menuVersion); // IN  - Determines menu display

/*******************************************************************************
* FUNCTION GetFloat
*-----------------------------------------------------------------------------
* This function retrieves the command that the user would like to run
* RETURNS inputFloat -> The command the user would like to execute
******************************************************************************/
float GetFloat(const string PROMPT,      // OUT  - String to prompt
									     //        user
			   const int    UP_BOUND,    // CALC - Highest number the
			   	   	   	   	   	   	     //        input can be
			   const int    LOW_BOUND,   // CALC - Lowest number the
			   	   	   	   	   	   	     //        input can be
			   const char   menuVersion);// IN  - Determines menu display

/*******************************************************************************
* FUNCTION DisplayMenu
*-----------------------------------------------------------------------------
* This function displays the menu in the designated output stream
* RETURNS: nothing-> Displays Menu for user
******************************************************************************/
void DisplayMenu(ostream& os,         // OUT - Output stream
				 char     menuType);  // IN  - Determines menu display

/*******************************************************************************
* FUNCTION Display
* ----------------------------------------------------------------------------
* This function will display both the pig and the sheep lists
******************************************************************************/
void Display(AnimalList animalList[]); //IN & OUT - used for output

/*******************************************************************************
* FUNCTION GetAnimalName
* ----------------------------------------------------------------------------
* This function will retreive the animals name and return it as a string.
* RETURN: animalName
******************************************************************************/
string GetAnimalName(AnimalList animalArray[], //IN & OUT used for output
					 int        index);        //IN - used to determine
  	  	  	  	  	  	  	  	  	  	  	   //     output

/*******************************************************************************
* FUNCTION AssignAge
* ----------------------------------------------------------------------------
* This function will assign an age to an animal of the users choice
* RETURNS: NONE
******************************************************************************/
void AssignAge(AnimalList animalArray[], //IN & OUT - used for output
			   int        index,	 	 //IN - used to determine output
			   int	      age);	 		 //IN - stores a new age into the
										 //     object

/*******************************************************************************
* FUNCTION AssignValue
* -----------------------------------------------------------------------------
* This function will assign a new value to an animal of the users choice
* RETURNS: NONE->modifies an objects value
******************************************************************************/
void AssignValue(AnimalList animalArray[], //IN & OUT - used for output
				 int        index,	       //IN - used to determine output
				 float	    newVal);	   //IN - stores a new age into the
  	  	  	  	  	  	  	  	  	  	   //     object


#endif /* HEADER_H_ */
