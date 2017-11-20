/************************************************************************
 * AUTHOR		: Jeffrey Lo
 * STUDENT ID	: 374781
 * Assignment   : Functions
 * CLASS		: CS1A
 * SECTION		: TTh: 10am
 * DUE DATE		: 5/6/14
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*************************************************************************
 * Functions
 *------------------------------------------------------------------------
 * This program obtains the account number, date of sale, county code,
 * 	total sale amount before tax, and shipping weight from the user. The
 * 	program then calculates the sale discount, sales tax, and shipping
 * 	price and outputs the invoice for the user.
 *------------------------------------------------------------------------
 * INPUT:
 *	acctNum    - Account Number input by user
 *	month      - Month of Sale
 *	day        - Day of Sale
 *	year       - Year of Sale
 *	countyCode - County Code
 *	totSale    - Total Sale Price
 *	shipWeight - Shipping Weight
 *
 * OUTPUT:
 *	discountAmount - Discount on sale amount before tax
 *	salesTaxPrice  - Sales Tax after discount is taken
 *	shippingAmount - Shipping rate
 *	totalDue       - Total Price Due
 *	countyName     - County Name
 ************************************************************************/

/*************************************************************************
 * Prototypes
 * -----------------------------------------------------------------------
 * PrintHeader - This function receives the assignment name, assignment
 * 	type, and the assignment number and then outputs the appropriate
 * 	heading.
 *
 ************************************************************************/
void PrintHeader(string asName,           //IN - assignment name
				 char asType,             //IN - assignment type
				 int asNum);              //IN - assignment number
void GetSalesInfo(int& acctNum,           //IN - account number
				  int& month,             //IN - month of sale
				  int& day,               //IN - day of sale
				  int& year,              //IN - year of sale
				  char& countyCode,       //IN - county code
				  float& totSale,         //IN - total sale price
				  int& shipWeight);       //IN - shipping weight
float CalcDiscount(int month,             //IN - month of sale
				   float totSale);        //IN - total sale price
float CalcSalesTax(char countyCode,       //IN - county code
				   float discountAmount,  //IN - Amount discounted
				   float totSale);        //IN - total sale price
float CalcShipping(int shipWeight);       //IN - shipping weight
void OutputInvoice(int acctNum,           //IN - account number
				    int month,			  //IN - month of sale
				    int day,              //IN - day of sale
				    int year,             //IN - year of sale
				    char countyCode,      //IN - county code
				    float totSale,        //IN - total sale price
			        float discountAmount, //IN - amount discounted
				    float salesTaxPrice,  //IN - price of sales tax
				    float shippingAmount, //IN - price of shipping
				    float totalDue);      //IN & CALC - Total price due

int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * ASSN_NUM    : Assignment Number (specific to this assignment)
	 * ASSN_NAME   : Title of the Assignment
	 * ASSN_TYPE   : Type of Assignment
	 * -------------------------------------------------------------------
	 * USED FOR PROCESSING
	 * -------------------------------------------------------------------
	 * TEST_LIMIT  : Holds value for limit to for loop
	 ********************************************************************/
	const string  ASSN_NAME      = "Functions";
	const int     ASSN_NUM       = 9;
	const char    ASSN_TYPE      = 'A';

	const int     TEST_LIMIT     = 3;

	// Variable List
	int   accountNum;    //IN & OUT        - Account Number
	int   saleMonth;     //IN & OUT        - Month of sale
	int   saleDay;       //IN & OUT        - Day of sale
	int   saleYear;      //IN & OUT        - year of sale
	char  codeForCounty; //IN & OUT        - county code
	float saleAmt;       //IN & OUT        - sale amount
	int   weight;        //IN & OUT        - shipping weight
	float discountAmt;   //IN & CALC & OUT - amount discounted
	float salesTaxAmt;   //IN & CALC & OUT - Sales tax amount
	float shippingAmt;   //IN & CALC & OUT - Price of Shipping
	float totalPrice;    //IN & CALC & OUT - Total Price Due
	int   test;          //CALC            - LCV in For loop

	// PrintHeader - will output a header for this assignment
	PrintHeader(ASSN_NAME, ASSN_TYPE, ASSN_NUM);

	// PROCESSING - for loop that controls the number of tests
	for(test = 1; test <= TEST_LIMIT; test++)
	{
		// GetSalesInfo - Prompts and reads inputs into reference variables
		GetSalesInfo(accountNum, saleMonth, saleDay, saleYear,
				     codeForCounty, saleAmt, weight);

		// CalcDiscount - Calculates and returns the discount amount
		discountAmt = CalcDiscount(saleMonth, saleAmt);

		// CalcSalesTax - Calculates and returns the sales tax amount
		salesTaxAmt = CalcSalesTax(codeForCounty, discountAmt, saleAmt);

		// CalcShipping - Calculates and returns shipping price
		shippingAmt = CalcShipping(weight);

		// PROCESSING - Calculates total price due
		totalPrice = saleAmt + salesTaxAmt + shippingAmt - discountAmt;

		// OutputInvoice - Outputs an invoice of all information
		OutputInvoice(accountNum, saleMonth, saleDay, saleYear,
				      codeForCounty, saleAmt, discountAmt, salesTaxAmt,
				      shippingAmt, totalPrice);
	}

	return 0;
}

