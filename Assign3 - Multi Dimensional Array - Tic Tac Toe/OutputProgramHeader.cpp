/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Multi-Dimensional Array
 * CLASS		: CS1A
 * SECTION		: M-Th: 8a
 * DUE DATE		: 6/17/14
 ************************************************************************/

#include "TicTacHeader.h"

/*************************************************************************
 * FUNCTION OutputProgramHeader
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
void OutputProgramHeader(ostream& outOption, //IN - Output stream option
						 string  programmer, //IN - Programmer Name
				         string  className,  //IN - Class
				         string  section,    //IN - Class time
				         int     asNum,      //IN - Assignment Number
				         string  asName,     //IN - Assignment Name
					     char    asType)     //IN - Assignment Type
{
	outOption << left;
	outOption << "*****************************************************";
	outOption << "\n*  PROGRAMMED BY : " << programmer;
	outOption << "\n*  " << setw(14) << "CLASS" << ": " << className;
	outOption << "\n*  " << setw(14) << "SECTION" << ": " << section;
	outOption << "\n*  ";
	if(toupper(asType) == 'L')
	{
		outOption << "Lab #" << setw(9);
	}
	else
	{
		outOption << "Assignment #" << setw(1);
	}
	outOption <<  asNum << " : " << asName;
	outOption << "\n*****************************************************\n\n";
	outOption << right;
}



