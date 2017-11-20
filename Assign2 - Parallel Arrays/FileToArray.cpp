/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Parallel Arrays
 * CLASS		: CS1B
 * SECTION		: MTh: 8am-1pm
 * DUE DATE		: 6/10/14
 ************************************************************************/

#include "AssignTwoHeader.h"

/*************************************************************************
 * FUNCTION FileToArray
 *------------------------------------------------------------------------
 * This function receives the an integer array, float array, string array,
 * 	array size, and input file name and converts input into 3 parallel
 * 	arrays
 * 	- Returns nothing
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		numAr[]   : integer Arraymust be predefined
 *		floatAr[] : Float Array must be predefined
 *		strAr[]   : String Array must be predefined
 *		AR_SIZE   : Array size must be predefined
 *		fileName  : Input Filename must be predefined
 * POST-CONDITIONS
 *		This function convert inputs from an input file into 3 arrays
 ************************************************************************/
void FileToArray(int numAr[],       // IN - integer array
				 float floatAr[],   // IN - float array
				 string strAr[],    // IN - string array
				 const int AR_SIZE, // IN - array size
				 string fileName)   // IN/OUT - Input File
{
	// Variable List
	ifstream inFile;    //IN   - Input File
	int      index;     //CALC - holds index number for arrays

	// Processing - opens input file
	inFile.open(fileName.c_str());

	// Processing - For Loop to assign 3 parallel arrays
	for(index = 0; index < AR_SIZE; index++)
	{
		getline(inFile, strAr[index]);
		inFile >> numAr[index];
		inFile >> floatAr[index];
		inFile.ignore(1000, '\n');
	}
}



