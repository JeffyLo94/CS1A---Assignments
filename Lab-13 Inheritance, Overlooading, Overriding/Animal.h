/*******************************************************************************
 *	AUTHOR		: Anthony Ramirez & Jeffrey Lo
 *	STU ID#		: 369397		  & 374780
 *	LAB # 13  	: Inheritance, Overloading, Overriding
 *	CLASS   	: CS1B
 *	SECTION 	: 8-1PM Monday-Thursday
 *	DUE DATE 	: 6/26/14
 ******************************************************************************/

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
using namespace std;

class Animal
{
	public:
		Animal();				      //Default constructor
		Animal(string initName,       //Overloaded constructor used to initialize
								      //attributes
			   int    initAge,
			   float  initValue);
		~Animal();	                  //Destructor

		// M U T A T O R S
		void SetAll(string initName,  //Sets all attributes
					int    initAge,
					float  initValue);
		void SetName(string newName); //Sets the new name
		void SetAge(int newAge);	  //Sets the new age
		void SetValue(float newValue);//Sets the new value

		// A C C E S S O R S
		string GetName() const;		  		 //Gets name
		int	   GetAge() const;		  		 //Gets the age
		float  GetValue() const;	  		 //Gets the value
		string Display() const;	 			 //Displays name, age, and value
		string DisplayTableHeader() const;   //Displays the table header

	private:
		string name;	//Stores name
		int	   age;		//Stores age
		float  value;	//Stores value
};



#endif /* ANIMAL_H_ */
