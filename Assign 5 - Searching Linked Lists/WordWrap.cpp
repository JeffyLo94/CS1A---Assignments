/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Movie List
 * CLASS		: CS1B
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/19/14
 *************************************************************************/


#include "Header.h"

/**************************************************************************
 * WordWrap
 *------------------------------------------------------------------------
 *	This function takes in a string, the length for the word wrap, and
 *	the output stream. It then word wraps the string at the designated
 *	length into the output stream.
 * RETURNS: nothing
 * -> Outputs word wrapped string
 * -----------------------------------------------------------------------
 * PreConditions
 *	originStr - the original string must be predefined
 *	maxLength - the maximum length or line size must be predefined
 *	outStream - the ostream must be predefined
 * PostConditions
 * 	Returns nothing, as it only output a wordwrapped string
 *************************************************************************/
void WordWrap(string originStr,    //IN - original string
			  int maxLength,       //IN - max line size
			  ostream& outStream)  //IN - output stream option
{
	// Variable List
	int strInd;         //CALC - Holds the index for the original string
	int strLength;      //CALC - holds the length of the original string
	int testLength;     //CALC - Holds the length of the line and temporary
						//       word
	string outLineStr;  //OUT  - Holds one line of text limited by the
						//       maximum line size
	string tempWordStr; //OUT  - Holds a temporary word from the original
	                    //       string

	// Processing - Initialize temporary word size for use
	tempWordStr.clear();
	// Processing Assigns the length of the original string
	strLength = originStr.length();

	/**********************************************************************
	 * Processing
	 * -------------------------------------------------------------------
	 *	Goes through original string character by character,
	 *	creating words, and inserting them into the line until
	 *	the line is full, in which it is output and a new line is created.
	 *	This continues until the string is completely gone through
	 *********************************************************************/
	for(strInd = 0; strInd < strLength; strInd++)
	{
		//Processing - checks if item in string is not a space, therefore
		//             it can be added to the word
		if(originStr[strInd] != ' ')
		{
			tempWordStr += originStr[strInd];
		}
		else
		{
			// Processing - Checks if line with next word would be longer
			//              then the line size, if it is line is output
			testLength = (outLineStr.length() + tempWordStr.length());
			if(testLength > maxLength)
			{
				outStream << outLineStr << endl;
				outLineStr.clear();
			}
			// Processing - adds word and a space to the line
			outLineStr += tempWordStr;
			outLineStr += ' ';
			tempWordStr.clear();
		}
	}

	// Output - outputs last word and line with correct formatting
	testLength = (outLineStr.length() + tempWordStr.length());
	if(testLength > maxLength)
	{
		outStream << outLineStr << endl;
		outStream << tempWordStr;
	}
	else
	{
		outStream << outLineStr << tempWordStr;
	}
	outStream << endl;
}

