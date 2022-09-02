#include <iostream>
using namespace std;

struct Data
{
    int x;
    int y;
};

int main()
{

    Data arr[5], P = arr[0]; // Array of Structure data  type

    // Assigning value to X and y using for loop

    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i * 5;
        arr[i].y = i * 10;
    }

    // Assigning value using membership operator

    // *****************xxxxx ******************
    arr[0].x = 30;
    arr[0].y = 90;

    // *****************xxxxx ******************

    // Accessing value to X and y using for loop
    cout
        << "Value in array are :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].x << " " << arr[i].y << endl;
    }

    /*
        //  Data arr[5],P=arr[0]; // Array of Structure
        cout << "Access using index of array\n";

        cout << " value of x is :" << P.x << " & "
             << " value of y is :" << P.y;


     */

    return 0;
}