/*************************************************************************
 * FUNCTION PrintHeader
 *------------------------------------------------------------------------
 * This function receives the assignment name, assignment type, and the
 * 	assignment number and then outputs the appropriate heading
 * 	- Returns user inputed letter grade character
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		asName : Assignment Name must be predefined
 *		asType : Assignment Type must be predefined
 *		asNum  : Assignment Number must be predefined
 * POST-CONDITIONS
 *		This function will output the class heading
 ************************************************************************/
void PrintHeader(string asName, //IN - assignment name
				 char asType,   //IN - assignment type
				 int asNum)     //IN - assignment number
{
	// OUTPUT - Outputs header
	cout << left;
	cout << "*****************************************************";
	cout << "\n*  Programmed By : Jeffrey Lo";
	cout << "\n*  " << setw(14) << "Student ID" << ": 374780";
	cout << "\n*  " << setw(14) << "CLASS " << ": CS1A -- TTh - 10-12p";
	cout << "\n*  ";

	// PROCESSING - checks if assignment or lab
	if(toupper(asType) == 'L')
	{
		cout << "Lab #" << setw(9);
	}
	else
	{
		cout << "Assignment #" << setw(1);
	}
	cout << asNum << " : " << asName;
	cout << "\n*****************************************************\n\n";
	cout << right;
}

/*************************************************************************
 * FUNCTION GetSalesInfo
 *------------------------------------------------------------------------
 * This function prompts, reads, and checks inputs into reference variables
 * 	for account number, month, day, year, county code, total sale, and
 * 	shipping weight.
 * 	- Returns nothing
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		No Pre-conditions
 * POST-CONDITIONS
 *		This function will output nothing
 ************************************************************************/
