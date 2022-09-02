#include <iostream>
using namespace std;

class A
{

    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "Valu of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(90);
    a.getData();
}
