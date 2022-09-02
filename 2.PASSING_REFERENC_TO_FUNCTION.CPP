#include <iostream>
using namespace std;

void Sum(int &x, int &y)
{
    cout << "Sum of value1 and value2 is : " << (x + y) << endl;
}



void Multipication(int x, int y)
{
    cout << "Sum of value1 and value2 is : " << (x*y) << endl;
}



int main()
{

    int a = 100, b = 900;
    Sum(a,b);
    int x=10,y=20;
    Sum(x,y);
    Multipication(x,y);

    return 0;
}