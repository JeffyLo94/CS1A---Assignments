/*******************************************************************************
 *	AUTHOR		: Anthony Ramirez & Jeffrey Lo
 *	STU ID#		: 369397		  & 374780
 *	LAB # 13  	: Inheritance, Overloading, Overriding
 *	CLASS   	: CS1B
 *	SECTION 	: 8-1PM Monday-Thursday
 *	DUE DATE 	: 6/26/14
 ******************************************************************************/

#include "Header.h"

 /******************************************************************************
 * METHOD SetAll
 * -----------------------------------------------------------------------------
 * Sets all of the objects attributes to a value passed as a parameter
 * RETURNS: none
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * Animal Class must be previously defined
 *
 * POST-CONDITIONS
 *
 * Initializes Animal object to pre-defined value
 *****************************************************************************/
  void Animal::SetAll(string initName, //IN - sets new name
		  	  	  	  int    initAge,  //IN - sets new age
		  	  	  	  float  initValue)//IN - sets new value
  {
	  //Sets name
	  SetName(initName);
	  //Sets age
	  SetAge(initAge);
	  //Sets value
	  SetValue(initValue);
  }

  /******************************************************************************
 * METHOD SetName
 * -----------------------------------------------------------------------------
 * Sets name to value passed as parameter
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *     		Animal Class must be previously defined
 *
 * POST-CONDITIONS
 *
 * 		Initializes Animal object name to pre-defined value
 ******************************************************************************/
 void Animal::SetName(string newName) //IN - new name
 {
   name = newName;
 }

 /******************************************************************************
 * METHOD SetAge
 * -----------------------------------------------------------------------------
 * Sets age to value passed as parameter
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *     		Animal Class must be previously defined
 *
 * POST-CONDITIONS
 *
 * 		Initializes Animal object age to pre-defined value
 ******************************************************************************/
 void Animal::SetAge(int newAge) //IN - new age
 {
 	   age = newAge;
 }

  /******************************************************************************
 * METHOD SetValue
 * -----------------------------------------------------------------------------
 * Sets value to value passed as parameter
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *     		Animal Class must be previously defined
 *
 * POST-CONDITIONS
 *
 * 		Initializes Animal object value to pre-defined value
 ******************************************************************************/
 void Animal::SetValue(float newValue) //IN - new value
 {
	   value = newValue;
 }
