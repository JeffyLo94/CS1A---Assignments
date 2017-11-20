/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

// Preprocessor Directives
#include <ios>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <string>
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
 * COL_FIVE   - Holds setw size for fifth column
 * COL_SIX    - Holds setw size for sixth column
 * COL_SEVEN  - Holds setw size for seventh column
 * COL_EIGHT  - Holds setw size for eighth column
 *************************************************************************/
// Used for Program Header
const string PROGRAMMER = "Jeffrey Lo";
const string CLASS      = "CS1B";
const string CLASS_TIME = "M-Th 8am - 1pm";
const int    AS_NUM     = 5;
const string AS_NAME    = "Searching Linked Lists";
const char   AS_TYPE    = 'A';
// Used for Output Formatting
const int COL_ONE   = 8;
const int COL_TWO   = 49;
const int COL_THREE = 5;
const int COL_FOUR  = 7;
const int COL_FIVE  = 18;
const int COL_SIX   = 18;
const int COL_SEVEN = 20;
const int COL_EIGHT = 20;

// E N U M S   &   T Y P E D E F S
enum MenuOptions
{
	EXIT,
	OUTLIST,
	TITLESEARCH,
	GENRESEARCH,
	ACTORSEARCH,
	YEARSEARCH,
	RATINGSEARCH
};

// S T R U C T S
/**************************************************************************
 * MovieInfo : Holds dvd/movie information
 * -----------------------------------------------------------------------
 * Members:
 * 	title     - Movie Title
 * 	leadAct   - Lead Actor
 * 	suppAct   - Supporting Actor
 * 	mainGenre - Primary Movie Genre
 * 	altGenre  - Secondary Movie Genre
 * 	year	  - Year Released
 * 	rating	  - Movie Rating
 * 	synopsis  - Movie Synopsis/Summary
 * 	next	  - Pointer to next item in list
 *************************************************************************/
struct MovieInfo
{
	string    title;
	string    leadAct;
	string    suppAct;
	string 	  mainGenre;
	string    altGenre;
	int       year;
	int    	  rating;
	string 	  synopsis;
	MovieInfo *next;
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
 * GetFileName
 *------------------------------------------------------------------------
 *	This function prompts, reads, and checks the user to input for file
 *	name
 * RETURNS: the file name
 *************************************************************************/
string GetFileName(char fileType); //IN - Determines the type of file the
								   //     file name is for

/**************************************************************************
 * CreateList
 *------------------------------------------------------------------------
 *	This function creates a linked list of Movies and propagates the
 *	MovieInfo type struct with information from an input file, whose name
 *	is passed in.
 * RETURNS: the head of the list
 *************************************************************************/
MovieInfo *CreateList(string inFileName); // IN - input file name

/**************************************************************************
 * DisplayMenu
 *------------------------------------------------------------------------
 *	This function displays the menu in the designated output stream
 * RETURNS: nothing
 * -> Displays Menu for user
 *************************************************************************/
void DisplayMenu(ostream& os);  // OUT - Output stream

/**************************************************************************
 * GetCommand
 *------------------------------------------------------------------------
 *	This function retrieves the command that the user would like to run
 * RETURNS: integer entered by user
 *************************************************************************/
int GetCommand(const string PROMPT,          // OUT  - String to prompt
											 //        user
			   const int    UP_BOUND,        // CALC - Highest number the
											 //        input can be
			   const int    LOW_BOUND);      // CALC - Lowest number the
											 //        input can be

/**************************************************************************
 * GetAndCheckOneInt
 *------------------------------------------------------------------------
 *	This function retrieves the command that the user would like to run
 * RETURNS: integer entered by user
 *************************************************************************/
int GetAndCheckOneInt(const string PROMPT,     // OUT  - String to prompt
											   //        user
					  const int    UP_BOUND,   // CALC - Highest number the
											   //        input can be
					  const int    LOW_BOUND); // CALC - Lowest number the
											   //        input can be
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
 * WordWrap
 *------------------------------------------------------------------------
 *	This function takes in a string, the length for the word wrap, and
 *	the output stream. It then word wraps the string at the designated
 *	length into the output stream.
 * RETURNS: nothing
 * -> Outputs word wrapped string
 *************************************************************************/
void WordWrap(string   originStr,  //IN - original string
			  int      maxLength,  //IN - max line size
			  ostream& outStream); //IN - output stream option

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
 * OutputTableHeader
 *------------------------------------------------------------------------
 *	This function outputs a table header for the movie list
 * RETURNS: nothing
 * -> Outputs table header for movie list
 *************************************************************************/
void OutputTableHeader(ostream &os);  // IN - Output Stream

/**************************************************************************
 * TruncString
 *------------------------------------------------------------------------
 *	This function takes in a specified length and a string and truncates
 *	the string if it is longer than the specified length.
 * RETURNS: a string
 *************************************************************************/
string TruncString(int maxLength,   //IN - Maximum line length
				   string origStr); //IN - Original String

/**************************************************************************
 * OutputMovieInfo
 *------------------------------------------------------------------------
 *	This function outputs one line of movie information
 * RETURNS: nothing
 * -> outputs one line of movie information
 *************************************************************************/
void OutputMovieInfo(MovieInfo *movPtr, //IN - movie list
					 int counter,       //IN - list item number
					 ostream &os);      //IN - output stream

/**************************************************************************
 * OutputList
 *------------------------------------------------------------------------
 *	This function outputs the entire movie list.
 * RETURNS: nothing
 * -> Outputs entire movie list
 *************************************************************************/
void OutputList(ostream &os,      // IN - Output stream
				MovieInfo *list); // IN - Movie Info list

/**************************************************************************
 * OutSearchTableTitle
 *------------------------------------------------------------------------
 *	This function outputs the search table title
 * RETURNS: nothing
 * -> Outputs the search table title
 *************************************************************************/
void OutSearchTableTitle(int tableType,  //IN - Type of search
						 int intKey,	 //IN - Integer being searched
						 string strKey,  //IN - String being searched
						 ostream &os);   //IN - Output stream

/**************************************************************************
 * OutputAllMovieInfo
 *------------------------------------------------------------------------
 *	This function will output the all movie info.
 * RETURNS: nothing
 * -> Outputs movie info with synopsis
 *************************************************************************/
void OutputAllMovieInfo(MovieInfo *movPtr,   //IN - Movie
						int       movIndex,  //IN - Movie Counter
					 	ostream& outStream); //IN - output stream location

/**************************************************************************
 * SearchList
 *------------------------------------------------------------------------
 *	This function executes and outputs the search and search results for
 *	the user defined search and outputs the number of instances the item
 *	was found
 * RETURNS: instances item was found
 *************************************************************************/
int SearchList(int userCommand,  //IN - User command
			   int intKey,		 //IN - search item
			   string strKey,    //IN - search item
			   MovieInfo *head,  //IN - head of list
			   ostream &os);     //IN - Output stream

#endif /* HEADER_H_ */
