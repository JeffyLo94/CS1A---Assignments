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
 * FUNCTION ClearList
 *-------------------------------------------------------------------------
 *	This function removes every node in the list setting the head of the
 *	list to NULL
 * RETURNS: List possibly with node removed
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head   			: The start of the list must be predefined
* 		removingList	: The node to be removed
*
* POST-CONDITIONS
* 		<nothing>
* -> Empties the list
**************************************************************************/
void ClearList(PersonInfo* &head)	//IN - Start of List
{
	//DECLERATION

	// Varibales
	PersonInfo* removingList;

	// Processing - clears list if not already empty
	if(IsEmpty(head))
	{
		cout << "The list has been cleared!\n\n";
	}
	else
	{
		cout << "CLEARING LIST:\n";
		// Processing - removes list node by node until list is empty
		while(head != NULL)
		{
			removingList = head;
			cout << "Removing: " << removingList->name << "!\n";
			head = RemoveNode(head,removingList);
		}
		cout << "The list has been CLEARED!\n";
	}
	removingList = NULL;
}