void GetSalesInfo(int& acctNum,           //IN - account number
				  int& month,             //IN - month of sale
				  int& day,               //IN - day of sale
				  int& year,              //IN - year of sale
				  char& countyCode,       //IN - county code
				  float& totSale,         //IN - total sale price
				  int& shipWeight)        //IN - shipping weight
{
	// Variable List
	bool thirtyMonth;     //CALC - holds boolean for 30 day month
	bool thirtyOneMonth;  //CALC - holds boolean for 31 day month
	bool february;        //CALC - holds boolean for February
	bool countyOK;        //CALC - holds boolean to check county code

	// INPUT - Prompts for and reads in account number
	cout << left;
	cout << "Please Enter Your Account Number: ";
	cin  >> acctNum;

	// INPUT - Prompts for Sales date
	cout << "Please Enter the Sales Date."<< endl;

	// PROCESSING - Prompts, reads, and error checks the sales month
	do
	{
		cout << "Enter the Month: ";
		cin  >> month;

		// OUTPUT - outputs error message if user does not input
		//          a month between 1 and 12
		if(month > 12 || month <= 0)
		{
			cout << "**ERROR**" << endl << "-- FOOL, the integer you "
					"input is not a recognized month --";
			cout << endl;
		}
	}while(month > 12 || month <= 0);

	// PROCESSING - assigns boolean value based on month input
	thirtyMonth = (month == 4 || month == 6 || month == 9 || month == 11);
	thirtyOneMonth = (month == 1 || month == 3  || month == 5 || month == 7
				   || month == 8 || month == 10 || month == 12);
	february = (month == 2);

	// PROCESSING - Determines day input path based on month input
	if(thirtyOneMonth)
	{
		// INPUT - Prompts, reads, and error checks day based on a 31 day
		//         month
		do
		{
			cout << "Enter the Day: ";
			cin  >> day;

			// OUTPUT - Outputs error message if day is not between
			//          1 and 31
			if(day < 1 || day > 31)
			{
				cout << "**ERROR**" << endl << "-- FOOL, the integer you "
						"input is not a day that exists in that month --";
				cout << endl;
			}
		}while(day < 1 || day > 31);
	}
	else if(thirtyMonth)
	{
		// INPUT - Prompts, reads, and error checks day based on a 30 day
		//         month
		do
		{
			cout << "Enter the Day: ";
			cin  >> day;

			// OUTPUT - Outputs error message if day is not between
			//          1 and 30
			if(day < 1 || day > 30)
			{
				cout << "**ERROR**" << endl << "-- FOOL, the integer you "
						"input is not a day that exists in that month --";
				cout << endl;
			}
		}while(day < 1 || day > 30);
	}
	else if(february)
	{
		// INPUT - Prompts, reads, and error checks day based on a normal
		//         28 day February
		do
		{
			cout << "Enter the Day: ";
			cin  >> day;

			// OUTPUT - Outputs error message if day is not between
			//              1 and 28
			if(day < 1 || day > 28)
			{
				cout << "**ERROR**" << endl << "-- FOOL, please enter an"
						" integer between 1 and 28 b/c it's February --";
				cout << endl;
			}
		}while(day < 1 || day > 28);
	}

	// INPUT - Prompts and reads year of sale
	cout << "Enter the Year: ";
	cin  >> year;
	cin.ignore(1000, '\n');

	// INPUT - Prompts, reads, and error checks county code
	do
	{
		cout << "Please Enter the County Code: ";
		cin.get(countyCode);
		cin.ignore(1000, '\n');
		countyCode = toupper(countyCode);

		// PROCESSING - checks input against valid county codes
		countyOK = (countyCode == 'O' || countyCode == 'S' ||
				    countyCode == 'L');

		// OUTPUT - Outputs error message if county code was not valid
		if(!countyOK)
		{
			cout << "**ERROR**" << endl << "-- FOOL, County code entered "
					"is invalid! --"      << endl;
		}
	}while(!countyOK);

	// INPUT - Prompts, reads, and error checks for sales amount
	do
	{
		cout << "Please Enter the Sales Amount: ";
		cin  >> totSale;

		// OUTPUT - Outputs error message if user entered negative or
		//          enters zero.
		if(totSale == 0)
		{
			cout << "**ERROR**" << endl << "-- FOOL, Why you charge "
					"nothing? --";
			cout << endl;
		}
		else if (totSale < 0)
		{
			cout << "**ERROR**" << endl << "-- FOOL, You can't charge a "
					"negative amount? What sales person owes a customer "
					"money? --";
			cout << endl;
		}
	}while(totSale <= 0);

	// INPUT - Prompts, reads, and error checks weight
	do
	{
		cout << "Please Enter the Weight: ";
		cin  >> shipWeight;

		// OUTPUT - Outputs error message if weight input is less than or
		//          equal to zero
		if(shipWeight <= 0)
		{
			cout << "**ERROR**" << endl << "-- FOOL, You can't ship "
					"nothing! --"       << endl;
		}
	}while(shipWeight <= 0);
}

/*************************************************************************
 * FUNCTION CalcDiscount
 *------------------------------------------------------------------------
 * This function receives the month of sale and total sale amount to
 * 	calculate the discount amount
 * 	- Returns the discount amount
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		month   : month of sale must be predefined
 *		totSale : total sale amount must be predefined
 * POST-CONDITIONS
 *		This function will return a float representing the discount amount
 ************************************************************************/
float CalcDiscount(int month,             //IN - month of sale
		   	   	   float totSale)         //IN - total sale price
{
	/*********************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------
	 * Processing
	 *--------------------------------------------------------------------
	 * SPRING_SALE : Holds discount percentage for spring-late winter
	 * 				 months
	 * SUMMER_SALE : Holds discount percentage for summer months
	 * FALL_SALE   : Holds discount percentage for fall-early winter
	 * 				 months
	 ********************************************************************/
	const float SPRING_SALE = 0.05;
	const float SUMMER_SALE = 0.10;
	const float FALL_SALE = 0.15;

	// Variable List
	float discountAmount; //CALC - holds value for discount amount

	// PROCESSING - determines which discount percentage to use based on
	//              month provided and then calculates discount amount
	if(month <= 5)
	{
		discountAmount = totSale * SPRING_SALE;
	}
	else if(month <= 8)
	{
		discountAmount = totSale * SUMMER_SALE;
	}
	else if(month <= 12)
	{
		discountAmount = totSale * FALL_SALE;
	}

	return discountAmount;

}

