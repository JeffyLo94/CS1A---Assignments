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
* Method Sheep
* -----------------------------------------------------------------------------
* Default constructor of the object
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* Sheep class must be previously defined
*
* POST-CONDITIONS
* Creates sheep object and initializes value
*******************************************************************************/
Sheep::Sheep() : Animal()
{
	woolType  = LONG;
	woolColor.clear();
}

/*******************************************************************************
 * Method Sheep (overloaded)
 * -----------------------------------------------------------------------------
 * Overloaded Constructor of the Sheep class
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * Sheep class must be previously defined
 *
 * POST-CONDITIONS
 * Creates sheep object and initializes values to pre-defined values
 *******************************************************************************/
 Sheep::Sheep(WoolType type,	 //IN - Wool Type
			  string   woolColor,	 //IN - Wool Color
			  string   initName,	 //IN - Animal Name
			  int      initAge,	 //IN - Animal age
			  float    initValue): Animal()//IN - Animal price
 {
	//SetAll - Calls on Animal (parent) class method of setting animal data
	Animal::SetAll(initName, initAge, initValue);

	//SetWoolType - Sheep Class method that sets the wool type
	SetWoolType(type);

	//SetWoolColor - Sheep class method that sets wool color
	SetWoolColor(woolColor);
 }
/*******************************************************************************
 * Method Sheep (overloaded)
 * -----------------------------------------------------------------------------
 * Destructor of the Sheep class
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * Sheep class must be previously defined
 *
 * POST-CONDITIONS
 * Destructs the sheep object
 *******************************************************************************/
Sheep::~Sheep()
{
}
