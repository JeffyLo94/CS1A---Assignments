/*******************************************************************************
*	AUTHOR	 : Anthony Ramirez & Jeffrey Lo
*	STU ID#	 : 369397	  & 374780
*	LAB # 13 : Inheritance, Overloading, Overriding
*	CLASS    : CS1B
*	SECTION  : 8-1PM Monday-Thursday
*	DUE DATE : 6/26/14
******************************************************************************/

#ifndef SHEEP_H_
#define SHEEP_H_

#include <string>
using namespace std;

// E N U M S
enum WoolType
{
	LONG,
	MEDIUM,
	FINE,
	CARPET
};

// O B J E C T S
/*******************************************************************************
*	Object: Sheep(subclass of animal)
* ----------------------------------------------------------------------------
*	This object is a subclass of the Animal class and inherits the classes
*	public methods. This sheep object also has data on the wool type and color.
* ----------------------------------------------------------------------------
******************************************************************************/
class Sheep : public Animal
{
	public:
	Sheep();	      //Default constructor
	Sheep(WoolType type,	  //Alternative Constructor (overloaded)
		  string   woolColor,
		  string   initName,
		  int      initAge,
		  float    initValue);
	~Sheep();	               //Destructor

	// M U T A T O R S
	void SetAll(WoolType type,	  //SetAll - Initializes sheep and
			    string   woolColor,//        animal data (overloaded)
			    string   initName,
			    int      initAge,
			    float    initValue);
	void SetWoolType(WoolType type); //Sets wool type
	void SetWoolColor(string color); //Sets wool color


	// A C C E S S O R S
	string   GetWoolType() const;      //Obtains the wool type info
	string   GetWoolColor() const;     //Obtains the wool color info
	string   Display() const;	       //Displays name, age, value,
								       //wool type, and wool color
	string DisplayTableHeader() const; //Displays the table header

	private:

	WoolType woolType;
	string   woolColor;
};

#endif /* SHEEP_H_ */
