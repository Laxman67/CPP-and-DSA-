#include <iostream>
using namespace std;

class ClassA
{
    int x, y;

public:
    void get()
    {
        cout <<"Enter value of x and y :";
        cin>>x;
        cin>>y;


    }

    friend int Print(ClassA obj);
};

int Print(ClassA obj){


    cout<<"Value of x and y are :"<<obj.x<< " "<<obj.y;
}

int main()
{

ClassA obj1;

obj1.get();
Print(obj1);

    return 0;
}