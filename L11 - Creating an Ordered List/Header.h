/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Sem Diaz
 * STUDENT ID  : 374780     & 374640
 * LAB #11     : Creating an Ordered List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/30/14
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
 * COL_ONE    - Holds setw size for first column
 * COL_TWO    - Holds setw size for second column
 * COL_THREE  - Holds setw size for third column
 * COL_FOUR   - Holds setw size for fourth column
 *************************************************************************/
// Used for Program Header
const string PROGRAMMER = "Jeffrey Lo & Sem Diaz";
const string CLASS      = "CS1B";
const string CLASS_TIME = "M-Th 8am - 1pm";
const int    AS_NUM     = 11;
const string AS_NAME    = "Creating an Ordered List";
const char   AS_TYPE    = 'L';
// Used for Output Formatting
const int COL_ONE   = 9;
const int COL_TWO   = 26;
const int COL_THREE = 9;
const int COL_FOUR  = 5;


// E N U M S   &   T Y P E D E F S
enum MenuOptions
{
	EXIT,
	CREATELIST,
	DISPLAYLIST,
	REVERSELIST,
	ISEMPTY,
	SEARCHNAME,
	REMOVE,
	CLEARLIST
};

// S T R U C T S
/**************************************************************************
 * PersonInfo : Holds a person's information
 * -----------------------------------------------------------------------
 * Members:
 * 	Name	- Person's Name
 * 	Gender  - Person's Gender
 * 	Age		- Person's Age
 *************************************************************************/
struct PersonInfo
{
	PersonInfo* prev;
	string      name;
	char        gender;
	int         age;
	PersonInfo* next;
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
 * DisplayMenu
 *------------------------------------------------------------------------
 *	This function displays the menu in the designated output stream
 * RETURNS: nothing
 * -> Displays Menu for user
 *************************************************************************/
void DisplayMenu(ostream& os); // OUT - Output stream

/**************************************************************************
 * GetCommand
 *------------------------------------------------------------------------
 *	This function retrieves the command that the user would like to run
 *  - returns inputInt -> The command the user would like to execute
 *************************************************************************/
int GetCommand(const string PROMPT,   		 // OUT  - String to prompt
											 //        user
			   const int    UP_BOUND, 		 // CALC - Highest number the
											 //        input can be
			   const int    LOW_BOUND);		 // CALC - Lowest number the
											 //        input can be

/**************************************************************************
 * ErrorWordWrapping
 *------------------------------------------------------------------------
 *	This function properly adjusts the error message if the user enters
 *  an extremely large number
 *  - returns nothing -> Formats the error message output
 *************************************************************************/
void ErrorWordWrapping(string   errorMsgOne, //IN  - First part of error
					   string   errorMsgTwo, //IN  - Second part of error
					   int      inputInt,    //IN  - Number entered by user
					   string   padding,     //IN  - Padding for error msg
					   ostream& os);      	 //OUT - Output stream

/**************************************************************************
 * WordWrapWithPadding
 *------------------------------------------------------------------------
 *	This function takes in a string, the length for the word wrap, and
 *	the output stream. It then word wraps the string at the designated
 *	length into the output stream.
 * RETURNS: nothing
 * -> Outputs word wrapped string
 *************************************************************************/
void WordWrapWithPadding(string   originStr,  //IN - original string
						 int      maxLength,  //IN - max line size
						 string   padding,    //IN - padding for the wrap
						 ostream& outStream); //IN - output stream option

/**************************************************************************
 * AlphaSortPeople
 *-------------------------------------------------------------------------
 *	This function determines and sorts nodes into alphabetical order
 * RETURNS: head, tail of list
 *************************************************************************/
void AlphaSortPeople(PersonInfo* &head, 	//IN&OUT - start of list
					 PersonInfo* &tail, 	//IN&OUT - end of list
					 PersonInfo* &perNode);	//IN&OUT - node being added

/**************************************************************************
 * CreateList
 *-------------------------------------------------------------------------
 *	This function read from a input file and will display every name in
 *	the input file that is added to the list
 * RETURNS: head of list by reference
 *************************************************************************/
void CreateList(PersonInfo* &head);		// Out - Head of the list

/**************************************************************************
 * IsEmpty
 *-------------------------------------------------------------------------
 *	This function checks if the linked list is empty
 * RETURNS: true or false
 *************************************************************************/
bool IsEmpty(PersonInfo* head);

/**************************************************************************
 * TruncString
 *-------------------------------------------------------------------------
 *	This function takes in a specified length and a string and truncates
 *	the string if it is longer than the specified length.
 * RETURNS: a string
 *************************************************************************/
string TruncString(int maxLength,   //IN - Maximum line length
				   string origStr); //IN - Original String

/**************************************************************************
 * FindTail
 *-------------------------------------------------------------------------
 *	This function finds the tail of the list and returns it
 * RETURNS: Tail of a list
 *************************************************************************/
PersonInfo* FindTail(PersonInfo* head);

/**************************************************************************
 * OutPersonInfo
 *-------------------------------------------------------------------------
 *	This function outputs person information for one line
 * RETURNS: nothing
 * -> outputs person info for one line
 *************************************************************************/
void OutPersonInfo(PersonInfo *perPtr, //IN - person list
				   int counter,        //IN - list item number
				   ostream &os);       //IN - output stream

/**************************************************************************
 * OutputTableHeader
 *-------------------------------------------------------------------------
 *	This function outputs a table header for the list
 * RETURNS: nothing
 * -> Outputs table header for list
 *************************************************************************/
void OutputTableHeader(ostream &os); // IN - Output Stream


/**************************************************************************
 * OutputList
 *-------------------------------------------------------------------------
 *	This function outputs a list of person information
 * RETURNS: nothing
 * -> Outputs a list of person information
 *************************************************************************/
void OutputList(PersonInfo* head,  //IN - Person list
				ostream &os);      //IN - Output Stream

/**************************************************************************
 * OutReverseList
 *-------------------------------------------------------------------------
 *	This function outputs a list of person information in reverse
 * RETURNS: nothing
 * -> Outputs a list of person information in reverse
 *************************************************************************/
void OutReverseList(PersonInfo* head,  //IN - Person list
					ostream &os);      //IN - Output Stream

/**************************************************************************
 * SearchName
 *-------------------------------------------------------------------------
 *	This function performs a search through the linked list that is passed
 *	in and finds the string that is passed in. The found node is returned.
 * RETURNS: Found Node
 *************************************************************************/
PersonInfo* SearchName(PersonInfo* head, //IN - Start of list
					   string keyName);	 //IN - String being searched for

/**************************************************************************
 * RemoveNode
 *-------------------------------------------------------------------------
 *	This function removes the node that is specified if the node exits in
 *	the list that is passed in.
 * RETURNS: List possibly with node removed
 *************************************************************************/
PersonInfo* RemoveNode(PersonInfo* head,		//IN - Start of list
					   PersonInfo* targetNode); //IN - String being removed

/**************************************************************************
 * ClearList
 *-------------------------------------------------------------------------
 *	This function removes every node in the list setting the head of the
 *	list to NULL
 * RETURNS: List possibly with node removed
 *************************************************************************/
void ClearList(PersonInfo* &head);	//IN - Start of List


#endif /* HEADER_H_ */
