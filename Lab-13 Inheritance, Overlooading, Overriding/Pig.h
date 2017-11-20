/*******************************************************************************
*	AUTHOR	 : Anthony Ramirez & Jeffrey Lo
*	STU ID#	 : 369397	  & 374780
*	LAB # 13 : Inheritance, Overloading, Overriding
*	CLASS    : CS1B
*	SECTION  : 8-1PM Monday-Thursday
*	DUE DATE : 6/26/14
******************************************************************************/

#ifndef PIG_H_
#define PIG_H_

#include <string>
using namespace std;

// E N U M S
enum TailType
{
	STRAIGHT,
	CORKSCREW,
	CURL_UP,
	CURL_RIGHT,
	CURL_LEFT
};

// O B J E C T S
/*******************************************************************************
*	Object: Pig (subclass of animal)
* ----------------------------------------------------------------------------
*	This object is a subclass of the Animal class and inherits the classes
*	public methods. This pig object also has tail data.
* ----------------------------------------------------------------------------
******************************************************************************/
class Pig : public Animal
{
	public:
	Pig();	      //Default constructor
	Pig(TailType tail,	  //Overloaded constructor - calls on SetAll
		string   initName,
		int      initAge,
		float    initValue);
	~Pig();	                  //Destructor

	// M U T A T O R S
	void SetTailType(TailType tail);  //SetTailType - Sets the tail type
	void SetAll(TailType tail,	  	  //SetAll - Initializes tail and all
				string   initName,	  //	 animal info (overloaded)
				int      initAge,
				float    initValue);

	// A C C E S S O R S
	string GetPigTail() const;	        //Gets the pig tail type
	string DisplayTableHeader() const;  //Displays the table header
	string Display() const;	            //Displays objects contents

	private:
	TailType tailType;
};

#endif /* PIG_H_ */
