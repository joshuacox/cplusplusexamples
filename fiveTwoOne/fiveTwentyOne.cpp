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
bool leapYear(int year)
{
  if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int year;
  cout << "Enter a year: " << endl;
  cin >> year;

  if(leapYear(year))
  {
    cout << year << " is a leap year.\n";
  }
  else
  {
    cout << year << " is not a leap year.\n";
  }

  return 0;
}
