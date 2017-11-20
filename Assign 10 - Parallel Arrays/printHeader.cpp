
#include "AssignTenHeader.h"

/*************************************************************************
 * FUNCTION PrintHeader
 *------------------------------------------------------------------------
 * This function receives the assignment name, assignment type, and the
 * 	assignment number and then outputs the appropriate heading
 * 	- Returns nothing
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		asName : Assignment Name must be predefined
 *		asType : Assignment Type must be predefined
 *		asNum  : Assignment Number must be predefined
 * POST-CONDITIONS
 *		This function will output the class heading
 ************************************************************************/
void PrintHeaderToFile(ofstream &oFile,
				       string asName, //IN - assignment name
				       char asType,   //IN - assignment type
			       	   int asNum)     //IN - assignment number
{

	oFile << left;
	oFile << "*****************************************************";
	oFile << "\n*  Programmed By  : Jeffrey Lo";
	oFile << "\n*  " << setw(15) << "Student ID" << ": 374780";
	oFile << "\n*  " << setw(15) << "CLASS " << ": CS1A -- TTh - 10-12p";
	oFile << "\n*  ";
	if(toupper(asType) == 'L')
	{
		oFile << "Lab #" << setw(9);
	}
	else
	{
		oFile << "Assignment #" << setw(1);
	}
	oFile << asNum << " : " << asName;
	oFile << "\n*****************************************************\n\n";
	oFile << right;
}
