/************************************************************************
 * AUTHOR		: Jeffrey Lo & Mathias Kuhlmann
 * STUDENT ID	: 374781 & 275856
 * LAB #10B		: Input & Output - Geometry
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
 * This program will calculate, store, and output the area and perimeter
 * of a triangle, circle, and rectangle with user inputed dimensions.
 *________________________________________________________________________
 * INPUT:
 *    triBase:       input from user for triangle's base
 *    triHeight:     input from user for triangle's height
 *    rectHeight:    input from user for rectangle's height
 *    rectBase:      input from user for rectangle's base
 *    circleRadius:  input from user for circle's radius
 *
 * OUTPUT:
 * 	  triArea:       output triangle's area
 * 	  triPerim:      output triangle's perimeter
 * 	  rectArea:      output rectangle's area
 * 	  rectPerim:     output rectangle's perimeter
 * 	  circleArea:    output circle's area
 * 	  circleCircumf: output circle's circumference
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING AND CALCULATION - CLASS HEADING CONSTANTS
	 * WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMER : Programmer's Name
	 * CLASS     : Student's Course
	 * SECTION   : Class Days and Times
	 * LAB_NUM   : Lab Number (specific to this lab)
	 * LAB_NAME  : Title of the Lab
	 * PI        : Ratio of circle's circumference to diameter (3.1415)
	 ********************************************************************/
	const char  PROGRAMMER[30] = "Jeffrey Lo & Mathias Kuhlmann";
	const char  CLASS[5]	   = "CS1A";
	const char  SECTION[25]    = "TTh: 10:00a - 12:00p";
	const char  LAB_NUM[4]     = "10b";
	const char  LAB_NAME[30]   = "Input & Output - Geometry";
	const float PI             = 3.141592;

	// Variable List
	float triBase;       // IN & CALC  --> input from user for triangle's
						 //                base
	float triHeight;     // IN & CALC  --> input from user for triangle's
					     // 			      height
	float rectHeight;    // IN & CALC  --> input from user for rectangle's
	                     //                height
	float rectWidth;     // IN & CALC  --> input from user for rectangle's
	                     //                width
	float circleRadius;  // IN & CALC  --> input from user for circle's
	                     //                radius
	float triArea;       // CALC & OUT --> area of triangle
	float triPerim;      // CALC & OUT --> perimeter of triangle
	float rectArea;      // CALC & OUT --> area of rectangle
	float rectPerim;     // CALC & OUT --> perimeter of rectangle
	float circleArea;    // CALC & OUT --> area of circle
	float circleCircumf; // CALC & OUT --> circumference of circle

	// OUTPUT - Class Heading
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

	// INPUT - reads in two inputs from user (triBase & triHeight)
	// Prompts the user to input for triangle height then reads the input
	cout << setw(34) << left << "Enter the height of the triangle:";
	cin  >> triHeight;

	// Prompts the user to input for triangle base then reads the input
	cout << setw(34) << left << "Enter the base of the triangle:";
	cin  >> triBase;

	// PROCESSING - Calculates the triangle area and perimeter
	triArea  = triBase * triHeight / 2;
	triPerim = triBase * 3;

	// OUTPUT - Outputs the triangle area and perimeter
	cout << endl  <<"TRIANGLE OBJECT" << endl;
	cout << setw(9)  << right << "Area";
	cout << setw(18) << right << "Circumference"  << endl;
	cout << setw(9)  << right << triArea;
	cout << setw(18) << right << triPerim;
	cout << endl     << endl  << endl;

	// INPUT - reads in two inputs from user (rectWidth & rectHeight)
	// Prompts the user to input for rectangle width then reads the input
	cout << setw(35) << left  << "Enter the width of the rectangle:";
	cin  >> rectWidth;

	// Prompts the user to input for rectangle height then reads the input
	cout << setw(35) << left  << "Enter the height of the rectangle:";
	cin  >> rectHeight;

	// PROCESSING - Calculates the rectangle area and perimeter
	rectArea  = rectWidth * rectHeight;
	rectPerim = (rectWidth + rectHeight) * 2;

	// OUTPUT - Outputs the rectangle area and perimeter
	cout << endl  <<"RECTANGLE OBJECT" << endl;
	cout << setw(9)  << right << "Area";
	cout << setw(18) << right << "Circumference"   << endl;
	cout << setw(9)  << right << rectArea;
	cout << setw(18) << right << rectPerim;
	cout << endl     << endl  << endl;

	// INPUT - reads in input from user (circleRadius)
	// Prompts the user to input for circle radius then reads the input
	cout << setw(32) << left  << "Enter the radius of the circle:";
	cin  >> circleRadius;

	// PROCESSING - Calculates the rectangle area and perimeter
	circleArea    = PI * circleRadius * circleRadius;
	circleCircumf = PI * circleRadius * 2;

	// OUTPUT - Outputs the rectangle area and perimeter
	cout << endl  << "CIRCLE OBJECT" << endl;
	cout << setw(9)  << right << "Area";
	cout << setw(18) << right << "Circumference" << endl;
	cout << setw(9)  << right << circleArea;
	cout << setw(18) << right << circleCircumf;
	cout << endl     << endl  << endl            <<endl;

	return 0;
}
