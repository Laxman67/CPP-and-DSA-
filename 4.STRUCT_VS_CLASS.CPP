#include <iostream>
using namespace std;

// 1.CLASS
/*
class Point
{

// class memeber are private by deefault
    int x, y;
// public:


};

*/

// 1.STRUCTURE

struct Point
{

// class memeber are  Public by default
    int x, y;
};

int main()
{
    // 1.class

    /* Point P;
     P.x=90; // we give error because  x is private
     cout<<" X is : "<<P.x<<endl;
    */

    // 1.structure

    struct Point P;
    P.x = 100;
    P.y = 900;
    cout << "value of x and y is : " << P.x << " " << P.y;

    return 0;
}