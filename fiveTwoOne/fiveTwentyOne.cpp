//Bryan Huff
//This is 5.21
//Using a created boolean function to test for leap year.

#include <iostream>

using namespace std;

//Author: Bryan Huff
//Date: 15 October, 2015
//
//Purpose: Computing whether or not a date is a leap year
//
//Parameters: int year - the year
bool leap_year(int year)
{

    if ((year % 4 == 0) && !(year % 100 == 0))
    {
        cout << year << " is a leap year.";
        return 1;
    }
	
	if (year % 400 == 0)
	{
		cout << year << " is a leap year.";
		return 1;
	}
	
    else
    {
        cout << year << " is not a leap year.";
        return 1;
    }

}

int main()
{
		int year;
		cout << "Enter a year: " << endl;
		cin >> year;
		cout << leap_year(year);
		
		return 0;
}
