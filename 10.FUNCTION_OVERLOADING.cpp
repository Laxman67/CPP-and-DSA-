#include <iostream>
using namespace std;

class calculator
{

public:
    static int x, y; //
    static int add(int a, int b)
    {
        return a + b;
    }

    static int add(int a, int b, int c)
    {

        return a + b + c;
    }
};

int calculator::x = 100;
int calculator::y = 900;

int main()
{

    calculator C;
    cout << "\n Value of sum by adding (a + b) is :" << C.add(10, 20);
    cout << "\n Value of sum by adding (a + b + c) is :" << C.add(10, 20, 30);
// must be in public to access without object
    cout << "\n Value of x and y without object is: " << calculator::x << " " << calculator::y; 

    return 0;
}