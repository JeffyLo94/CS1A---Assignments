/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Movie List
 * CLASS		: CS1B
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/19/14
 *************************************************************************/

#ifndef ASSIGNFOURHEADER_H_
#define ASSIGNFOURHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

/**************************************************************************
* CONSTANTS
* ------------------------------------------------------------------------
* Used for Program Header
* ------------------------------------------------------------------------
* PROGRAMMER - Name of programmer
* CLASS      - Class name
* CLASS_TIME - Class time
* AS_NUM     - Assignment number
* AS_NAME    - Assignment Name
* AS_TYPE    - Assignment Type
**************************************************************************/
const string PROGRAMMER = "Jeffrey Lo";
const string CLASS      = "CS1B";
const string CLASS_TIME = "M-Th 8am - 1pm";
const int    AS_NUM     = 4;
const string AS_NAME    = "Movie List - Intro to Linked Lists";
const char   AS_TYPE    = 'A';

// MovieInfo - Struct of dvd/movie information
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
					     char    asType);     //IN - Assignment Type

/**************************************************************************
 * CreateList
 *------------------------------------------------------------------------
 *	This function creates a linked list of Movies and propogates the
 *	MovieInfo type struct with information from an input file, whose name
 *	is passed in.
 * RETURNS: the head of the list
 *************************************************************************/
MovieInfo *CreateList(string inFileName); // IN - input file name

/**************************************************************************
 * GetInFileName
 *------------------------------------------------------------------------
 *	This function prompts, reads, and checks the user to input the name
 *	of the string.
 * RETURNS: Input File Name
 *************************************************************************/
string GetInFileName();

/**************************************************************************
 * OutputMovieInfo
 *------------------------------------------------------------------------
 *	This function organizes and outputs the movie information in the linked
 *	list of dvd's
 * RETURNS: nothing
 * -> Outputs organized list of dvds
 *************************************************************************/
void OutputMovieInfo(MovieInfo *movList, //IN - dvd linked list
					 ostream& outStream);//IN - output stream location

/**************************************************************************
 * WordWrap
 *------------------------------------------------------------------------
 *	This function takes in a string, the length for the word wrap, and
 *	the output stream. It then word wraps the string at the designated
 *	length into the output stream.
 * RETURNS: nothing
 * -> Outputs word wrapped string
 *************************************************************************/
void WordWrap(string originStr,    //IN - original string
			  int maxLength,       //IN - max line size
			  ostream& outStream); //IN - output stream option

#endif /* ASSIGNFOURHEADER_H_ */
