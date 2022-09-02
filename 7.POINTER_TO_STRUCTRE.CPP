#include <iostream>
using namespace std;

// POINTER_TO_STRUCTRE

struct Point
{
    // Members and Functions are Public Always
    int x;
    int y;
};

int main()
{

    struct Point p1;
    Point *ptr = &p1; // strcture to Pointer

    ptr->x = 90;
    ptr->y = 100;

    // cout<<"Value of x and y thought pointer (structure) is : " <<(*ptr).x<< " "<<(*ptr).y<<endl;

    // OR
    cout << "Value of x and y thought pointer (structure) is : " << ptr->x << " " << ptr->y << endl;

    return 0;
}