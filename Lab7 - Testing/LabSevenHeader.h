/**************************************************************************
 * Programmers : Jeffrey Lo & Matt Regueiro
 * Class       : CS1B
 * Section     : M - Th 8a
 * Lab # 7     : Testing
 * Due Date	   : 6/17/14
 *************************************************************************/


#ifndef LABSEVENHEADER_H_
#define LABSEVENHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/**************************************************************************
 * ------------------------------------------------------------------------
 * 	Used for program
 * ------------------------------------------------------------------------
 * 		MAX_BARS : The maximum bars a sheep can have before dying
 *************************************************************************/
const int MAX_BARS = 4;

//P R O T O T Y P E S
/**************************************************************************
 * GetSheepAndBars
 * -----------------------------------------------------------------------
 * 	This function will prompt and read the number of sheep and number of
 * 	bars
 * 	RETURN: number of sheep and number of bars
 *************************************************************************/
void GetSheepAndBars(int& numSheep,       //OUT - Number of sheep from user
					 float& numBars);     //OUT - Number of bars from user

/**************************************************************************
 * CalcFourBarsPerSheep
 * -----------------------------------------------------------------------
 * 	This function calculate the number of sheep that get four bars
 * 	RETURN: number of sheep that get four bars
 *************************************************************************/
int CalcFourBarsPerSheep(float numBars,   //IN - Number of choco bars
						 int   totSheep); //IN - Total number of sheep

/**************************************************************************
 * CalcSheepLeft
 * -----------------------------------------------------------------------
 * 	This function calculates the number of sheep left.
 * 	RETURNS: the number of sheep left.
 *************************************************************************/
int CalcSheepLeft(int totSheep, 	      //IN - The number of total sheep.
				  int sheepWithFour);     //IN - The number of sheep with
									      //		four chocolate bars.

/**************************************************************************
 * CalcBarsLeft
 * -----------------------------------------------------------------------
 * 	This function calculates the number of chocolate bars left.
 * 	RETURNS: the number of chocolate bars left.
 *************************************************************************/
float CalcBarsLeft(float totBars,         //IN - total number of bars
		   	   	   int sheepWithFour);    //IN - sheep with four bars

/**************************************************************************
 * OutResults
 * -----------------------------------------------------------------------
 * 	This function outputs the number of sheep with four bars, the sheep
 * 	with remainding bars, sheep with no bars, and bars left over.
 * 	RETURNS: nothing
 * 	-> outputs results
 *************************************************************************/
void  OutResults(int sheepLeft,           //IN - Sheep remaining
				 float barsLeft,          //IN - Bars remaining
				 int sheepWithFour);      //IN - Sheep with four bars

/**************************************************************************
 * TestDriver
 * -----------------------------------------------------------------------
 * 	This function performs test drives.
 * 	RETURNS: nothing
 * 	-> Output test drivers
 *************************************************************************/
void  TestDriver();

/*************************************************************************
 * FUNCTION AssignHeader
 *------------------------------------------------------------------------
 * This function receives 4 strings and 1 integer and outputs, to the
 * specified output stream, the header for the assignment
 * 	- Returns nothing
 ************************************************************************/
void OutputProgramHeader(ostream& outStream, //IN - Output stream type
						 string programmer,  //IN - Programmer Name
				         string className,   //IN - Class
				         string section,     //IN - Class time
				         int    asNum,       //IN - Assignment Number
				         string asName,      //IN - Assignment Name
					     char   asType);      //IN - Assignment Type

#endif /* LABSEVENHEADER_H_ */
