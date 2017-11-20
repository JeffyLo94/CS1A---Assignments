/*******************************************************************************
 *	AUTHOR		: Anthony Ramirez & Jeffrey Lo
 *	STU ID#		: 369397		  & 374780
 *	LAB # 13  	: Inheritance, Overloading, Overriding
 *	CLASS   	: CS1B
 *	SECTION 	: 8-1PM Monday-Thursday
 *	DUE DATE 	: 6/26/14
 ******************************************************************************/

#include "Header.h"

/*******************************************************************************
 * METHOD Animal
 * -----------------------------------------------------------------------------
 * Object constructor
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * Animal Class must be previously defined
 *
 * POST-CONDITIONS
 *
 * Initializes members of class Animal to 0
 *
 *******************************************************************************/
 Animal::Animal()
 {
	 //Initializes all members to a default value
	 name.clear();
	 age   = 0;
	 value = 0;
 }

 /******************************************************************************
  * METHOD Animal (overloaded)
  * -----------------------------------------------------------------------------
  * Overloaded object constructor
  * RETURNS: none
  * -----------------------------------------------------------------------------
  * PRE-CONDITIONS
  *
  * Animal Class must be previously defined
  *
  * POST-CONDITIONS
  *
  * Initializes Animal object to pre-defined values
  *
  ******************************************************************************/
 Animal :: Animal(string initName, //IN - names new value
		 	 	  int    initAge,  //IN - age's new value
		 	 	  float  initValue)//IN - value's new value
 {
	//Sets all of the values
	SetAll(initName, initAge, initValue);
 }

 /*******************************************************************************
  * METHOD ~Animal
  * -----------------------------------------------------------------------------
  * Object virtual destructor
  * RETURNS: none
  * -----------------------------------------------------------------------------
  * PRE-CONDITIONS
  *
  * 		Animal Class must be previously defined
  *
  * POST-CONDITIONS
  *
  * 		Destructs the object
  *
  *******************************************************************************/
  Animal::~Animal() //Destructor
  {
  }

