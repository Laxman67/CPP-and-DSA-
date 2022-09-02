#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;

} P; // can be use like this OR => line 15

int main()
{

    // struct Point P ; // struct keyword is optional in cpp

    // assign using  struct

    P.x = 10;
    P.y = 90;

    // access value

    cout << "Value of x is :" << P.x;

    cout << "\nValue of y is :" << P.y;

    return 0;
}