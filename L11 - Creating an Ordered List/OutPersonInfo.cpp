/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Sem Diaz
 * STUDENT ID  : 374780     & 374640
 * LAB #11     : Creating an Ordered List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/30/14
 *************************************************************************/

#include "Header.h"
/**************************************************************************
* FUNCTION OutPersonInfo
*--------------------------------------------------------------------------
*	This function outputs person information for one line
* RETURNS: nothing
* -> outputs person info for one line
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		perPtr     : the person must be predefined
* 		counter    : the counter must be predefined
* 		os		   : the ostream must be predefined
*
* POST-CONDITIONS
* 		Returns nothing, outputs one line of specified person information
**************************************************************************/
void OutPersonInfo(PersonInfo *perPtr, //IN - person list
				   int counter,        //IN - list item number
				   ostream &os)        //IN - output stream
{

	// Output - outputs one line of movie information
	os << right;
	os << setw(4) << counter << setw(4) << ' ';
	os << left;
	os << setw(COL_TWO - 1)
	   << TruncString(COL_TWO-1, perPtr -> name)
	   << ' ';
	os << right;
	os << setw(4) << perPtr -> gender<< setw(4) << ' ';
	os << setw(4) << perPtr -> age << setw (2) << ' ';
	os << endl;

}
