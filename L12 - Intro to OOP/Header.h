/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Breanna Nelson
 * STUDENT ID  : 374780     & 272229
 * LAB #12     : Intro to OOP
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/2/14
 *************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <ios>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <string>
#include <fstream>
#include "Animal.h"
using namespace std;

// G L O B A L   C O N S T A N T S
/**************************************************************************
 * -----------------------------------------------------------------------
 * Used for Program Header
 * -----------------------------------------------------------------------
 * PROGRAMMER - Name of programmer
 * CLASS      - Class name
 * CLASS_TIME - Class time
 * AS_NUM     - Assignment number
 * AS_NAME    - Assignment Name
 * AS_TYPE    - Assignment Type
 * -----------------------------------------------------------------------
 * Used for Output Formatting
 * -----------------------------------------------------------------------
 * COL_ONE    - Setw size for first column
 * COL_TWO    - Setw size for second column
 * COL_THREE  - Setw size for third column
 * COL_FOUR   - Setw size for fourth column
 *************************************************************************/
// Used for Program Header
const string PROGRAMMER = "Jeffrey Lo & Breanna Nelson";
const string CLASS      = "CS1B";
const string CLASS_TIME = "M-Th 8am - 1pm";
const int    AS_NUM     = 12;
const string AS_NAME    = "Intro to OOP";
const char   AS_TYPE    = 'L';
// Used for Output Formatting
const int    COL_ONE    = 11;
const int    COL_TWO    = 15;
const int    COL_THREE  = 8;
const int    COL_FOUR   = 11;


// E N U M S   &   T Y P E D E F S
enum MenuOptions
{
	EXIT,
	INITIALIZE_ANIMAL,
	CHANGE_AGE,
	CHANGE_VALUE,
	DISPLAY
};


// S T R U C T S
/**************************************************************************
 * AnimalStruct - Holds animal list information
 * -----------------------------------------------------------------------
 * Members:
 *	index		- holds index of animal in list
 *	someAnimal	- holds animal object for instance of animal in the list
 *	next		- points to next animal node in list
 *************************************************************************/
struct AnimalStruct
{
	int			  index;
	Animals  	  someAnimal;
	AnimalStruct* next;
};

// P R O T O T Y P E S
/**************************************************************************
 * OutputProgramHeader
 *------------------------------------------------------------------------
 *	This function outputs the header for the assignment.
 * RETURNS: nothing
 * -> Displays program header
 *************************************************************************/
void OutputProgramHeader(ostream& outOption, //IN - Output stream option
						 string  programmer, //IN - Programmer Name
				         string  className,  //IN - Class
				         string  section,    //IN - Class time
				         int     asNum,      //IN - Assignment Number
				         string  asName,     //IN - Assignment Name
					     char    asType);    //IN - Assignment Type

/**************************************************************************
 *  CreateList
 *------------------------------------------------------------------------
 *	This function read from a input file and will display every name in
 *	the input file that is added to the list
 * RETURNS: head of list by reference
 *************************************************************************/
AnimalStruct* CreateList();

/**************************************************************************
 * DisplayMenu
 *------------------------------------------------------------------------
 *	This function displays the menu in the designated output stream
 * RETURNS: nothing
 * -> Displays Menu for user
 *************************************************************************/
void DisplayMenu(ostream& os,         // OUT - Output stream
				 char     shortMenu); // IN  - Determines menu display

/**************************************************************************
 * GetCommand
 *------------------------------------------------------------------------
 *  This function retrieves the command that the user would like to run
 *  - returns inputInt -> The command the user would like to execute
 *************************************************************************/
int GetCommand(const string PROMPT,   		 // OUT  - String to prompt
											 //        user
			   const int    UP_BOUND, 		 // CALC - Highest number the
											 //        input can be
			   const int    LOW_BOUND,		 // CALC - Lowest number the
											 //        input can be
			   const char   menuVersion);	 // IN   - Determines menu display

/**************************************************************************
 * GetAndCheckChar
 *--------------------------------------------------------------------------
 *	This function gets and checks a user inputed character and compares it
 *	to two specified bounds
 * RETURNS: valid user input character
 *************************************************************************/
char GetAndCheckChar(string prompt,		//IN - Input Prompt
					 char   boundOne,   //IN - First comparison char
					 char   boundTwo);  //IN - Second comparison char

/**************************************************************************
 * AssignNewAge
 *------------------------------------------------------------------------
 *	This function Assigns a new age to the user defined node in a user
 *	defined list.
 * RETURNS: nothing
 * -> changes a node
 *************************************************************************/
AnimalStruct* AssignNewAge(int           listItem, //IN - List number being
												   //     changed
				  	  	   int           newAge,   //IN - New age being
				  	  	   	   	   	   	   	   	   //     assigned
				  	  	   AnimalStruct* head);    //IN - List

/**************************************************************************
 * GetFloat
 *------------------------------------------------------------------------
 *  This function retrieves the command that the user would like to run
 *  - returns inputFloat -> The command the user would like to execute
 *************************************************************************/
float GetFloat(const string PROMPT,   		 // OUT  - String to prompt
											 //        user
			   const int    UP_BOUND, 		 // CALC - Highest number the
											 //        input can be
			   const int    LOW_BOUND,		 // CALC - Lowest number the
											 //        input can be
			   const char   menuVersion);	 // IN   - Determines menu
											 //        display

/**************************************************************************
 * AssignNewValue
 *-------------------------------------------------------------------------
 *	This function Assigns a new value to the user defined node in a user
 *	defined list.
 * RETURNS: nothing
 * -> changes a node
 *************************************************************************/
AnimalStruct* AssignNewValue(int listItem,      //IN - List number being
												//     changed
				  	  	    float newValue,		//IN - New value being
				  	  	    					//     assigned
				            AnimalStruct* head);//IN - List

/**************************************************************************
 * DisplayList
 *--------------------------------------------------------------------------
 *	This function outputs a list of person information
 * RETURNS: nothing
 * -> Outputs a list of person information
 *************************************************************************/
void DisplayList(AnimalStruct* head,  //IN - animal list
				 ostream &os);   //IN - Output Stream
#endif /* HEADER_H_ */
