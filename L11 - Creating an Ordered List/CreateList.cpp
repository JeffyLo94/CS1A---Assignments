/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Sem Diaz
 * STUDENT ID  : 374780     & 374640
 * LAB #11     : Creating an Ordered List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/30/14
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
* 		head    : Head of the list
**************************************************************************/
void CreateList(PersonInfo* &head)		// Out - Head of the list
{
	// DECLARATIONS

	// Variables
	PersonInfo* perPtr;			// Proce - Dynamic for propagating list
	PersonInfo* tail;
	ifstream    inFile;			// In    - Input file variable

	// INITIALIZATIONS
	tail   = NULL;
	perPtr = NULL;
	perPtr = new PersonInfo;
	inFile.open("Input.txt");
	if(head == NULL)
	{
		// PROCESSING - Creates list of nodes
		while(inFile && perPtr != NULL)
		{

			getline(inFile, perPtr->name);
			cout << "Adding : " << perPtr->name << endl;
			inFile.get(perPtr->gender);
			inFile >> perPtr->age;
			inFile.ignore(numeric_limits<streamsize>::max(),'\n');
			inFile.ignore(numeric_limits<streamsize>::max(),'\n');

			// AlphaSortPeople - Sorts nodes alphabetically
			AlphaSortPeople(head, tail, perPtr);

			perPtr = NULL;
			perPtr = new PersonInfo;
		}// END - WHILE
		delete perPtr;
		perPtr = NULL;
		cout << endl;
	}
	else
	{
		cout << "\n*** ERROR- List has already been created ***\n"
			 << "*** Please clear list to create new list ***\n";
	}
	inFile.close();
}
