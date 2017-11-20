/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Sem Diaz
 * STUDENT ID  : 374780     & 374640
 * LAB #11     : Creating an Ordered List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/30/14
 *************************************************************************/

#include "Header.h"

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
	outOption << setfill('*')  << setw(75 - 1) << '*'
			  << setfill(' ');
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
	outOption << endl << setfill('*') << setw(75 - 1) << '*'
			  << setfill(' ')  << endl << endl;
	outOption << right;
}



