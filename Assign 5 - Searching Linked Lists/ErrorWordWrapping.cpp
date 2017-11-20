/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#include "Header.h"
#include <math.h>
/**************************************************************************
 *
 * FUNCTION ErrorWordWrapping
 *_________________________________________________________________________
 *  This function properly adjusts the error message if the user enters
 *  an extremely large number
 *  - returns nothing -> Formats the error message output
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		errorMsg    : First part of error message must be predefined
 * 		errorMsg2   : Second part of error message must be predefined
 * 		inputInt    : Integer input by the user must be predefined
 * 		padding		: The padding for the error message must be predefined
 * 		os          : The output stream must be predefined
 *
 * POST-CONDITIONS
 * 		Outputs the error message with the proper formatting.
 *************************************************************************/
void ErrorWordWrapping(string   errorMsgOne, //IN  - First part of error
					   string   errorMsgTwo, //IN  - Second part of error
					   int      inputInt,    //IN  - Number entered by user
					   string   padding,     //IN  - Padding for error msg
					   ostream& os)       	 //OUT - Output stream
{
	// DECLARATIONS
	// Constants
	/**********************************************************************
	 * MAX_LENGTH : Maximum amount of characters allowed per line
	 *********************************************************************/
	const int MAX_LENGTH = 37;

	// Variables
	string         intToString;
	string         fullMsg;
	ostringstream  oss; //

	// INITIALIZATIONS
	oss << inputInt;

	intToString  = oss.str();
	fullMsg = errorMsgOne + intToString + errorMsgTwo;

	WordWrapWithPadding(fullMsg, MAX_LENGTH, padding, os);


}