/*************************************************************************
 * FUNCTION CalcSalesTax
 *------------------------------------------------------------------------
 * This function receives the county code and the total sale price and
 * 	then calculates the sales tax
 * 	- Returns the sales tax price
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		countyCode     : County Code must be predefined
 *		discountAmount : Discount Amount must be predefined
 *		totSale        : Total Sale price must be predefined
 * POST-CONDITIONS
 *		This function will calculate and return the sales tax amount
 ************************************************************************/
float CalcSalesTax(char countyCode,       //IN - county code
				   float discountAmount,  //IN - Amount discounted
				   float totSale)         //IN - total sale price
{
	/*********************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------
	 * Processing
	 *--------------------------------------------------------------------
	 * ORANGE_TAX : Holds tax percentage for Orange County sales
	 * SD_TAX     : Holds tax percentage for San Diego Sales
	 * LA_TAX     : Holds tax percentage for Los Angeles Sales
	 ********************************************************************/
	const float ORANGE_TAX = 0.0775;
	const float SD_TAX     = 0.0825;
	const float LA_TAX     = 0.0800;

	// Variable List
	float salesTax;      //CALC - holds sales tax percentage
	float salesTaxPrice; //CALC - holds sales tax price and is returned
	float postDiscTot;   //CALC - holds post discount total sale price
	char  upperCode;     //CALC - holds upper case value of county code

	// PROCESSING - converts county code provided to upper case
	upperCode = toupper(countyCode);

	// PROCESSING - switch used to determine which sales tax to use based
	//              on county code provided
	switch(upperCode)
	{
		case 'O': salesTax = ORANGE_TAX;
				  break;
		case 'S': salesTax = SD_TAX;
				  break;
		case 'L': salesTax = LA_TAX;
				  break;
		default : cout << endl << "**CANNOT FIND COUNTY**"<< endl;
				  salesTax = 0;
	}

	// PROCESSING - calculates total sale price after discount is taken
	postDiscTot   = totSale - discountAmount;

	// PROCESSING - calculates sales tax price
	salesTaxPrice = postDiscTot * salesTax;

	return salesTaxPrice;
}

/*************************************************************************
 * FUNCTION CalcShipping
 *------------------------------------------------------------------------
 * This function receives the shipping weight and calculates the shipping
 * 	fee
 * 	- Returns the shipping fee/price
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		shipWeight : The shipping weight must be predefined
 * POST-CONDITIONS
 *		This function calculate and return the shipping fee
 ************************************************************************/
float CalcShipping(int shipWeight) //IN - shipping weight
{
	/*********************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------
	 * Processing
	 *--------------------------------------------------------------------
	 * FLAT_RATE      : Holds flat rate shipping price for all items
	 * UND_FIFTY_TAX  : Holds tax rate for items over 25 and under 50 lbs
	 * OVER_FIFTY_TAX : Holds tax rate for items over 50 lbs
	 ********************************************************************/
	const float FLAT_RATE      = 5.00;
	const float UND_FIFTY_TAX  = 0.10;
	const float OVER_FIFTY_TAX = 0.07;

	// Variable List
	float shippingAmmount; //CALC - holds value for shipping fee/price

	// PROCESSING - Determines which shipping tax/rate to use in
	//              calculating the shipping fee based on the shipping
	//              weight provided
	if(shipWeight <= 25)
	{
		shippingAmmount = FLAT_RATE;
	}
	else if(shipWeight <= 50)
	{
		shippingAmmount = FLAT_RATE + (shipWeight-25)*UND_FIFTY_TAX;
	}
	else if(shipWeight > 50)
	{
		shippingAmmount = FLAT_RATE + (shipWeight-50)*OVER_FIFTY_TAX;
	}

	return shippingAmmount;
}

