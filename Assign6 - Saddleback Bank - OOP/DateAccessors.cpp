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
* Method GetMonth
*--------------------------------------------------------------------------
*	This method gets the month integer from the object
* RETURNS: the month integer
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The attributes in the Date object must be predefined
*
* POST-CONDITIONS
* 		The Date object's month integer value is returned
**************************************************************************/
int Date::GetMonth() const
{
	return month;
}

/**************************************************************************
* Method GetDay
*--------------------------------------------------------------------------
*	This method gets the Day integer from the object
* RETURNS: the day integer
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The attributes in the Date object must be predefined
*
* POST-CONDITIONS
* 		The Date object's day integer value is returned
**************************************************************************/
int Date::GetDay() const
{
	return day;
}

/**************************************************************************
* Method GetYear
*--------------------------------------------------------------------------
*	This method gets the Year integer from the object
* RETURNS: the year integer
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The attributes in the Date object must be predefined
*
* POST-CONDITIONS
* 		The Date object's year integer value is returned
**************************************************************************/
int Date::GetYear() const
{
	return year;
}

/**************************************************************************
* Method ToString
*--------------------------------------------------------------------------
*	This method converts the date attributes into a string
* RETURNS: string with formated date info
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The attributes in the Date object must be predefined
*
* POST-CONDITIONS
* 		The string with date information will be returned
**************************************************************************/
string Date::ToString() const
{
	ostringstream oss;

	// Processing - Formats month section based on its integer
	if (month < 10)
	{
		oss << 0 << month << "/";
	}
	else
	{
		oss << month << "/";
	}

	//Processing - Formats day section based on its integer
	if (day < 10)
	{
		oss << 0 << day << "/";
	}
	else
	{
		oss << day << "/";
	}

	//Processing - Formats year section based on its integer
	if (year > 999)
	{
		oss << year;
	}
	else if (year > 99)
	{
		oss << 0 << year;
	}
	else if(year > 9)
	{
		oss << 0 << 0 << year;
	}
	else if(year >= 0)
	{
		oss << 0 << 0 << 0 << year;
	}

	return oss.str();
}

/**************************************************************************
* Method Print
*--------------------------------------------------------------------------
*	This method outputs the date info
* RETURNS: nothing
* -> date information is output to console
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The attributes in the Date object must be predefined
*
* POST-CONDITIONS
* 		None, date data is output
**************************************************************************/
void Date::Print() const
{
	cout << ToString();
}
