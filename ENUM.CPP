#include <iostream>
using namespace std;

// enum is used to give integral constant value

// enum -> datatype
// week is a enum variable
// start from =0 to n
enum week
{

    // default value starts from 0  till n member

    Sun, // state=0
    Mon, // state=1
    Tue, // state=2
    Wed, // state=3
    Thu, // state=4
    Fri, // state=5
    Sat  // state=6

};

int main()
{

    week Day;

    // default value
    Day = Wed; //  Day is equal to 3
    cout << " Day is :" << Day << endl;

    Day = Thu;
    cout << " Day is :" << Day << endl;

    // Value of Choice

    // enum State{ Mon=23,Thu=90};

    //    cout<<"\nValue after choice is : Monday ->"<<Mon;
    //     cout<<"\nValue after choice is :Thu ->"<<Thu;

    // OR

    // duplicates value

    enum State
    {
        Mon = 100,
        //Thu = Mon  // Or 
        Thu=90
    };

    cout << "\nValue after choice is : Monday ->" << Mon;
    cout << "\nValue after choice is :Thu ->" << Thu;
    return 0;
}