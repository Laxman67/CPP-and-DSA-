#include <iostream>
using namespace std;

void f1() throw(int)
{
    cout << "F1 Begins \n";
    throw 100;

    cout << "F1 Ends\n";
}

void f2() throw(int)
{
    cout << "F2 begins\n";
    f1();
    cout << "F2 ends\n";
}

void f3()
{

    cout << "F3 Begins\n";
    try
    {

        f2();
    }

    catch (int x)
    {
        cout << "Caught Exception is :"<<x<<endl;
    }

    cout<<"F3 Ends\n";

}
int main()
{
    f3();
    cout<<"\n Bye";

    return 0;
}