/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Anthony Ramirez
 * STUDENT ID  : 374780     & 369397
 * LAB #13     : Inheritance, Overloading, Overriding
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/7/14
 *************************************************************************/

#include "Header.h"

/**************************************************************************
* METHOD GetName
*--------------------------------------------------------------------------
*	This method gets and returns the name of the animal object
* RETURNS: Name of the animal object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The Animal object must be created
*
* POST-CONDITIONS
* 		Returns the name of the object
**************************************************************************/
string Animal::GetName() const
{
	return name;
}

/**************************************************************************
* METHOD GetAge
*--------------------------------------------------------------------------
*	This method gets and returns the age of the animal object
* RETURNS: Age of the animal object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The Animal object must be created
*
* POST-CONDITIONS
* 		Returns the age of the object
**************************************************************************/
int Animal::GetAge() const
{
	return age;
}

/**************************************************************************
* METHOD GetValue
*--------------------------------------------------------------------------
*	This method gets and returns the value of the animal object
* RETURNS: Value of the animal object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The Animal object must be created
*
* POST-CONDITIONS
* 		Returns the value of the object
**************************************************************************/
float Animal::GetValue() const
{
	return value;
}

/**************************************************************************
* METHOD Display
*--------------------------------------------------------------------------
*	This method gets and returns the attributes of the animal object as a
*	string
* RETURNS: string of the attributes of the animal object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The animal object must be created
*
* POST-CONDITIONS
* 		Returns the string of the attributes of the animal object
**************************************************************************/
string Animal::Display() const
{
	ostringstream oss;  //OUT - used for output

	// Processing - Converts info into a string to be returned
	oss << left
		<< setw(COL_ONE+1) << GetName()
		<< setw(COL_TWO-1) << GetAge()
		<< right
		<< setw(COL_THREE-1) << GetValue()
		<< endl;

	return oss.str();
}

/**************************************************************************
* METHOD DisplayTableHead
*--------------------------------------------------------------------------
* This method returns the table head as a string
* RETURNS: string of the table header for the sheep
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The animal object must be created
*
* POST-CONDITIONS
* 		Returns the string of the table header for the animal
**************************************************************************/
string Animal::DisplayTableHeader() const
{
	ostringstream oss; //OUT - used for output

	// Processing - Converts table header into a string to be returned
	oss << left
		<< setw(COL_ONE) << "NAME"
		<< setw(COL_TWO+2) << "AGE"
		<< setw(COL_ONE) << "VALUE"
		<< endl
		<< right << setfill('-') << setw(COL_ONE) << ' '
		<< setw(COL_TWO - 1) << ' '
		<< setw(COL_THREE) << '-'
		<< endl
		<< setfill(' ');

	return oss.str();
}
