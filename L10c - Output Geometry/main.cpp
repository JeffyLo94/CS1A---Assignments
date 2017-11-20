/************************************************************************
 * AUTHOR		: Jeffrey Lo & Parker Grade
 * STUDENT ID	: 374781 & 372741
 * LAB #10C		: Input & Output - Geometry
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 3/13/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Output - Geometry
 *________________________________________________________________________
 * This program will calculate, store, and output the area of a triangle,
 * circle, and rectangle with user inputed dimensions in a table.
 *________________________________________________________________________
 * INPUT:
 *    triBase:       input from user for triangle's base
 *    triHeight:     input from user for triangle's height
 *    rectHeight:    input from user for rectangle's height
 *    rectWidth:     input from user for rectangle's width
 *    circleRadius:  input from user for circle's radius
 *
 * OUTPUT:
 * 	  triArea:       output triangle's area
 * 	  rectArea:      output rectangle's area
 * 	  circleArea:    output circle's area
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMER : Programmer's Name
	 * CLASS     : Student's Course
	 * SECTION   : Class Days and Times
	 * LAB_NUM   : Lab Number (specific to this lab)
	 * LAB_NAME  : Title of the Lab
	 * -------------------------------------------------------------------
	 * USED FOR CALCULATION
	 * -------------------------------------------------------------------
	 * PI        : Ratio of circle's circumference to diameter (3.14159)
	 ********************************************************************/
	const char  PROGRAMMER[30] = "Jeffrey Lo & Parker Grade";
	const char  CLASS[5]	   = "CS1A";
	const char  SECTION[25]    = "TTh: 10:00a - 12:00p";
	const char  LAB_NUM[4]     = "10c";
	const char  LAB_NAME[30]   = "Input & Output - Geometry";
	const float PI             = 3.14159;

	// Variable List
	float triBase;       // IN & CALC  --> input from user for triangle's
						 //                base
	float triHeight;     // IN & CALC  --> input from user for triangle's
					     // 			   height
	float rectHeight;    // IN & CALC  --> input from user for rectangle's
	                     //                height
	float rectWidth;     // IN & CALC  --> input from user for rectangle's
	                     //                width
	float circleRadius;  // IN & CALC  --> input from user for circle's
	                     //                radius
	float triArea;       // CALC & OUT --> area of triangle
	float rectArea;      // CALC & OUT --> area of rectangle
	float circleArea;    // CALC & OUT --> area of circle


	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;


	// INPUT - reads in 5 inputs from user (triBase & triHeight &
	//         rectWidth & rectHeight & circleRadius)
	// Prompts the user to input for triangle height then reads the input
	cout << setw(36) << left << "Enter the height of the triangle:";
	cin  >> triHeight;
	// Prompts the user to input for triangle base then reads the input
	cout << setw(36) << left << "Enter the base of the triangle:";
	cin  >> triBase;
	// Prompts the user to input for rectangle width then reads the input
	cout << endl;
	cout << setw(36) << left  << "Enter the width of the rectangle:";
	cin  >> rectWidth;
	// Prompts the user to input for rectangle height then reads the input
	cout << setw(36) << left  << "Enter the height of the rectangle:";
	cin  >> rectHeight;
	// Prompts the user to input for circle radius then reads the input
	cout << endl;
	cout << setw(36) << left  << "Enter the radius of the circle:";
	cin  >> circleRadius;
	cout << endl << endl << right;


	// PROCESSING  - Calculates the triangle, rectangle, & circle areas
	triArea    = triBase * triHeight / 2;
	rectArea   = rectWidth * rectHeight;
	circleArea = PI * circleRadius * circleRadius;


	// OUTPUT - Outputs the triangle, rectangle, & circle areas in a table
	//          showing different significant figures
	// Heading for output table
	cout << setw(18) << "Triangle Area";
	cout << setw(19) << "Rectangle Area";
	cout << setw(16) << "Circle Area" << endl << endl;
	// Row of areas w/ default precision
	cout << setw(18) << triArea;
	cout << setw(19) << rectArea;
	cout << setw(16) << circleArea << endl;
	// Row of areas w/ setprecision(3)
	cout << setw(18) << setprecision(3) << triArea;
	cout << setw(19) << setprecision(3) << rectArea;
	cout << setw(16) << setprecision(3) << circleArea << endl;
	// Row of areas w/ showpoint and setprecision(3)
	cout << setw(18) << showpoint << setprecision(3) << triArea;
	cout << setw(19) << showpoint << setprecision(3) << rectArea;
	cout << setw(16) << showpoint << setprecision(3) << circleArea;
	cout << endl;
	// Row of areas w/ setprecision(3) and fixed
	cout << setw(18) << fixed << setprecision(3) << triArea;
	cout << setw(19) << fixed << setprecision(3) << rectArea;
	cout << setw(16) << fixed << setprecision(3) << circleArea;
	cout << endl;
	// Row of areas w/ setprecision(5) and fixed
	cout << setw(18) << fixed << setprecision(5) << triArea;
	cout << setw(19) << fixed << setprecision(5) << rectArea;
	cout << setw(16) << fixed << setprecision(5) << circleArea;
	cout << endl;

	return 0;
}
