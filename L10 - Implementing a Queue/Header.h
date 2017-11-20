/**************************************************************************
 * AUTHOR      : Jeffrey Lo && Owen Mack
 * STUDENT ID  : 374780     && 112325
 * LAB #10     : Implementing a Queue
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/25/14
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

// ENUMS
enum MenuOptions
{
	EXIT,
	ENQUEUE,
	DEQUEUE,
	ISEMPTY,
	FRONT,
	SIZE,
	CLEARQUEUE,
	OUTQUEUE
};

// Structs
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
 * Enqueue
 * 	This function will add a new person to the list.
 * 	- Returns head  & tail
 *************************************************************************/
void Enqueue(PersonInfo *&head,  //IN & OUT - points to start of list
			 PersonInfo *&tail); //IN & OUT - points to end of list

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
 * Dequeue
 * 	This function will take out the node from the front of the list.
 * 	- Returns head & tail
 *************************************************************************/
void Dequeue(PersonInfo *&head,  //IN & OUT - start of the list
			 PersonInfo *&tail); //IN & OUT - end of the list

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
 * IsEmpty
 * 	This function determines whether or not the queue is empty
*   - returns a bool -> which determines whether or not the queue was empty
 *************************************************************************/
bool IsEmpty(PersonInfo *head); // CALC - Start of the linked-list

/**************************************************************************
 * Front
 * 	This function outputs the info at the top of the queue
 *   - returns nothing -> Outputs the info at the top of the queue
 *************************************************************************/
void Front(PersonInfo *head, // CALC - start of list
		  ostream&   os);    // OUT  - output stream

/**************************************************************************
 * OutQueue
 * 	This function outputs all the information in the Queue.
 *   - returns nothing -> Outputs all the information in the queue.
 *************************************************************************/
void OutQueue(PersonInfo *head, // CALC - Start of the queue
			  ostream&   os);    // OUT  - Output stream

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

/**************************************************************************
 * ClearQueue
 * 	This function deletes all nodes in the queue.
 *   - returns nothing -> Outputs all the information in the queue.
 *************************************************************************/
void ClearQueue(PersonInfo *&head,  // IN & OUT - Start of the list
		        PersonInfo *&tail); // IN & OUT - End   of the list

/**************************************************************************
 * PerformUserCommand
 *  This function will take in the user command and chooses the correct
 *  path to execute the command.
 * 	- Returns head and tail
 *************************************************************************/
void PerformUserCommand(int userCommand,    //IN       - user inputed
											 //           command
						PersonInfo *&head,  //IN & OUT - start of list
						PersonInfo *&tail); //IN & OUT - end of list
#endif
