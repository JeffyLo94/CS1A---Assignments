/*******************************************************************************
*	AUTHOR	 : Anthony Ramirez & Jeffrey Lo
*	STU ID#	 : 369397	  & 374780
*	LAB # 13  	: Inheritance, Overloading, Overriding
*	CLASS   : CS1B
*	SECTION : 8-1PM Monday-Thursday
*	DUE DATE : 6/26/14
******************************************************************************/

#include "Header.h"

/*******************************************************************************
* FUNCTION InitializeSheep
* -----------------------------------------------------------------------------
* This function initializes the sheep inside the list (the first two items)
* RETURNS: animalAr[]
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* animalAr : the struct list must be previously defined
*
* POST-CONDITIONS
* animalAr is returned
*
*******************************************************************************/
void InitializeSheep(AnimalList animalAr[]) //IN & OUT - array of AnimalList
											//	         struct
{
	animalAr[0].someSheep.SetAll(CARPET, "White", "Maa", 1, 1652.58);
	animalAr[1].someSheep.SetAll(MEDIUM, "Black", "BaaBaa", 3, 15000.00);
}
