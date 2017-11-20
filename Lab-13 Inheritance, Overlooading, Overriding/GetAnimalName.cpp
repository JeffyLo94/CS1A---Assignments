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
 * FUNCTION GetAnimalName
 * -----------------------------------------------------------------------------
 * This function will retreive the animals name and return it as a string.
 * RETURN: animalName
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * Pig, Sheep, and Animal class must be defined
 *
 * POST-CONDITIONS
 *
 * RETURNS animalName
 *******************************************************************************/
 string GetAnimalName(AnimalList animalArray[], //IN & OUT used for output
		 	 	 	  int        index)			//IN - used to determine output
 {
	 string animalName; //OUT - stores animalName and is returned to the calling
	 	 	 	 	 	//		function
	 //Begin Switch
	 switch(index)
	{
		 case 1 : animalName = animalArray[0].someSheep.GetName();
				 break;
		 case 2 : animalName = animalArray[1].someSheep.GetName();
				break;
		 case 3 : animalName = animalArray[2].somePig.GetName();
					break;
		 case 4 : animalName = animalArray[3].somePig.GetName();
						break;
	 }//End switch

	return animalName;
 }
