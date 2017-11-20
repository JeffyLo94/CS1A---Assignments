/**************************************************************************
 * AUTHOR      : Jeffrey Lo & Breanna Nelson
 * STUDENT ID  : 374780     & 272229
 * LAB #12     : Intro to OOP
 * CLASS       : CS1B
 * SECTION     : M-Th : 8am - 1:05pm
 * DUE DATE    : 7/2/14
 *************************************************************************/

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
using namespace std;

class Animals
{
	public:
		Animals();								//Constructor
		~Animals();								//Destructor

		void   SetInitialInfo(string type,      //Sets objects information
							  string animalName,
							  int    animalAge,
							  float  price);
		void   ChangeAge(int animalAge);		//Changes animal age
		void   ChangeValue(float price);		//Changes animal price
		string GetAnimalType() const;			//Returns animal type
		string GetName() const;					//Returns animal name
		int    GetAge() const;					//Returns animal age
		float  GetValue() const;				//Returns animal price
		void   Display(ostream &os) const;		//Displays animal info

	private:
		string   animalType;	//The animal type
		string   name;			//The animal's name
		int      age;			//The animal's age
		float    value;			//The animal's price
};

#endif /* ANIMAL_H_ */
