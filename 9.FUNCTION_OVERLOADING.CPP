#include <iostream>
using namespace std;

// Function overloading is a concept of c++ OOPs -> Polymorphism
//  Polymorphism means MANY FORMS

class A
{

public:
    A(int x, int y)
    {
        // cout << "\nEnter x value: " << x;
        // cout << "\nEnter y value : " << y;

        cout << "\n Multipication of x(int) and y (int) is :" << (x * y);
    }

    void print(int i)
    {
        cout << "\nPrinting int: " << i << endl;
    }


    void print(double f)
    {
        cout << "\nPrinting float: " << f << endl;
    }


    void print(char *c)
    {
        cout << "\nPrinting character: " << c << endl;
    }
};

int main()
{
    A a(90, 90);
    a.print(56.78);
    a.print("'laxman'");
    a.print(90);

    return 0;
}