#include <iostream>
#include <string>
using namespace std;

// Frined func is used to access private data member

class acc
{
private:
    string name = "Ramesh";
    int acn = 908909;
    float balance = 100000;

public:
    void Read()
    {

        cout << "Enter your name :";
        cin >> name;
        cout << "\nEnter your acn number";
        cin >> acn;
        cout << "\nEnter your balance ";
        cin >> balance;
    }

    friend void Show(acc obj2); // declarartion of freind funtion

    friend void Default_show(acc obj2);
    friend void ShowBalanace(acc obj);
};

void Show(acc obj) // definition  of freind funtion
{
    cout << "\nName : " << obj.name;
    cout << "\nAccount  : " << obj.acn;
    cout << "\nBalance : " << obj.balance;
}
// definition  of freind funtion                                                                                                 


void Default_show(acc obj2)
{ // initial value
    cout << "Your default name is :" << obj2.name << endl;
    cout << "Your default balace  is :" << obj2.balance << endl;
    cout << "Your default acn is :" << obj2.acn << endl;
}

// definition  of freind funtion

void ShowBalanace(acc obj){
    cout<<"Your balane is : "<<obj.balance;

}



int main()
{

    acc obj1;
    Default_show(obj1); // friend function
    ShowBalanace(obj1);
    obj1.Read();
    Show(obj1); // friend function after read

    return 0;
}
