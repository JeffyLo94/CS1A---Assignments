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
* FUNCTION DisplayList
*--------------------------------------------------------------------------
*	This function outputs a list of person information
* RETURNS: nothing
* -> Outputs a list of person information
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head       : animal list must be predefined
* 		os		   : Output stream must be predefined
*
* POST-CONDITIONS
* 		Nothing is returned, list of person information is output.
**************************************************************************/
void DisplayList(AnimalStruct* head,  //IN - animal list
				 ostream &os)    //IN - Output Stream
{
	// DECLARATIONS
	// Variables
	AnimalStruct *animalPtr;

	// INITIALIZATIONS
	animalPtr  = head;

	// Output - outputs table header
	os << left;
	os << setw(COL_ONE)   << "ANIMAL";
	os << setw(COL_TWO)   << "NAME";
	os << setw(COL_THREE) << "AGE";
	os << setw(COL_FOUR)  << "VALUE";
	os << endl;
	os << right;
	os << setfill('-');
	os << setw(COL_ONE-1) << " ";
	os << setw(COL_TWO)   << " ";
	os << setw(COL_THREE) << " ";
	os << setw(COL_FOUR)  << " ";
	os << setfill(' ');
	os << endl;

	// Outputs - outputs individual elements in list
	while(animalPtr != NULL)
	{
		os << left;
		os << setw(COL_ONE)   << animalPtr->someAnimal.GetAnimalType();
		os << setw(COL_TWO)   << animalPtr->someAnimal.GetName();
		os << setw(COL_THREE) << animalPtr->someAnimal.GetAge();
		os << right;
		os << setw(COL_FOUR-2)  << fixed
		   << setprecision(2) << animalPtr->someAnimal.GetValue();
		os.unsetf(ios::fixed);
		os << endl;

		animalPtr = animalPtr -> next;
	}
	delete animalPtr;
	animalPtr = NULL;

	os << endl << endl << right;
}
