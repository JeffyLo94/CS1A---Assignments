/**************************************************************************
* AUTHOR      : Jeffrey Lo & Anthony Ramirez
* STUDENT ID  : 374780     & 369397
* LAB #13     : Inheritance, Overloading, Overriding
* CLASS       : CS1B
* SECTION     : M-Th : 8am - 1:05pm
* DUE DATE    : 7/7/14
*************************************************************************/
#include "Header.h"

/*******************************************************************************
* METHOD GetPigTail
*------------------------------------------------------------------------------
*	This method gets and returns the tail type of the pig object
* RETURNS: Name of the pig object
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The pig object must be created
*
* POST-CONDITIONS
* Returns the tail type of the object
*******************************************************************************/
string Pig::GetPigTail() const
{
	string typeOfTail;	//Out - holds string of the tail type

	switch(tailType)
	{
		case STRAIGHT	: typeOfTail = "Straight";
		 	 	 	 	break;
		case CORKSCREW	: typeOfTail = "Corkscrew";
						break;
		case CURL_UP	: typeOfTail = "Curl Up";
						break;
		case CURL_RIGHT	: typeOfTail = "Curl Right";
						break;
		case CURL_LEFT	: typeOfTail = "Curl Left";
		 	 	 	 	break;
		default		    : "**ERROR - Curl type undefined**\n";
	}

	return typeOfTail;
}

/*******************************************************************************
* METHOD Display
*------------------------------------------------------------------------------
*	This method gets and returns the attributes of the animal/pig object
*	as a string
* RETURNS: string of the attributes of the animal/pig object
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The animal/pig object must be created
*
* POST-CONDITIONS
* Returns the string of the attributes of the animal/pig object
*******************************************************************************/
string Pig::Display() const
{
	ostringstream oss;  //Out - used to create a string to be returned

	// Processing - Converts info into a string to be returned
	oss << left
		<< setw(COL_ONE+1) << Animal::GetName()
		<< setw(COL_TWO-3) << Animal::GetAge()
		<< right
		<< fixed	 << setprecision(2)
		<< setw(COL_THREE-1) << Animal::GetValue()
		<< left << ' '
		<< setw(COL_FOUR)  << GetPigTail()
		<< endl;

	return oss.str();
}

/*******************************************************************************
* METHOD DisplayTableHead
*------------------------------------------------------------------------------
*	This method returns the table head as a string
* RETURNS: string of the table header for the pig
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The pig object must be created
*
* POST-CONDITIONS
* Returns the string of the table header for the pig
*******************************************************************************/
string Pig::DisplayTableHeader() const
{
	ostringstream oss;  //Out - used to create a string to be returned

	// Processing - Converts table header into a string to be returned
	oss << left
		<< setw(COL_ONE)   << "NAME"
		<< setw(COL_TWO-1) << "AGE"
		<< setw(COL_THREE) << "VALUE"
		<< setw(COL_FOUR)  << "TAIL TYPE"
		<< endl
		<< right
		<< setfill('-')
		<< setw(COL_ONE) << ' '
		<< setw(COL_TWO - 1) << ' '
		<< setw(COL_THREE-1) << ' '
		<< setw(COL_FOUR-1)  << '-'
		<< endl
		<< setfill(' ');

	return oss.str();
}
