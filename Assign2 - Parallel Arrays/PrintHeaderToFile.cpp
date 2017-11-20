/*************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Parallel Arrays
 * CLASS		: CS1B
 * SECTION		: MTh: 8am-1pm
 * DUE DATE		: 6/10/14
 *************************************************************************/

#include "AssignTwoHeader.h"

/*************************************************************************
 * FUNCTION PrintHeaderToFile
 *------------------------------------------------------------------------
 * This function receives the output file, programmer name, class name,
 * class time, assignment name, assignment type, and the assignment number
 * and then outputs the appropriate heading
 * 	- Returns output file by reference
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		asName : Assignment Name must be predefined
 *		asType : Assignment Type must be predefined
 *		asNum  : Assignment Number must be predefined
 * POST-CONDITIONS
 *		This function will output the class heading
 ************************************************************************/
void PrintHeaderToFile(ofstream &oFile,         //IN & OUT - output file
					   const string PROGRAMMER, //IN - Programmer Name
				       const string CLASS_NAME, //IN - Class
				       const string SECTION,    //IN - Class time
				       const int    AS_NUM,     //IN - Assignment Number
				       const string AS_NAME,    //IN - Assignment Name
					   const char   AS_TYPE)    //IN - Assignment Type
{
	oFile << left;
	oFile << "*****************************************************";
	oFile << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	oFile << "\n*  " << setw(14) << "CLASS" << ": " << CLASS_NAME;
	oFile << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	oFile << "\n*  ";
	if(toupper(AS_TYPE) == 'L')
	{
		oFile << "Lab #" << setw(9);
	}
	else
	{
		oFile << "Assignment #" << setw(1);
	}
	oFile <<  AS_NUM << " : " << AS_NAME;
	oFile << "\n*****************************************************\n\n";
	oFile << right;
}
