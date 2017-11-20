/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#include "Header.h"
/**************************************************************************
* FUNCTION OutputMovieInfo
*--------------------------------------------------------------------------
*	This function outputs one line of movie information
* RETURNS: nothing
* -> outputs one line of movie information
*--------------------------------------------------------------------------
* PRE-CONDITIONS
 * 		movPtr     : the movie must be predefined
 * 		counter    : the counter must be predefined
 * 		os		   : the ostream must be predefined
*
* POST-CONDITIONS
* 		This function returns nothing, as it only outputs movie info
**************************************************************************/
void OutputMovieInfo(MovieInfo *movPtr, //IN - movie list
					 int counter,       //IN - list item number
					 ostream &os)       //IN - output stream
{

	// Output - outputs one line of movie information
	os << right;
	os << setw(4) << counter << setw(4) << " ";
	os << left;
	os << " " << setw(COL_TWO - 1)
	   << TruncString(COL_TWO-1, movPtr -> title);
	os << setw(COL_THREE) << movPtr -> year;
	os << right;
	os << setw(4) << movPtr -> rating << setw (3) << " ";
	os << left;
	os << " " << setw(COL_FIVE - 1) << movPtr -> mainGenre;
	os << " " << setw(COL_SIX - 1)  << movPtr -> altGenre;
	os << " " << setw(COL_SEVEN -1)
			  << TruncString(COL_SEVEN-1, movPtr -> leadAct);
	os << " " << setw(COL_EIGHT -1)
			  << TruncString(COL_EIGHT-1, movPtr -> suppAct);
	os << endl;
	os << right;
}
