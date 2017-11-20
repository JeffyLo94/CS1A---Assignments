/**************************************************************************
 * AUTHOR      : Jeffrey Lo && Owen Mack
 * STUDENT ID  : 374780     && 112325
 * LAB #10     : Implementing a Queue
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/25/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
 *
 * FUNCTION PerformUserCommand
 *_________________________________________________________________________
 *  This function will take in the user command and chooses the correct
 *  path to execute the command.
 * 	- Returns head and tail
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		userCommand : user inputed command must be predefined
 * 		head     	: Start of the list must be predefined
 * 		tail        : End of the list must be predefined
 *
 * POST-CONDITIONS
 * 		Returns the head and tail and outputs and performs user command.
 *************************************************************************/
void PerformUserCommand(int userCommand,   //IN       - user inputed
											//           command
						PersonInfo *&head, //IN & OUT - start of list
						PersonInfo *&tail) //IN & OUT - end of list
{
	// Declarations
	// Variables
	int listSize; //CALC & OUT - holds the number of items in the list

	switch(userCommand)
	{
						  //Enqueue - adds a person to list
		case ENQUEUE    : Enqueue(head, tail);
				          break;
				          //Dequeue - deletes a person from list
		case DEQUEUE    : if(IsEmpty(head))
						  {
							  cout << "Can't DEQUEUE from an empty "
								   << "list!\n\n";
						  }
						  else
						  {
							  cout << "DEQUEUEING\n";
							  Dequeue(head, tail);
						  }
				          break;
				          //IsEmpty - checks if list is empty
		case ISEMPTY    : if(IsEmpty(head))
						  {
							  cout << "Yes, the QUEUE is empty.\n\n";
						  }
						  else
						  {
							  cout << "The QUEUE is NOT empty.\n\n";
						  }
					      break;
					      //Front - outputs the info of the person
					      //        in front of the queue
		case FRONT      : if(IsEmpty(head))
		  	  	  	  	  {
							  cout << "Nobody in FRONT,"
								   << " the queue is empty!!\n\n";
						  }
						  else
						  {
							  Front(head, cout);
						  }
				          break;
				          //Size - returns the size(number of items)
				          //       of the list
		case SIZE       : listSize = Size(head);
						  if(listSize >= 2)
						  {
							  cout << "There are " << listSize
								   << " people in the queue.\n\n";
						  }
						  else if(listSize == 1)
						  {
							  cout << "There is one person on the"
								   << " queue.\n\n";
						  }
						  else
						  {
							  cout << "Nobody is in the queue!\n\n";
						  }
				          break;
				          //ClearQueue - deletes all items in list
		case CLEARQUEUE : if(IsEmpty(head))
						  {
							  cout << "The QUEUE is ALREADY clear!\n\n";
						  }
						  else
						  {
							  cout << "CLEARING...\n";
							  ClearQueue(head, tail);
							  cout << "\nThe queue has been CLEARED!\n\n";
						  }
			              break;
			              // OutQueue - outputs info of all items in
			              //            the queue
		case OUTQUEUE   : if(IsEmpty(head))
						  {
							  cout << "The QUEUE is EMPTY!\n\n";
						  }
						  else
						  {
							  OutQueue(head, cout);
						  }
					      break;
		default		    : cout << "Error - missing command\n\n";
	}
}

