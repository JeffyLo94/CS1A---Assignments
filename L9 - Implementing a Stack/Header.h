/**************************************************************************
 * AUTHOR      : Duncan Bauer && Jeffrey Lo
 * STUDENT ID  : 290722 && 374780
 * LAB #9      : Implementing a Stack
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/23/14
 *************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

// PRE-PROCESSOR DIRECTIVES
#include <iomanip>
#include <ios>
#include <iostream>
#include <sstream>
#include <limits>
#include <string>

using namespace std;

// GLOBAL CONSTANTS
/**************************************************************************
 * OUT_WIDTH : Spacing for the list information to be output
 *************************************************************************/
const int OUT_WIDTH = 8;

// ENUMS && TYPEDEFS && STRUCTS
enum MenuOptions
{
	EXIT,
	PUSH,
	POP,
	ISEMPTY,
	PEEK,
	SIZE,
	OUTSTACK,
};

struct PersonInfo
{
	string 	   name;
	char  	   gender;
	int   	   age;
	PersonInfo *next;
};

// PROTOTYPES
/**************************************************************************
 * OutputClassHeader
 * 	This function will output the class header.
 * 	- Returns nothing -> Will output the class header.
 *************************************************************************/
void OutputClassHeader(const string  CLASSSECTION, // OUT - class times
					   const int     ASNUM,        // OUT - assn number
					   const string  ASNAME,	   // OUT - assn name
					   const char    ASTYPE, 	   // OUT - assn type
					   ostream&      os); 		   // OUT - output steam

/**************************************************************************
 * DisplayMenu
 * 	This function will display the menu options.
 * 	- Returns nothing -> Will display the menu options.
 *************************************************************************/
void DisplayMenu(ostream& os); // OUT - Output stream

/**************************************************************************
 * GetAndCheckOneInt
 * 	This function will retrieve a command from the user and determine if it
 *  is valid.
 * 	- Returns inputInt -> Command issued by the user - Will return to main.
 *************************************************************************/
int GetAndCheckOneInt(const string PROMPT,    // OUT  - String to prompt
										      //        user
					  const int    UP_BOUND,  // CALC - Highest number the
											  //        input can be
					  const int    LOW_BOUND);// CALC - Lowest number the
											  //        input can be

/**************************************************************************
 * Push
 * 	This function will add a new person to the list.
 * 	- Returns head -> The start of the list - Will be returned to main.
 *************************************************************************/
PersonInfo *Push(PersonInfo *head); // CALC - The front of the linked-list

/**************************************************************************
 * GetPersonInput
 * 	This function will receive info from the user about the new link to be
 *  added.
 * 	- Returns nothing -> Will store the info into the linked list via
 *    pointers.
 *************************************************************************/
void GetPersonInput(PersonInfo *perPtr); // CALC - Points towards the
										 //        memory in which the info
										 //        will be stored

/**************************************************************************
 * Pop
 * 	This function will pop the link at the front of the list.
 * 	- Returns head -> Will pop the link at the front of the list and return
 * 					  the updated head.
 *************************************************************************/
PersonInfo *Pop(PersonInfo *head, // CALC - Beginning of the linked-list
		        ostream&   os);   // OUT  - Output stream

/**************************************************************************
 * PrintPerson
 * 	This function will output the information in the link being popped.
 * 	- Returns nothing -> Will output the information in the link being
 * 						 popped.
 *************************************************************************/
void PrintPerson(PersonInfo *head, // OUT - Link in list to be popped
				 ostream& os);     // OUT - Output stream

/**************************************************************************
 * Size
 * 	This function will calculate the size of the list.
 * 	- Returns infoCount -> amount of people in the list.
 *************************************************************************/
int Size(PersonInfo *infoPtr); // CALC - Start of the list

/**************************************************************************
 * PrintSize
 * 	This function will output the amount of people in the stack.
 * 	- Returns nothing -> will output the amount of people in the stack.
 *************************************************************************/
void PrintSize(PersonInfo *head, // CALC - Start of the list
			   ostream&   os);   // OUT  - Output stream

/**************************************************************************
 * PrintIsEmpty
 * 	This function will output whether or not the stack is empty.
 * 	- Returns nothing -> will output whether or not the stack is empty.
 *************************************************************************/
void PrintIsEmpty(PersonInfo *head, // CALC - Start of the linked-list
				  ostream&   os);   // OUT  - Output stream

/**************************************************************************
 * IsEmpty
 * 	This function determines whether or not the stack is empty
*   - returns a bool -> which determines whether or not the stack was empty
 *************************************************************************/
bool IsEmpty(PersonInfo *head); // CALC - Start of the linked-list

/**************************************************************************
 * Peek
 * 	This function outputs the info at the top of the stack
 *   - returns nothing -> Outputs the info at the top of the stack
 *************************************************************************/
void Peek(PersonInfo *head, // CALC - start of list
		  ostream&   os);   // OUT  - output stream

/**************************************************************************
 * OutputStack
 * 	This function outputs all the information in the stack.
 *   - returns nothing -> Outputs all the information in the stack.
 *************************************************************************/
void OutputStack(PersonInfo *head, // CALC - Start of the stack
				 ostream&   os);   // OUT  - Output stream

/**************************************************************************
 * ErrorWordWrapping
 *  This function properly adjusts the error message if the user enters
 *  an extremely large number
 *  - returns nothing -> Formats the error message output
 *************************************************************************/
void ErrorWordWrapping(string   errorMsg, // OUT && CALC - First part of
										  // 			   error
					   string   errorMsg2,// OUT && CALC - Second part of
										  //  			   error
					   int      inputInt, // CALC        - Number entered
										  //               by user
					   ostream& os);      // OUT         - Output stream
#endif
