//Josh Cox
//This is the c version of 5.21
//Using a created boolean function to test for leap year.


#include <stdio.h>

// C does not natively have a bool type so we define one here
typedef enum { false, true } bool;

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
  //cout << "Enter a year: " << endl;
  printf("Enter a year: ");
  //cin >> year;
  scanf("%d", &year);

  if(leapYear(year))
  {
  //  cout << year << " is a leap year.\n";
    printf("%d", year);
    printf(" is a leap year.\n");
  }
  else
  {
  //  cout << year << " is not a leap year.\n";
    printf("%d", year);
    printf(" is not a leap year.\n");
  }

  return 0;
}
