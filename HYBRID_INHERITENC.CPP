#include <iostream>
using namespace std;
class A
{

protected:
    int a = 10, b = 20;

public:
    void Display_A()
    {
        cout << "Value of A and B  is :" << a << " " << b << endl;
    }
};

class B :  virtual public A
{
protected:
    int c = 30, d = 40;

public:
    void Display_B()
    {
        cout << "Value of C and D  is :" << c << " " << d << endl;
    }
};

class C : virtual public A
{
protected:
    int e = 50, f = 60;

public:
    void Display_C()
    {
        cout << "Value of E and F  is :" << e << " " << f << endl;
    }
};


class D:public B,public C{

};


// virtual to remove problem of amibiguity 

int main()
{

    B b;
    b.Display_A();
    b.Display_B();
    C c;
    c.Display_A();
    c.Display_C();
    D d;
    d.Display_A();

    return 0;
}