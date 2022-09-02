
#include <iostream>
using namespace std;

class Myclass
{

public:
    static int x;

    static void Fund()
    {
        cout << "Value of x with object is :" << x << endl;
    }
};

int Myclass::x = 89;

int main()
{

    Myclass M;
    cout<<"\nAccess Member Fnction with Object  \n";
    M.Fund(); // access through member function

    cout<<"\nAccess Data Member with Class Name \n";

    cout << " Value of x without object " << Myclass::x; // access without object and must be  public:

    cout<<"\nAccess Member Fnction without  Object ( class name) \n";
    Myclass::Fund();
    return 0;
}