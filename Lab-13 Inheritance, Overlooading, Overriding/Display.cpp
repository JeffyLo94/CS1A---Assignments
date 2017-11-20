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
 * FUNCTION Display
 * -----------------------------------------------------------------------------
 * This function will display both the pig and the sheep lists
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 		AnimalsArray[]:
 *
 *
 * POST-CONDITIONS
 *
 * 		Outputs the lists to the console
 *
 *******************************************************************************/
 void Display(AnimalList animalList[]) //IN & OUT - used for output
 {
	 cout << "\nSHEEP:\n";
	 cout << animalList[0].someSheep.DisplayTableHeader();
	 cout << animalList[0].someSheep.Display();
	 cout << animalList[1].someSheep.Display();
	 cout << endl;

	 cout << "PIGS: \n";
	 cout << animalList[2].somePig.DisplayTableHeader();
	 cout << animalList[2].somePig.Display();
	 cout << animalList[3].somePig.Display();
	 cout << endl;

 }
