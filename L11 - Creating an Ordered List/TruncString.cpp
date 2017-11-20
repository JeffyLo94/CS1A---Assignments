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
* FUNCTION TruncString
*--------------------------------------------------------------------------
*	This function takes in a specified length and a string and truncates
*	the string if it is longer than the specified length.
* RETURNS: a string
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		maxLength  : the maximum line length must be predefined
* 		origStr    : the original string must be predefined
*
* POST-CONDITIONS
* 		cutStr     : the string, which may or may not be edited, is
* 					 returned.
**************************************************************************/
string TruncString(int maxLength,   //IN - Maximum line length
				   string origStr)  //IN - Original String
{
	// DECLARATIONS
	// Variable List
	string cutStr;

	// Initialization
	cutStr = origStr;

	// Processing checks if string needs to be truncated
	if (origStr.length() > maxLength)
	{
		cutStr = origStr.substr(0, maxLength - 4);
		cutStr += "...";
	}

	return cutStr;
}
