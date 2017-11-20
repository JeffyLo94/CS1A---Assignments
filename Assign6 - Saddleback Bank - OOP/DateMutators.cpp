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
* Method SetAll
*--------------------------------------------------------------------------
*	This method sets all the month, day, and year data in the date object
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
void Date::SetAll(int newMonth, //IN - month value to update to
				  int newDay,   //IN - day value to update to
				  int newYear)  //IN - year value to update to
{
//	//Variable List
//	bool error;
//
//	error = false;


	//Processing - updating object attributes if parameters pass
	//             error checks for the month and day
	//Processing - Error checks the month
//	if(newMonth > 0 && newMonth < 12)
//	{
		month = newMonth;
//	}
//	else
//	{
//		cout << "**Error - user input month does not exist**\n";
//		error = true;
//	}

	//Processing - Error Checks for day, with respect to the month
//	if((month == 1 || month == 3 || month == 5 || month == 7 ||
//		month == 8 || month == 10 || month == 12) &&
//	   (newDay > 0 && newDay < 32))
//	{
		day   = newDay;
//	}
//	else if((month == 2 || month == 4 || month == 6 || month == 9 ||
//			 month == 11) && (newDay > 0 && newDay < 31))
//	{
//		day   = newDay;
//	}
//	else
//	{
//		cout << "**Error - user input day does is not valid in "
//				"specified month**\n";
//		error = true;
//	}

	//Processing - Checks if an error was encountered before assigning year
//	if (!error)
//	{
		year  = newYear;
//	}
//	else
//	{
//		cout << "**Error - DATE NOT UPDATED**\n\n";
//		year  = 0;
//		day   = 0;
//		month = 0;
//	}

}
