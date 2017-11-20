#ifndef ASSIGNTENHEADER_H_
#define ASSIGNTENHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


/*************************************************************************
 * Prototypes
 * -----------------------------------------------------------------------
 * PrintHeader - This function receives the assignment name, assignment
 * 	type, and the assignment number and then outputs the appropriate
 * 	heading.
 * FileToArray - This function receives the an integer array, float array,
 *  string array, array size, and input file name
 * NameSearchToFile - This function receives the search keyword,
 * 	accumulator for float values, integer array, float array, string array,
 * 	array size, and output file name and then returns index of found string
 ************************************************************************/
void PrintHeaderToFile(ofstream &oFile,  // IN & OUT - output file
				 string asName,          // IN - assignment name
				 char asType,            // IN - assignment type
				 int asNum);             // IN - assignment number

void FileToArray(int numAr[],            // IN - integer array
		 	 	 float floatAr[],        // IN - float array
		 	 	 string strAr[],         // IN - string array
		 	 	 const int AR_SIZE,      // IN - array size
		 	 	 string fileName);       // IN/OUT - Input File

int NameSearchToFile(ofstream &oFile,    // IN/OUT - Output File
					 float &floatSum,    // IN/CALC - accumulator of float
					 	 	 	 	 	 //           values
					 int numAr[],        // IN - integer array
					 float floatAr[],    // IN - float array
					 string strAr[],     // IN - string array
					 const int AR_SIZE,  // IN - Array Size
					 string keyName);    // IN - search keyword

#endif /* ASSIGNTENHEADER_H_ */
