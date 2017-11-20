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
* METHOD ChangeValue
*--------------------------------------------------------------------------
*	This function changes the animal value
* RETURNS: nothing
* -> changes value of animal
*--------------------------------------------------------------------------
**************************************************************************/
void Animals::ChangeValue(float price) //IN - Price to be changed
{
	// Processing - assigns price to value
	value = price;
}
