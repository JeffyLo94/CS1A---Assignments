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
* FUNCTION CreateList
*--------------------------------------------------------------------------
*	This function read from a input file and will display every name in
*	the input file that is added to the list
* RETURNS: head of list by reference
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		<none>
*
* POST-CONDITIONS
* 		Returns the head of the list
**************************************************************************/
AnimalStruct* CreateList()
{
	// Variables
	AnimalStruct* animalPtr;		// Proce - Dynamic for propagating list
	AnimalStruct* head;				// OUT   - head of the list
	ifstream      inFile;			// In    - Input file variable
	string        type;				// IN	 - Animal Type
	string		  animalName;		// IN	 - Animal name
	int			  animalAge;		// IN	 - Animal age
	float		  price;			// IN	 - Animal price
	int			  counter;			// IN	 - Index keeper for list


	// INITIALIZATIONS
	counter	  = 3;
	head	  = NULL;
	animalPtr = NULL;
	animalPtr = new AnimalStruct;
	inFile.open("Input.txt");

	// PROCESSING - Creates list of nodes of Animal Struct
	while(inFile && animalPtr != NULL)
	{
		animalPtr->index = counter--;

		// INPUT - Reads inputs from input file
		getline(inFile, type);
		getline(inFile, animalName);
		inFile >> animalAge;
		inFile >> price;
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');

		// SetIntialInfo - Method that sets the initial information of an
		//				   animal object
		animalPtr->someAnimal.SetInitialInfo(type,
											 animalName,
											 animalAge,
											 price);

		animalPtr->next = head;
		head = animalPtr;
		animalPtr = new AnimalStruct;
	}// END - WHILE
	delete animalPtr;
	animalPtr = NULL;
	cout << endl;

	inFile.close();

	return head;
}
