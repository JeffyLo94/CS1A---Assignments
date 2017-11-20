/*******************************************************************************
*	AUTHOR	 : Anthony Ramirez & Jeffrey Lo
*	STU ID#	 : 369397	  & 374780
*	LAB # 13 : Inheritance, Overloading, Overriding
*	CLASS    :CS1B
*	SECTION  : 8-1PM Monday-Thursday
*	DUE DATE : 6/26/14
******************************************************************************/

#include "Header.h"

/*******************************************************************************
* Method Pig
* -----------------------------------------------------------------------------
* Default constructor for the class Pig. This method constructs an object of
* type Pig with the default tail
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* Sheep class interface must be previously defined
*
* POST-CONDITIONS
* Creates an object of type sheep
******************************************************************************/
Pig::Pig() : Animal()  //Constructs the animal class as well
{
	tailType = STRAIGHT;
}

/******************************************************************************
 * Method Pig
 * ----------------------------------------------------------------------------
 * Constructor for the class Pig. This method constructs an object of type Pig
 * with the specified parameters
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * Sheep class interface must be previously defined
 *
 * POST-CONDITIONS
 * Creates an object of type sheep
 *****************************************************************************/
 Pig::Pig(TailType tail,	//IN - tail type
		  string  initName, //IN - new name
		  int     initAge,  //IN - new age
		  float   initValue)//IN - new value
 	 	  : Animal()	    //Constructs the animal class as well
 {
	 //SetAll - Calls on Animal (parent) class method of setting animal data
	 Animal::SetAll(initName, initAge, initValue);

	//Processing - sets pig's tail info
	tailType = tail;
 }

 /*****************************************************************************
 * Method ~Pig
 * ---------------------------------------------------------------------------
 * Deconstructor for the class Pig. This method deconstructs an object of
 * type Pig.
 * ---------------------------------------------------------------------------
 * PRE-CONDITIONS
 * Sheep class interface must be previously defined
 *
 * POST-CONDITIONS
 * Creates an object of type sheep
 *****************************************************************************/
 Pig::~Pig()
 {
 }
