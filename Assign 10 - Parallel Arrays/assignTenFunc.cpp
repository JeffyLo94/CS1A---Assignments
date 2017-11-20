#include "AssignTenHeader.h"

/*************************************************************************
 * FUNCTION FileToArray
 *------------------------------------------------------------------------
 * This function receives the an integer array, float array, string array,
 * 	array size, and input file name
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

/*************************************************************************
 * FUNCTION NameSearchToFile
 *------------------------------------------------------------------------
 * This function receives the search keyword, accumulator for float values,
 *  integer array, float array, string array, array size, and
 *  output file name
 * 	- Returns index
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		numAr[]   : integer Arraymust be predefined
 *		floatAr[] : Float Array must be predefined
 *		strAr[]   : String Array must be predefined
 *		AR_SIZE   : Array size must be predefined
 *		oFile     : Output Filename must be predefined
 *		floatSum  : Float accumulator must be predefined
 * POST-CONDITIONS
 *		This function searches arrays for a string and outputs the string,
 *		integer, and number found under the string's index to an output
 *		file. index is returned to calling function
 ************************************************************************/
int NameSearchToFile(ofstream &oFile,   // IN/OUT - Output File
		 	 	 	 float &floatSum,   // IN/CALC - accumulator of float
		 	 	 	 	 	 	 	 	//           values
		 	 	 	 int numAr[],       // IN - integer array
		 	 	 	 float floatAr[],   // IN - float array
		 	 	 	 string strAr[],    // IN - string array
		 	 	 	 const int AR_SIZE, // IN - Array Size
		 	 	 	 string keyName)    // IN - search keyword
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR FORMATING
	 * -------------------------------------------------------------------
	 * FIRST_COL_WIDTH  : Holds setw size for first column
	 * SECOND_COL_WIDTH : Holds setw size for second column
	 * THIRD_COL_WIDT   : Holds setw size for third column
	 ********************************************************************/
	const int FIRST_COL_WIDTH  = 9;
	const int SECOND_COL_WIDTH = 25;
	const int THIRD_COL_WIDTH  = 10;

	// Variable List
	int  index;      //CALC - holds value for array index
	bool found;      //CALC - sentinel value on whether string is found

	// Processing - initializing variables
	index       = 0;
	found       = false;

	// Processing - loops until name is found or until index is greater
	//              than the array size
	while(index < AR_SIZE && !found)
	{
		// Processing - outputs number, string, and float values to output
		//              file if string being searched is found. If not
		//              found, index is incremented
		if(strAr[index] == keyName)
		{
			found = true;
			oFile << left;
			oFile << setw(FIRST_COL_WIDTH)  << numAr[index]
				  << setw(SECOND_COL_WIDTH) << strAr[index]
				  << "$";
			oFile << setw(THIRD_COL_WIDTH)  << right
				  << setprecision(2)        << fixed
				  << floatAr[index]         << endl;

			// Processing - accumulator for float values (balance)
			floatSum = floatSum + floatAr[index];
		}
		else
		{
			index++;
		}
	}

	return index;
}



