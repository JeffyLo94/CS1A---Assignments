/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Movie List
 * CLASS		: CS1B
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/19/14
 *************************************************************************/

#include "Header.h"

/*************************************************************************
 * OutputAllMovieInfo
 *------------------------------------------------------------------------
 *	This function will output the all movie info.
 * RETURNS: nothing
 * -> Outputs movie info with synopsis
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		movPtr     : the movie must be predefined
 * 		movIndex   : the counter must be predefined
 * 		outStream  : the ostream must be predefined
 *
 * POST-CONDITIONS
 *		This function returns nothing, as it only outputs movie info
 ************************************************************************/
void OutputAllMovieInfo(MovieInfo *movPtr,  //IN - Movie
						int       movIndex, //IN - Movie Counter
					 	ostream& outStream) //IN - output stream location
{
	// Formatting Constants - Hold setw sizes
	const int LINE_WIDTH = 75;
	const int COL_ONE = 18;
	const int COL_TWO = 24;


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
}



