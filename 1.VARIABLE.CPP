#include <iostream>
using namespace std;

int main()
{

    int x = 10; // x is a predefined variable
    int &y = x; // y is a reference variable

    cout << " Value of vaiable using itself :" << x;
    cout << " \nValue of vaiable using Reference :" << y;

    // both are at same memory location

    cout << " \n Address of x is ::" << &x;
    cout << " \n Address of y is ::" << &y;

    return 0;
}