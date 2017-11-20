/*************************************************************************
 * AUTHORS		: Jeffrey Lo & John Zavala
 * STUDENT IDs	: 374781     & 100647
 * LAB #4		: Functions - Excercise - Coin Flips
 * CLASS		: CS1B
 * SECTION		: M-Th: 8am - 1:50pm
 * DUE DATE 	: 6/5/2014
 *************************************************************************/

#ifndef COINFLIPHEADER_H_
#define COINFLIPHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

/*************************************************************************
 * FUNCTION Get User Name And Gender
 *------------------------------------------------------------------------
 * This function gets the user name from the user and gender. Once it
 * receives the gender it also does an error check to make sure the
 * input is a valid gender.
 * 	- Returns first name, last name, and gender via reference.
 *------------------------------------------------------------------------
 ************************************************************************/
void GetUserNameAndGender(string &userFirstName, //OUT - returns first name
												 //     to calling function
						  string &userLastName,  //OUT - returns last name
						  	  	  	  	  	  	 //     to calling function
						  char   &gender);       //OUT - returns gender to
												 //      calling function

/*************************************************************************
 * FUNCTION OutputResults
 *------------------------------------------------------------------------
 * This function takes in the number of flips and the avg number of heads
 *  outputs the results of the game.
 * 	-Returns nothing
 *------------------------------------------------------------------------
 ************************************************************************/
void OutputResults(int   numFlips,  //IN - total number of coin flips
				   float avgHeads); //IN - average number of heads flipped


/*************************************************************************
 * FUNCTION FlipCoin
 *------------------------------------------------------------------------
 * This function flips the coin and determines whether the flip result
 * is false(tails) or true(head).
 * 	- Returns the result of the flip(as a boolean)
 *------------------------------------------------------------------------
 ************************************************************************/
bool FlipCoin();

/*************************************************************************
 * FUNCTION CalcAvg
 *------------------------------------------------------------------------
 * This function receives the total number of flips and the total number of
 * heads flipped and then calculates the average.
 * 	- Returns the average of heads to total flips
 ************************************************************************/
float CalcAvg(int numHeads,		//IN & CALC - the number of heads
			  int numFlips);	//IN & CALC - the total number of flips



#endif /* COINFLIPHEADER_H_ */
