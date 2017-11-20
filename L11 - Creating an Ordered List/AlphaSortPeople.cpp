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
* FUNCTION AlphaSortPeople
*--------------------------------------------------------------------------
*	This function determines and sorts nodes into alphabetical order
* RETURNS: head, tail of list
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		head    : the start of the list must be predefined
* 		tail    : the end of the list must be predefined
* 		perNode : the node being added must be predefined
*
* POST-CONDITIONS
* 		head    : the start of the list may be modified
* 		tail    : the end of the list may be modified
* 		perNode : the node being added may be modified
**************************************************************************/
void AlphaSortPeople(PersonInfo* &head, 	//IN&OUT - start of list
					 PersonInfo* &tail, 	//IN&OUT - end of list
					 PersonInfo* &perNode)	//IN&OUT - node being added
{
	// DECLARATIONS
	// Variables
	PersonInfo* searchPtr;
	bool		found;
	int			option;
	// INITIALIZATIONS
	found = false;
	option = 0;
	searchPtr = head;
	if(IsEmpty(head) || perNode->name <= searchPtr->name)
	{
		found = true;
		option = 1;
	}

	while(!found && searchPtr->next != NULL)
	{
		if(searchPtr->next->name >= perNode->name)
		{
			found = true;
			option = 2;
		}
		else
		{
			searchPtr = searchPtr->next;
		}
	}
	//Adds to Tail
	if(!found && searchPtr->next == NULL)
	{
		perNode->next = tail->next;
		tail->next   = perNode;
		perNode->prev = tail;
		tail         = perNode;
	}
	//Adds to head
	else if(found && option == 1)
	{
		if(!IsEmpty(head))
		{
			tail 		 = head;
			tail->prev   = perNode;
			perNode->prev = NULL;
		}
		else
		{
			perNode->prev = head;
			tail  = perNode;
		}
		perNode->next    = head;
		head 			= perNode;

	}
	//Adds inside
	else if(found && option == 2)
	{
		searchPtr->next->prev = perNode;
		perNode->next    = searchPtr->next;
		searchPtr->next = perNode;
		perNode->prev = searchPtr;
	}

}
