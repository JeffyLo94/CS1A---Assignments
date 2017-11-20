/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#include "Header.h"
/**************************************************************************
* FUNCTION SearchList
*--------------------------------------------------------------------------
*	This function executes and outputs the search and search results for
*	the user defined search and outputs the number of instances the item
*	was found
* RETURNS: instances item was found
*--------------------------------------------------------------------------
* PRE-CONDITIONS
* 		userCommand : The user command must be predefined
* 		intKey	    : The integer being searched must be predefined
* 		strKey	    : The string being searched must be predefined
* 		head	    : The list head must be predefined
* 		os		    : The output stream must be predefined
*
* POST-CONDITIONS
* 		counter		: The instances the item was found is Returned
**************************************************************************/
int SearchList(int userCommand,  //IN - User command
			   int intKey,		 //IN - search item
			   string strKey,    //IN - search item
			   MovieInfo *head,  //IN - head of list
			   ostream &os)      //IN - Output stream
{
	// Variables
	MovieInfo *movPtr;
	int        counter;
	bool	   tableHeadOut;

	// INITIALIZATIONS
	movPtr  	 = head;
	counter 	 = 0;
	tableHeadOut = false;

	// Processing - determines which search to preform and executes search
	while(movPtr != NULL)
	{
		switch(userCommand)
		{
			case TITLESEARCH  : // Processing - Outputs table header if not
								//   			already output
								if(!tableHeadOut && movPtr->title== strKey)
								{
									// Output - Table Title
									OutSearchTableTitle(userCommand,
													    intKey,
													    strKey,
													    os) ;
									tableHeadOut = true;
								}
								// Processing - Performs search
								if(movPtr->title == strKey)
								{
									counter++;
									OutputAllMovieInfo(movPtr, counter, os);
								}
								break;
			case GENRESEARCH  : // Processing - Outputs table header if not
								//   			already output
								if(!tableHeadOut &&
								   (movPtr->mainGenre == strKey ||
								    movPtr->altGenre  == strKey))
								{
									// Output - Table Title
									OutSearchTableTitle(userCommand,
														intKey,
														strKey,
														os) ;
									// Output - Table Header
									OutputTableHeader(os);
									tableHeadOut = true;
								}
								// Processing - Performs search
								if(movPtr->mainGenre == strKey ||
								   movPtr->altGenre  == strKey)
								{
									counter++;
									OutputMovieInfo(movPtr, counter, os);
								}
								break;
			case ACTORSEARCH  : // Processing - Outputs table header if not
								//   			already output
								if(!tableHeadOut &&
								  (movPtr->leadAct == strKey ||
								   movPtr->suppAct == strKey))
								{
									// Output - Table Title
									OutSearchTableTitle(userCommand,
														intKey,
														strKey,
														os) ;
									// Output - Table Header
									OutputTableHeader(os);
									tableHeadOut = true;
								}
								// Processing - Performs search
								if(movPtr->leadAct == strKey ||
								   movPtr->suppAct == strKey)
								{
									counter++;
									OutputMovieInfo(movPtr, counter, os);
								}
								break;
			case YEARSEARCH   : // Processing - Outputs table header if not
								//   			already output
								if(!tableHeadOut && movPtr->year == intKey)
								{
									// Output - Table Title
									OutSearchTableTitle(userCommand,
														intKey,
														strKey,
														os) ;
									// Output - Table Header
									OutputTableHeader(os);
									tableHeadOut = true;
								}
								// Processing - Performs search
								if(movPtr->year == intKey)
								{
									counter++;
									OutputMovieInfo(movPtr, counter, os);
								}
								break;
			case RATINGSEARCH : // Processing - Outputs table header if not
								//   			already output
								if(!tableHeadOut &&
								   movPtr->rating == intKey)
								{
									// Output - Table Title
									OutSearchTableTitle(userCommand,
														intKey,
														strKey,
														os) ;
									// Output - Table Header
									OutputTableHeader(os);
									tableHeadOut = true;
								}
								// Processing - Performs search
								if(movPtr->rating == intKey)
								{
									counter++;
									OutputMovieInfo(movPtr, counter, os);
								}
								break;
			default			  : cout << "\n**ERROR- search type not found**\n";
		}
		movPtr = movPtr -> next;
	}
	delete movPtr;
	movPtr = NULL;

	return counter;
}
