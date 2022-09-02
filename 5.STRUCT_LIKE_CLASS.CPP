#include <iostream>
using namespace std;

// Like classes , we can have constructure , destructure, fuunction in a struct

struct Point
{ 

    // Members and Functions are Public Always
    int x;
    int y;
    
    // Constrcture in struct

    Point(int a, int b)
    {
        x = a;
        y = b;
    }



    void ShowX_Y()
    {
        cout << " x and y are :" << x << " " << y;
    }
};

int main()

{

    struct Point p(10, 900);
    p.ShowX_Y();

    return 0;
}

// WHEN TO USE STRUCTURE AND  WHEN TO USE CLASS ?

// IN OOP -> USE CLASS

// IN BASIC-> USE STRUCTURE
