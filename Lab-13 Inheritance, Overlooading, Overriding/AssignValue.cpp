/*******************************************************************************
 *	AUTHOR		: Anthony Ramirez & Jeffrey Lo
 *	STU ID#		: 369397		  & 374780
 *	LAB # 13  	: Inheritance, Overloading, Overriding
 *	CLASS   	: CS1B
 *	SECTION 	: 8-1PM Monday-Thursday
 *	DUE DATE 	: 6/26/14
 ******************************************************************************/

#include "Header.h"

/*******************************************************************************
 * FUNCTION AssignValue
 * -----------------------------------------------------------------------------
 * This function will assign a new value to an animal of the users choice
 * RETURNS: NONE
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 		Animal, Sheep, and Pig class must be defined as well as the AnimalList
 * 		struct.
 *
 * 		animalArry[]: Must be previously defined and used to access the struct
 * 					  and the object of type sheep or pig
 * 		index       : Must be previously defined and used to determine which
 * 					  object age to be set
 * 		newVal      : Must be previously defined and used to input a new value
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: nothing-> however, returns back the array by reference with the
 * 						   modified object
 *
 *
 *******************************************************************************/
 void AssignValue(AnimalList animalArray[], //IN & OUT - used for output
		 	 	 int 	     index,		    //IN - used to determine output
		 	 	 float	     newVal)		//IN - stores a new age into the object
 {
	 //Depending on which case the user chooses, a certain element of the array
	 //will be chosen
	 switch(index)
	{
		 case 1 : animalArray[0].someSheep.SetValue(newVal);
				break;
		 case 2 : animalArray[1].someSheep.SetValue(newVal);
				break;
		 case 3 : animalArray[2].somePig.SetValue(newVal);
				break;
		 case 4 : animalArray[3].somePig.SetValue(newVal);
				break;
	 }
 }
