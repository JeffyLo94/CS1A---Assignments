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
* METHOD AnimalConstructor
*--------------------------------------------------------------------------
*	This function initializes the animal constructor
* RETURNS: nothing
* -> Initializes and creates an animal object
*--------------------------------------------------------------------------
**************************************************************************/
Animals::Animals()
{
	// INITIALIZATIONS - initializes all attributes
	animalType.clear();
	name.clear();
	age   	   = 0;
	value 	   = 0;
}
