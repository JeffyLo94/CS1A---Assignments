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
* METHOD ChangeAge
*--------------------------------------------------------------------------
*	This function changes the animal age
* RETURNS: nothing
* -> changes age
*--------------------------------------------------------------------------
**************************************************************************/
void Animals::ChangeAge(int animalAge) //IN - Age to be changed to
{
	// Processing - Sets object age to age passed in
	age = animalAge;
}
