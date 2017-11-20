/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Breanna Nelson
 * STUDENT ID  : 374780     & 272229
 * LAB #12     : Intro to OOP
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/2/14
 *************************************************************************/
#include "Header.h"
/**************************************************************************
* METHOD Display
*--------------------------------------------------------------------------
*	This function Outputs the animal info in a line
* RETURNS: age
*--------------------------------------------------------------------------
**************************************************************************/
void Animals::Display(ostream &os) const // IN - Output stream
{
	os << left;
	os << setw(COL_ONE)   << animalType;
	os << setw(COL_TWO)   << name;
	os << setw(COL_THREE) << age;
	os << setw(COL_FOUR)  << value;
	os << right;
}
