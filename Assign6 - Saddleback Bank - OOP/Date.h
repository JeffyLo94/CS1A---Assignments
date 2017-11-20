/**************************************************************************
 * AUTHOR      : Jeffrey Lo
 * STUDENT ID  : 374780
 * LAB #10     : Searching a Linked List
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 6/26/14
 *************************************************************************/

#ifndef DATE_H_
#define DATE_H_

// Preprocessor Directives
#include <string>
using namespace std;

// C L A S S E S
/**************************************************************************
 * Date
 *------------------------------------------------------------------------
 *	This class contains attributes of the date(month, year, and day) and
 *	methods for getting, setting and display the month, year, day, and
 *	full date
 *------------------------------------------------------------------------
 *	Attributes:
 *		month	- the month of the year
 *		day		- the day of the month
 *		year	- the year
 *************************************************************************/
class Date
{
	public:
	/**********************************************************************
	* Method Date
	*----------------------------------------------------------------------
	*	This method is the default constructor.
	* RETURNS: nothing
	* -> Initializes data in Date object
	**********************************************************************/
	Date();

	/**********************************************************************
	* Method Date
	*----------------------------------------------------------------------
	*	This method is another constructor that will initialize the Date
	*	object attributes to the parameter values passed in
	* RETURNS: nothing
	* -> sets variables in method to a value
	**********************************************************************/
	Date(int newMonth, //IN - month value to update to
		 int newDay,   //IN - day value to update to
		 int newYear); //IN - year value to update to

	/**********************************************************************
	* Method Date
	*----------------------------------------------------------------------
	*	This method is the destructor.
	* RETURNS: nothing
	**********************************************************************/
	~Date();

	// M U T A T O R S
	/**********************************************************************
	* Method SetAll
	*----------------------------------------------------------------------
	*	This method sets all the month, day, and year data in the date
	*	object
	* RETURNS: nothing
	* -> sets variables in method to a value
	**********************************************************************/
	void SetAll(int newMonth, //IN - month value to update to
				int newDay,   //IN - day value to update to
				int newYear); //IN - year value to update to

	// A C C E S S O R S
	/**********************************************************************
	* Method GetMonth
	*----------------------------------------------------------------------
	*	This method gets the month integer from the object
	* RETURNS: the month integer
	**********************************************************************/
	int    GetMonth() const;

	/**********************************************************************
	* Method GetDay
	*---------------------------------------------------------------------
	*	This method gets the Day integer from the object
	* RETURNS: the day integer
	**********************************************************************/
	int    GetDay()   const;

	/**********************************************************************
	* Method GetYear
	*----------------------------------------------------------------------
	*	This method gets the Year integer from the object
	* RETURNS: the year integer
	**********************************************************************/
	int    GetYear()  const;

	/**********************************************************************
	* Method Print
	*---------------------------------------------------------------------_
	*	This method outputs the date info
	* RETURNS: nothing
	* -> date information is output to console
	**********************************************************************/
	void   Print()    const;

	/**********************************************************************
	* Method ToString
	*----------------------------------------------------------------------
	*	This method converts the date attributes into a string
	* RETURNS: string with formated date info
	**********************************************************************/
	string ToString() const;

	private:
	int month;
	int day;
	int year;
};



#endif /* DATE_H_ */
