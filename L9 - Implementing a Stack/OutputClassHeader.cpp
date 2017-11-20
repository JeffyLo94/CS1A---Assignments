/**************************************************************************
 * AUTHOR      : Duncan Bauer && Jeffrey Lo
 * STUDENT ID  : 290722 && 374780
 * LAB #9      : Implementing a Stack
 * CLASS       : CS1B
 * SECTION     : MTWTh : 8am - 1:05pm
 * DUE DATE    : 6/23/14
 *************************************************************************/

#include "Header.h"

/**************************************************************************
 *
 * FUNCTION OutputClassHeader
 *_________________________________________________________________________
 * This function outputs the class header.
 *  - Returns nothing -> Outputs the class header.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 		CLASSSECTION : Class section must be pre-defined
 * 		ASNAME       : Assignment name must be pre-defined
 * 		ASTYPE		 : Assignment type must be pre-defined
 * 		ASNUM		 : Assignment number must be pre-defined
 *
 * POST-CONDITIONS
 * 		Outputs the class header
 *
 *************************************************************************/
void OutputClassHeader(const string CLASSSECTION, // OUT - class times
					   const int    ASNUM,        // OUT - assn number
					   const string ASNAME, 	   // OUT - assn name
					   const char   ASTYPE, 	   // OUT - assn type
					   ostream&     os) 		   // OUT - output steam
{
	os << left;
	os << "******************************************************";
	os << "\n*  PROGRAMMED BY : " << "Duncan Bauer && Jeffrey Lo";
	os << "\n*  STUDENT ID    : " << "290722 && 374780";
	os << "\n*  " << setw(14) << "CLASS"  << ": " << "CS1B";
	os << "\n*  " << setw(14) << "SECTION"  << ": "  << CLASSSECTION;
	os << "\n*" ;
		if (toupper(ASTYPE == 'L'))
		{
			os << "  LAB #" << setw(9) << ASNUM << ": "
	           << ASNAME;
		}
		else if (toupper(ASTYPE == 'A'))
		{
			os << "  ASSIGN #" << setw(6) << ASNUM << ": "
		       << ASNAME;
		}
		else
		{
			os << "Invalid assignment type.\n";
		}
	os << "\n******************************************************\n\n";
	os << right;
}
