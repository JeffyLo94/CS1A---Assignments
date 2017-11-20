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
* FUNCTION OutSearchTableTitle
*--------------------------------------------------------------------------
*	This function outputs the search table title
* RETURNS: nothing
* -> Outputs the search table title
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		tableType  : The type of search being used must be predefined
* 		intKey	   : The integer being searched must be predefined
* 		strKey	   : The string being searched must be predefined
* 		os		   : The output stream must be predefined
*
* POST-CONDITIONS
* 		Returns nothing, outputs search table title
**************************************************************************/
void OutSearchTableTitle(int tableType,  //IN - Type of search
						 int intKey,	 //IN - Integer being searched
						 string strKey,  //IN - String being searched
						 ostream &os)    //IN - Output stream
{
	os << "\nSearch by ";
	switch(tableType)
	{
		case TITLESEARCH  : os << "title for " << strKey;
							break;
		case GENRESEARCH  : os << "genre for " << strKey;
							break;
		case ACTORSEARCH  : os << "actor for " << strKey;
							break;
		case YEARSEARCH   : os << "year for " << intKey;
							break;
		case RATINGSEARCH : os << "rating for " << intKey;
							break;
		default			  : cout << "\n**ERROR- Table type not found**\n";
	}
	os << " found:\n";
}
