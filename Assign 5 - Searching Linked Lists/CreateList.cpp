/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#include "Header.h"

/*************************************************************************
 * CreateList
 *------------------------------------------------------------------------
 *	This function creates a linked list of Movies and propagates the
 *	MovieInfo type struct with information from an input file, whose name
 *	is passed in.
 * RETURNS: the head of the list
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		inFileName : the input file name must be predefined
 * POST-CONDITIONS
 *		This function returns the head of the linked list
 ************************************************************************/
MovieInfo *CreateList(string inFileName) // IN - input file name
{
	// Variable List
	MovieInfo *head;    //OUT  - Head pointer of list
	MovieInfo *movPtr;  //CALC - Dynamic pointer for list creation
	ifstream  inFile;   //IN   - input file variable

	// Processing - opens input file
	inFile.open(inFileName.c_str());
	// Processing - guarantees pointers are NULL and initializes movPtr
	head = NULL;
	movPtr = NULL;
	movPtr = new MovieInfo;

	// Processing - gets input from input file and creates a list of
	//              movies with their information
	while(inFile && movPtr != NULL)
	{
		getline(inFile, movPtr->title);
		getline(inFile, movPtr->leadAct);
		getline(inFile, movPtr->suppAct);
		getline(inFile, movPtr->mainGenre);
		getline(inFile, movPtr->altGenre);
		inFile >> movPtr->year;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		inFile >> movPtr->rating;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(inFile, movPtr->synopsis);
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		movPtr->next = head;
		head = movPtr;
		movPtr = new MovieInfo;
	}
	// Processing - cleans pointer and closes input file
	delete movPtr;
	movPtr = NULL;
	inFile.close();

	return head;
}
