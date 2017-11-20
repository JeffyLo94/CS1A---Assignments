/***********************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Title		: Personal Exercise - Structs
 * CLASS		: CS1B
 * SECTION		: MTh: 10am
 * DATE 		: 3/6/14
 ************************************************************************/

#ifndef STRUCTEXERCISEHEADER_H_
#define STRUCTEXERCISEHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

struct PersonRec
{
	string name;
	float  balance;
	int    idNum;
};

enum MenuOptions
{
	Exit,
	AddRecords,
	RemoveRecords,
	SearchRecords,
	ClearConsole
};

// P R O T O T Y P E S
int GetUserInt(const int UP_BOUND,
			   const int LOW_BOUND);
string GetName(const int CHOICE_INT);
void   OutSearchResult(const int INDEX_NUM);
void AddRecord(PersonRec structAr[],
		       const int ARRAY_SIZE);
void RemoveRecord(PersonRec structAr[],
		          const int ARRAY_SIZE,
		          string targetItem);
int  SearchRecord(PersonRec structAr[],
		          const int ARRAY_SIZE,
		          string searchItem);

#endif /* STRUCTEXERCISEHEADER_H_ */
