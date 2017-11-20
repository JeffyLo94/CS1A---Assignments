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
* Method Checking
*--------------------------------------------------------------------------
*	This method is the default constructor.
* RETURNS: nothing
* -> Initializes data in Checking object
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		None
*
* POST-CONDITIONS
* 		Checking object attributes will be updated with default values
**************************************************************************/
Checking::Checking() : Account()
{
}

/**************************************************************************
* Method Checking
*--------------------------------------------------------------------------
*	This method is another constructor that will initialize the Checking
*	 object attributes to the parameter values passed in
* RETURNS: nothing
* -> sets variables in method to a value
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		newName		: the new month must be predefined
* 		newAcctNum	: the new day must be predefined
* 		newBalance	: the new year must be predefined
* 		newMonth	: the new month must be predefined
* 		newDay		: the new day must be predefined
* 		newYear		: the new year must be predefined
*
* POST-CONDITIONS
* 		Checking object attributes will be updated with values defined in
* 		the passed parameters
**************************************************************************/
Checking::Checking(string  newName,	  //IN - name to update to
				 int     newAcctNum,  //IN - account number to update to
				 double  newBalance,  //IN - balance value to update to
				 int 	 newMonth,	  //IN - month value to update to
				 int 	 newDay,	  //IN - day value to update to
				 int 	 newYear)	  //IN - year value to update to
				 : Account()
{
	//SetAll - initializing object attributes to defined values
	Account::SetAll(newName, newAcctNum, newBalance,
					newMonth, newDay, newYear);
	//SetAll - initializing Date attributes to defined values
	lastAccess.SetAll(newMonth, newDay, newYear);
	next = NULL;
	prev = NULL;
}

/**************************************************************************
* Method Destructor
*--------------------------------------------------------------------------
*	This method is the destructor.
* RETURNS: nothing
* -> Object is destroyed
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The account object must first have been instantiated
*
* POST-CONDITIONS
* 		Checking object will be destroyed
**************************************************************************/
Checking::~Checking()
{
}
