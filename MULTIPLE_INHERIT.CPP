#include <iostream>
using namespace std;

// data member in protected mode

class A
{
protected:
    int a;

public:
    void set_a(int a)
    {

        this->a = a;
    }
};

class B
{
protected:
    int b;

public:
    void set_b(int x)
    {
        this->b = x;
    }
};

class C : public A, public B
{
public:
    void Display()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
        cout << "Addition of a and b is " << a + b;
    }
};

int main()
{

    C c;
    c.set_a(90);
    c.set_b(100);
    c.Display();

    return 0;
}