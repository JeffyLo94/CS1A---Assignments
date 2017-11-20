/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Breanna Nelson
 * STUDENT ID  : 374780     & 272229
 * LAB #12     : Intro to OOP
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/2/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
* METHOD SetInitialInfo
*--------------------------------------------------------------------------
*	This method sets the initial info
* RETURNS: nothing
* -> Sets attributes to specified parameters
*--------------------------------------------------------------------------
**************************************************************************/
void Animals::SetInitialInfo(string type,		//IN - Animal type
							 string animalName, //IN - Animal name
							 int    animalAge,	//IN - Animal age
							 float  price)		//IN - Animal price
{
	// Processing - sets animal attributes to specified values/parameters
	animalType = type;
	name 	   = animalName;
	age		   = animalAge;
	value	   = price;
}
