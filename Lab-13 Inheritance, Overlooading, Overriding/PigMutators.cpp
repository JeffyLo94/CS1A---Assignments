/*******************************************************************************
*	AUTHOR	 : Anthony Ramirez & Jeffrey Lo
*	STU ID#	 : 369397	  & 374780
*	LAB # 13 : Inheritance, Overloading, Overriding
*	CLASS    : CS1B
*	SECTION  : 8-1PM Monday-Thursday
*	DUE DATE : 6/26/14
******************************************************************************/

#include "Header.h"

/*******************************************************************************
* METHOD SetAll
* -----------------------------------------------------------------------------
* This method sets all of the attributes of the Pig class
* ----------------------------------------------------------------------------
* PRE-CONDITIONS
* Pig class must be previously defined
*
* POST-CONDITIONS
* Sets all of the attributes of the pig class *
*******************************************************************************/
void Pig::SetAll(TailType tail,	  //Overloaded constructor
        		 string   initName,
        		 int      initAge,
        		 float    initValue)
{
	//SetAll - Calls on Animal (parent) class method of setting animal data
	Animal::SetAll(initName, initAge, initValue);

	//SetTailType - Pig class method that sets the tail type
	SetTailType(tail);
}

/*******************************************************************************
* METHOD SetTailType
* -----------------------------------------------------------------------------
* This method sets the tail type
* ----------------------------------------------------------------------------
* PRE-CONDITIONS
* Pig class must be previously defined
*
* POST-CONDITIONS
* Sets tail type
*******************************************************************************/
void Pig::SetTailType(TailType tail)
{
	tailType = tail;
}
