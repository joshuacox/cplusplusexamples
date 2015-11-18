#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

  string input="input";
  string fname;
  string lname;
  //int x; saved for later
  //double y; saved for later

  ifstream in_file;
  in_file.open(input.c_str());
  in_file >> fname;

  cout << input << fname;

  in_file.close();
  //system("pause");

  // echo a newline
  cout << '\n';
  string input2="notice it truncated after the space I think at this point if we simplify that cout to not have input it is fine";
  cout << input2;
  cout << '\n';
  cout <<  fname;
  string input3="this next code can handle spaces and newlines";
  cout << input3;
  cout << '\n';
  //start alt
  string line;
  ifstream myfile ("input");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}
