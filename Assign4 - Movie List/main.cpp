/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Movie List
 * CLASS		: CS1B
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/19/14
 *************************************************************************/

#include "AssignFourHeader.h"

/**************************************************************************
 * Assignment #4 - Movie List
 *------------------------------------------------------------------------
 *	This program reads in an input file from the user. The program then
 *	reads from the input file to keep track of their title, lead and
 *	supporting actors, genre, alternate genre, year, rating, and synopsis.
 *	The program organizes this information into a linked list. The program
 *	then outputs the information in a detailed manner.
 *-------------------------------------------------------------------------
 *	Input
 *		inputFileName - input by user, the input file name
 *	Output
 *		oFile - output file
 *		dvdList - linked list that will be output
 *************************************************************************/
int main()
{
	// Variable List
	MovieInfo *dvdList;       //Out - dvd list of movie editors
	string    inputFileName;  //In  - provided by user, to specify what
							  //      input txt file to use
	ofstream  oFile;          //Out - output file stream variable

	//Outputs program header
	OutputProgramHeader(cout, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	// GetsInFileName - Gets input file name from user
	inputFileName = GetInFileName();

	// CreateList - Creates a linked list from input file
	dvdList = CreateList(inputFileName);

	// Processing - opens output file
	oFile.open("Output.txt");

	// OutputMovieInfo - outputs dvdList in an organized manner
	OutputMovieInfo(dvdList, oFile);


	oFile.close();

	return 0;
}
