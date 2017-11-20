/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Movie List
 * CLASS		: CS1B
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/19/14
 *************************************************************************/

#include "AssignFourHeader.h"

/*************************************************************************
 * OutputMovieInfo
 *------------------------------------------------------------------------
 *	This function will output the entire movie info linked list.
 * RETURNS: nothing
 * -> Outputs organized list of dvds
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		movList    : the movie list must be predefined
 * 		outStream  : the ostream must be predefined
 * POST-CONDITIONS
 *		This function nothing, as it only outputs the list of dvds
 ************************************************************************/
void OutputMovieInfo(MovieInfo *movList, //IN - dvd linked list
					 ostream& outStream) //IN - output stream location
{
	// Formatting Constants - Hold setw sizes
	const int LINE_WIDTH = 75;
	const int COL_ONE = 18;
	const int COL_TWO = 24;

	// Variable List
	MovieInfo *movPtr;    //IN - Dynamic pointer to traverse list
	int       movIndex;   //OUT - Holds which item on list

	// Initializations
	movIndex = 0;
	movPtr = NULL;
	movPtr = movList;

	// OutputProgramHeader - outputs program header
	OutputProgramHeader(outStream, PROGRAMMER, CLASS, CLASS_TIME, AS_NUM,
						AS_NAME, AS_TYPE);

	// Processing - outputs list items until the end of the list is reached
	while(movPtr != NULL)
	{
		movIndex++;
		outStream << left;
		outStream << setfill('*')  << setw(LINE_WIDTH - 1) << '*'
				  << setfill(' ')  << endl;
		outStream << "Movie #: "   << setw(COL_ONE- 9)  << movIndex
				  << "Title : ";
		// Processing - truncates title string if it is too long
		if(movPtr->title.length() > 44)
		{
			outStream << movPtr->title.substr(0, 44) + " ...";
		}
		else
		{
			outStream << movPtr->title;
		}
		outStream << endl;
		outStream << setfill('-') << setw(LINE_WIDTH - 1) << '-'
				  << setfill(' ')  << endl;
		outStream << "Year: "      << setw(COL_ONE - 6) << movPtr->year
				  << "Rating: "    << movPtr->rating
				  << endl;
		outStream << setfill('-') << setw(LINE_WIDTH - 1) << '-'
				  << setfill(' ')  << endl;
		outStream << setw(COL_ONE) << "Leading Actor: "
				  << setw(COL_TWO) << movPtr->leadAct
				  << "Genre 1: "   << movPtr->mainGenre
				  << endl;
		outStream << setw(COL_ONE) << "Supporting Actor: "
				  << setw(COL_TWO) << movPtr->suppAct
				  << "Genre 2: "   << movPtr->altGenre
				  << endl;
		outStream << setfill('-') << setw(LINE_WIDTH - 1) << '-'
				  << setfill(' ')  << endl;
		outStream << "PLOT:\n";

		// WordWrap - word wraps the plot synopsis
		WordWrap(movPtr->synopsis, LINE_WIDTH, outStream);

		outStream << setfill('*') << setw(LINE_WIDTH - 1) << '*'
				  << setfill(' ')
				  << endl << endl << endl;

		// Processing - moves on to next item in list
		movPtr = movPtr->next;
	}

	delete movPtr;
	movPtr = NULL;
}



