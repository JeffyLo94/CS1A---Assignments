/**************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374780
 * Assign #6	: Saddleback Bank - OOP
 * CLASS		: CS1B
 * SECTION		: M-Th : 8am - 1:05pm
 * DUE DATE		: 7/8/14
 *************************************************************************/

#include "Header.h"
/**************************************************************************
* Method Date
*--------------------------------------------------------------------------
*	This method is the default constructor.
* RETURNS: nothing
* -> Initializes data in Date object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		None
*
* POST-CONDITIONS
* 		Date object attributes will be updated with default values
**************************************************************************/
Date::Date()
{
	//Processing - initializing object attributes to default values
	month = 0;
	day   = 0;
	year  = 0;
}

/**************************************************************************
* Method Date
*--------------------------------------------------------------------------
*	This method is another constructor that will initialize the Date object
*	attributes to the parameter values passed in
* RETURNS: nothing
* -> sets variables in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newMonth   : the new month must be predefined
* 		newDay	   : the new day must be predefined
* 		newYear	   : the new year must be predefined
*
* POST-CONDITIONS
* 		Date object attributes will be updated with values defined in the
* 		passed parameters
**************************************************************************/
Date::Date(int newMonth, //IN - month value to update to
		   int newDay,   //IN - day value to update to
		   int newYear)  //IN - year value to update to
{
	//Processing - initializing object attributes to defined values
	SetAll(newMonth, newDay, newYear);
}

/**************************************************************************
* Method Destructor
*--------------------------------------------------------------------------
*	This method is the destructor.
* RETURNS: nothing
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The date object must first have been instantiated
*
* POST-CONDITIONS
* 		Date object will be destructed
**************************************************************************/
Date::~Date()
{
}
