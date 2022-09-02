#include <iostream>
using namespace std;

struct Base
{

    int x;
    int y;
};

struct Derived : Base // by default it is Public:
{
    int a;
    int b;
};

int main()
{

    struct Derived d; // Accesssing throught derived class  Derived d

    d.a = 10;
    d.b = 20;
    d.x = 90;
    d.y = 100;
    cout << " Value of  x , y : x , y are :" << d.x << " " << d.y << " " << d.a << " " << d.b << " " << endl;

    return 0;
}