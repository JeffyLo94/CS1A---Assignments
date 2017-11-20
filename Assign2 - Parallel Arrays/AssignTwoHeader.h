/*************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Parallel Arrays
 * CLASS		: CS1B
 * SECTION		: MTh: 8am-1pm
 * DUE DATE		: 6/10/14
 *************************************************************************/

#ifndef ASSIGNTWOHEADER_H_
#define ASSIGNTWOHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// P R O T O T Y P E S
/*************************************************************************
 * FUNCTION PrintHeaderToFile
 *------------------------------------------------------------------------
 * This function receives the output file, programmer name, class name,
 * class time, assignment name, assignment type, and the assignment number
 * and then outputs the class heading
 ************************************************************************/
void PrintHeaderToFile(ofstream     &oFile,     //IN & OUT - output file
					   const string PROGRAMMER, //IN - Programmer Name
				       const string CLASS_NAME, //IN - Class
				       const string SECTION,    //IN - Class time
				       const int    AS_NUM,     //IN - Assignment Number
				       const string AS_NAME,    //IN - Assignment Name
					   const char   AS_TYPE);   //IN - Assignment Type
/*************************************************************************
 * FUNCTION FileToArray
 *------------------------------------------------------------------------
 * This function receives the an integer array, float array, string array,
 * 	array size, and input file name and converts input into 3 parallel
 * 	arrays
 ************************************************************************/
void FileToArray(int        numAr[],    // IN - integer array
				 float      floatAr[],  // IN - float array
				 string     strAr[],    // IN - string array
				 const int  AR_SIZE,    // IN - array size
				 string     fileName);  // IN/OUT - Input File
/*************************************************************************
 * FUNCTION NameSearchToFile
 *------------------------------------------------------------------------
 * This function receives the search keyword, accumulator for float values,
 *  integer array, float array, string array, array size, and output file
 *  name which it uses to search through arrays for a user defined string
 *  (name) and outputs the name, id, and balance of that found string.
 ************************************************************************/
int NameSearchToFile(ofstream& oFile,     // IN/OUT - Output File
		 	 	 	 float&    floatSum,  // IN     - accumulator of float
		 	 	 	 	 	 	 	 	  //           values
		 	 	 	 int       numAr[],   // IN     - integer array
		 	 	 	 float     floatAr[], // IN     - float array
		 	 	 	 string    strAr[],   // IN     - string array
		 	 	 	 const int AR_SIZE,   // IN     - Array Size
		 	 	 	 string    keyName);  // IN     - search keyword


#endif /* ASSIGNTWOHEADER_H_ */
