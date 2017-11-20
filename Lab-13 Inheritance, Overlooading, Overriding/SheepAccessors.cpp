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
* METHOD GetWoolType
*--------------------------------------------------------------------------
*	This method gets and returns the wool type of the sheep object
* RETURNS: Name of the sheep object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* The sheep object must be created
*
* POST-CONDITIONS
* Returns the wool type of the object
**************************************************************************/
string Sheep::GetWoolType() const
{
	string typeOfWool; // Out - returned string holding the wool type

	switch(woolType)
	{
		case LONG   : typeOfWool = "Long";
		 	 	    break;
		case MEDIUM : typeOfWool = "Medium";
		 	 	 	break;
		case FINE   : typeOfWool = "Fine";
		 	 	 	break;
		case CARPET : typeOfWool = "Carpet";
		 	 	 	break;
		default 	: "**ERROR - Wool type undefined**\n";
	}

	return typeOfWool;
}

/**************************************************************************
* METHOD GetWoolColor
*--------------------------------------------------------------------------
*	This method gets and returns the wool color of the sheep object
* RETURNS: wool color of the sheep object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* The Sheep object must be created
*
* POST-CONDITIONS
* Returns the wool color of the sheep object
**************************************************************************/
string Sheep::GetWoolColor() const
{
	return woolColor;
}

/**************************************************************************
* METHOD Display
*--------------------------------------------------------------------------
*	This method gets and returns the attributes of the animal/sheep object
*	as a string
* RETURNS: string of the attributes of the animal/sheep object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* The animal/sheep object must be created
*
* POST-CONDITIONS
* Returns the string of the attributes of the animal/sheep object
**************************************************************************/
string Sheep::Display() const
{
	ostringstream oss; //Out - used to create a string to be returned

	// Processing - Converts info into a string to be returned
	oss << left
		<< setw(COL_ONE+1)   << Animal::GetName()
		<< setw(COL_TWO-3)   << Animal::GetAge()
		<< right
		<< fixed	 << setprecision(2)
		<< setw(COL_THREE-1) << Animal::GetValue()
		<< left << ' '
		<< setw(COL_FOUR)    << GetWoolType()
		<< setw(COL_FIVE)    << GetWoolColor()
		<< endl;


	return oss.str();
}

/**************************************************************************
* METHOD DisplayTableHead
*--------------------------------------------------------------------------
*	This method returns the table head as a string
* RETURNS: string of the table header for the sheep
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* The sheep object must be created
*
* POST-CONDITIONS
* Returns the string of the table header for the sheep
**************************************************************************/
string Sheep::DisplayTableHeader() const
{
	ostringstream oss; //Out - used to create a string to be returned

	// Processing - Converts table header into a string to be returned
	oss << left
		<< setw(COL_ONE)     << "NAME"
		<< setw(COL_TWO-1)   << "AGE"
		<< setw(COL_THREE)   << "VALUE"
		<< setw(COL_FOUR)    << "WOOL TYPE"
		<< setw(COL_FIVE)    << "WOOL COLOR"
		<< endl
		<< right
		<< setfill('-')
		<< setw(COL_ONE)     << ' '
		<< setw(COL_TWO - 1) << ' '
		<< setw(COL_THREE-1) << ' '
		<< setw(COL_FOUR)   << ' '
		<< setw(COL_FIVE)    << '-'
		<< endl
		<< setfill(' ');

	return oss.str();
}
