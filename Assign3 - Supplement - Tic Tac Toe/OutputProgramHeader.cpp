/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Functions
 * CLASS		: CS1A
 * SECTION		: M-Th: 8a
 * DUE DATE		: 5/6/14
 ************************************************************************/

#include "TicTacHeader.h"

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
void OutputProgramHeader(string programmer, //IN - Programmer Name
				         string className,  //IN - Class
				         string section,    //IN - Class time
				         int    asNum,      //IN - Assignment Number
				         string asName,     //IN - Assignment Name
					     char   asType)     //IN - Assignment Type
{
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << programmer;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << className;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << section;
	cout << "\n*  ";
	if(toupper(asType) == 'L')
	{
		cout << "Lab #" << setw(9);
	}
	else
	{
		cout << "Assignment #" << setw(1);
	}
	cout <<  asNum << " : " << asName;
	cout << "\n*****************************************************\n\n";
	cout << right;
}
