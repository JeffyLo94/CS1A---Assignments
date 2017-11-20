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
* FUNCTION InitializePig
* -----------------------------------------------------------------------------
* This function initializes the pigs (the last two items in the array)
* RETURNS: the animal array, animalAr[]
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* animalAr : the struct list must be previously defined
*
* POST-CONDITIONS
* animalAr is returned
*
******************************************************************************/
void InitializePig(AnimalList animalAr[]) //IN & OUT - array of AnimalList
 	 	 	 	 	 	 	 	 	 	  //	       struct
{
	cout << setprecision(2) << fixed;
	animalAr[2].somePig.SetAll(CORKSCREW, "Babe",2, 85000.00);
	animalAr[3].somePig.SetAll(CURL_UP, "Wilbur",5, 21562.20);
}
