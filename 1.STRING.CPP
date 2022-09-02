#include <iostream>
using namespace std;
int main()
{

    /*
    C++ provides following two types of string representations:
        1) The C-style character string.
        2) The string class type introduced with Standard C++.

    1). The C-Style Character String
    . This string is actually a one-dimensional array of
    characters which is terminated by a null character '\0',
    Compiler automatically place null pointer at the end of program.


    */

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // TO ACCESS THE C++ STYLE STRING

    // WE CAN USE SAME AS ARRAY
    cout << "Using single Access" << endl;

    cout << greeting[0];

    cout << greeting[1];

    cout << greeting[2];

    cout << greeting[3];

    cout << greeting[4];

    cout << greeting[5];

    

    return 0;
}