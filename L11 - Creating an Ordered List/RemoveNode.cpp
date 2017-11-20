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
 * FUNCTION RemoveNode
 *-------------------------------------------------------------------------
 *	This function removes the node that is specified if the node exits in
 *	the list that is passed in.
 * RETURNS: List possibly with node removed
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head   		: The start of the list must be predefined
* 		targetNode	: The node to be removed must be predefined
*
* POST-CONDITIONS
* 		Returns the list, possible with node removed
**************************************************************************/
PersonInfo* RemoveNode(PersonInfo* head,		//IN - Start of List
					   PersonInfo* targetNode)	//IN - Node to be removed
{
	// DECLARATIONS
	// Variables
	PersonInfo* searchPtr; //

	// INITIALIZATIONS
	searchPtr = head;

	// Processing - Removes node if node is inside list
	while(searchPtr != NULL)
	{
		if(searchPtr == targetNode)
		{
			if(searchPtr->prev == NULL && searchPtr->next != NULL)
			{
				searchPtr->next->prev = NULL;
				head = searchPtr->next;
				searchPtr = NULL;
			}
			else if (searchPtr->prev == NULL && searchPtr->next == NULL)
			{
				head = NULL;
				searchPtr = NULL;
			}
			else if (searchPtr->next == NULL)
			{
				searchPtr->prev->next = NULL;
				searchPtr = NULL;
			}
			else
			{
				searchPtr->prev->next = searchPtr->next;
				searchPtr->next->prev = searchPtr->prev;
				searchPtr = NULL;
			}
		}
		else
		{
			searchPtr = searchPtr->next;
		}
	}
	searchPtr = NULL;

	return head;
}
