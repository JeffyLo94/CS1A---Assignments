/**************************************************************************
 * AUTHOR		: Jeffrey Lo & Andrea Lamore
 * STUDENT ID	: 374781     & 256144
 * LAB #8		: Intro to Pointers
 * CLASS		: CS1B
 * SECTION		: MTh: 8am
 * DUE DATE		: 6/8/14
 *************************************************************************/

#include "LabEightHeader.h"

/*************************************************************************
 * FUNCTION OutputProgramHeader
 *------------------------------------------------------------------------
 * This function receives 4 strings and 1 integer and outputs the header
 * 	for the assignment
 * 	- Returns nothing
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		outOption  : output stream option must be predefined
 *		PROGRAMMER : programmer name must be predefined
 *		CLASS      : class name must be predefined
 *		SECTION    : class time must be predefined
 *		ASSN_NUM   : assignment number must be predefined
 *		ASSN_NAME  : assignment name must be predefined
 *		ASSN_TYPE  : assignment type must be predefined
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
	outOption << "*******************************************************";
	outOption << "\n*  PROGRAMMED BY : " << setw(35) << programmer << "*";
	outOption << "\n*  " << setw(14) << "CLASS" << ": "
						 << setw(35) << className << "*";
	outOption << "\n*  " << setw(14) << "SECTION" << ": "
						 << setw(35) << section << "*";
	outOption << "\n*  ";
	if(toupper(asType) == 'L')
	{
		outOption << "Lab #" << setw(8);
	}
	else
	{
		outOption << "Assignment #" << setw(1);
	}
	outOption <<  asNum << " : " << setw(35) << asName << "*";
	outOption << "\n*******************************************************\n\n";
	outOption << right;
}



