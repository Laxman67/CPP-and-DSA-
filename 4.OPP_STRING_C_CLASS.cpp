#include <iostream>
#include <string.h>

// TO USE STRING CLASS IN C++ , INCLUDE   <string.h>  header file

using namespace std;

int main()
{

  string FirstName = "Laxman"; // WE ARE ABLE TO USE  C++ STRING BCOS , USING OF  <string.h>
  string LastName = "Henricks";
  string Full_Name;

  cout << "FULL NAME IS : " << FirstName << " " << LastName << endl;

  // copy FirstName into + LastName

  LastName = FirstName;
  cout << LastName;

  // concatenates FirstName and  LastName

  Full_Name = LastName + LastName;
  cout<< endl<< Full_Name;

  // total lenghth of FirstName after concatenation

  // TO COMPARE STRINGS IN CPP

  // TO FIND LENGHT OF STRING

  return 0;
}