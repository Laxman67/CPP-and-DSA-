#include <iostream>
using namespace std;

union A
{
    char a;
    short int y;

    int x;
};

union test
{
    int x, y;
};

int main()
{

    cout <<"SIZE OF STRUCT A IS :"<< sizeof(A)<<endl; // size of union is 4 because it allocates storage = largest member size

    test t;
    t.x = 2;

    cout << t.x << " " << t.y << endl;

    t.y = 3;

    cout << t.x << " " << t.y << endl;

    return 0;
}