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
* Method SetWoolType
* -----------------------------------------------------------------------------
* Sets the wool type
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* Sheep class must be previously defined
*
* POST-CONDITIONS
* Sets the wool type
*******************************************************************************/
void Sheep::SetWoolType(WoolType type) //IN - new wool type
{
	woolType = type;
}

/*******************************************************************************
* Method SetWoolColor
* -----------------------------------------------------------------------------
* Sets the wool color
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* Sheep class must be previously defined
*
* POST-CONDITIONS
* Sets the wool color
*******************************************************************************/
void Sheep::SetWoolColor(string color) //IN - new color
{
	woolColor = color;
}

/*******************************************************************************
* Method SetAll
* -----------------------------------------------------------------------------
* Sets the wool color
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* Sheep class must be previously defined
*
* POST-CONDITIONS
* Sets the wool color
*******************************************************************************/
void Sheep::SetAll(WoolType type,      //IN - wool type
				   string   woolColor, //IN - wool color
				   string   initName,  //IN - new name
				   int      initAge,   //IN - new age
				   float    initValue) //IN - new value
{
	Animal::SetAll(initName, initAge, initValue);
	SetWoolType(type);
	SetWoolColor(woolColor);
}
