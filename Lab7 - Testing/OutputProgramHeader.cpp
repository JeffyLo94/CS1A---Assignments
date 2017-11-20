/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/

#include "LabSevenHeader.h"

/*************************************************************************
 * FUNCTION AssignHeader
 *------------------------------------------------------------------------
 * This function receives 4 strings and 1 integer and outputs the header
 * 	for the assignment
 * 	- Returns nothing
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		PROGRAMMER : must be predefined
 *		CLASS      : must be predefined
 *		SECTION    : must be predefined
 *		ASSN_NUM   : must be predefined
 *		ASSN_NAME  : must be predefined
 *		ASSN_TYPE  : must be predefined
 * POST-CONDITIONS
 *		This function outputs the header for the assignment
 ************************************************************************/
void OutputProgramHeader(ostream& outStream, //IN - Output stream type
						 string programmer,  //IN - Programmer Name
				         string className,   //IN - Class
				         string section,     //IN - Class time
				         int    asNum,       //IN - Assignment Number
				         string asName,      //IN - Assignment Name
					     char   asType)      //IN - Assignment Type
{
	outStream << left;
	outStream << "*****************************************************";
	outStream << "\n*  PROGRAMMED BY : " << programmer;
	outStream << "\n*  " << setw(14) << "CLASS" << ": " << className;
	outStream << "\n*  " << setw(14) << "SECTION" << ": " << section;
	outStream << "\n*  ";
	if(toupper(asType) == 'L')
	{
		outStream << "Lab #" << setw(8);
	}
	else
	{
		outStream << "Assignment #" << setw(1);
	}
	outStream <<  asNum << " : " << asName;
	outStream << "\n*****************************************************\n\n";
	outStream << right;
}
