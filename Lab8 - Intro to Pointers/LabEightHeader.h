/**************************************************************************
 * AUTHOR		: Jeffrey Lo & Andrea Lamore
 * STUDENT ID	: 374781     & 256144
 * LAB #8		: Intro to Pointers
 * CLASS		: CS1B
 * SECTION		: MTh: 8am
 * DUE DATE		: 6/8/14
 *************************************************************************/

#ifndef LABEIGHTHEADER_H_
#define LABEIGHTHEADER_H_

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * FUNCTION OutputProgramHeader
 *------------------------------------------------------------------------
 * This function receives 4 strings and 1 integer and outputs the header
 * 	for the assignment
 * Returns nothing
 * 	-> Outputs header for Lab/Assignment
 ************************************************************************/
void OutputProgramHeader(ostream& outOption, //IN - Output stream option
						 string  programmer, //IN - Programmer Name
				         string  className,  //IN - Class
				         string  section,    //IN - Class time
				         int     asNum,      //IN - Assignment Number
				         string  asName,     //IN - Assignment Name
					     char    asType);    //IN - Assignment Type

#endif /* LABEIGHTHEADER_H_ */