/*************************************************************************
 * FUNCTION OutputInvoice
 *------------------------------------------------------------------------
 * This function receives the account number, sale date, county code, total
 * 	sale price, discount amount, sales tax price, shipping fee, and total
 * 	price due
 * 	- Returns nothing, outputs invoice
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		acctNum        : The account number must be predefined
 *		countyCode     : The county code must be predefined
 *		month          : The month of sale must be predefined
 *		day            : The day of sale must be predefined
 *		year           : The year of sale must be predefined
 *		totSale        : The original sale price must be predefined
 *		discountAmount : The discount amount must be predefined
 *		salesTaxPrice  : The sales tax amount must be predefined
 *		shippingAmount : The shipping fee must be predefined
 * POST-CONDITIONS
 *		This function will output the invoice
 ************************************************************************/
void OutputInvoice(int acctNum,          //IN - account number
				   int month,		     //IN - month of sale
				   int day,              //IN - day of sale
				   int year,             //IN - year of sale
				   char countyCode,      //IN - county code
				   float totSale,        //IN - original sale price
				   float discountAmount, //IN - amount discounted
				   float salesTaxPrice,  //IN - price of sales tax
				   float shippingAmount, //IN - price of shipping
				   float totalDue)       //IN & CALC - Total price due
{
	/*********************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------
	 * Processing
	 *--------------------------------------------------------------------
	 * ACCT_TITLE_WIDTH : Holds width for header of table and county
	 * 					  spacing
	 * ACCT_NUM_SPACE   : Holds width for account number spacing
	 * COL_LEFT_WIDTH   : Holds width for left column spacing
	 * COL_RIGHT_WIDTH  : Holds width for right column spacing
	 ********************************************************************/
	const int ACCT_TITLE_WIDTH = 50;
	const int ACCT_NUM_SPACE   = 9;
	const int COL_LEFT_WIDTH   = 22;
	const int COL_RIGHT_WIDTH  = 9;

	// Variable List
	string countyName; //CALC & OUT- holds string of county name
	char   upperCode;  //CALC      - holds upper case value of county code

	// PROCESSING - converts provided county code to upper case
	upperCode = toupper(countyCode);

	// PROCESSING - assigns string of county name based on upper case
	//              county code provided
	switch(upperCode)
	{
		case 'O': countyName = "Orange County";
				  break;
		case 'S': countyName = "San Diego County";
				  break;
		case 'L': countyName = "Los Angeles County";
				  break;
		default : cout << endl << "**CANNOT FIND COUNTY**"<< endl;
				  countyName = "Error";
	}

	// OUTPUT - outputs the account number and county name
	cout << left;
	cout << endl                   << endl;
	cout << setw(ACCT_TITLE_WIDTH) << "ACCOUNT NUMBER"
		 << "COUNTY"               << endl;
	cout << setw(ACCT_NUM_SPACE)   << right << acctNum
		 << setw(ACCT_TITLE_WIDTH+1)
		 << right                  << countyName;

	// OUTPUT - outputs the date of sale
		//          original sale price, discount amount, sales tax amount,
		//          shipping fee, and total due
	cout << endl                   << endl  << endl;
	cout << "DATE OF SALE: "       << month << "/"  << day << "/" << year;
	cout << endl                   << endl  << endl << endl;

	// OUTPUT - outputs the original sale price, discount amount, sales
	//          tax amount, shipping fee, and total due
	cout << setprecision(2)        << fixed;
	cout << setw(COL_LEFT_WIDTH)   << left  << "SALE AMOUNT:" << "$"
		 << setw(COL_RIGHT_WIDTH)  << right << totSale         << endl;
	cout << setw(COL_LEFT_WIDTH)   << left  << "DISCOUNT:"     << "$"
		 << setw(COL_RIGHT_WIDTH)  << right << discountAmount  << endl;
	cout << setw(COL_LEFT_WIDTH)   << left  << "SALES TAX:"    << "$"
		 << setw(COL_RIGHT_WIDTH)  << right << salesTaxPrice   << endl;
	cout << setw(COL_LEFT_WIDTH)   << left  << "SHIPPING:"     << "$"
		 << setw(COL_RIGHT_WIDTH)  << right << shippingAmount  << endl;
	cout << setw(COL_LEFT_WIDTH)   << left  << "TOTAL DUE:"    << "$"
		 << setw(COL_RIGHT_WIDTH)  << right << totalDue        << endl;
	cout << endl                   << endl  << endl;
}
