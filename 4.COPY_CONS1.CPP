#include <iostream>
using namespace std;

class Student_details
{

    int cls, roll_no;

public:
    // paramertierizzed constructor

    Student_details(int x, int y)
    {

        cls = x;
        roll_no = y;
    }

    Student_details(Student_details &obj_ref)
    {

        cls = obj_ref.cls;
        roll_no = obj_ref.roll_no;
    }

    void Display_Details()
    {

        cout << "Stuident information are displaying \n";
        cout << "Roll no and Class are : " << cls << " " << roll_no;
    }
};

int main()
{

    Student_details obj1(12, 21);
    obj1.Display_Details();

    // copy to anothr object

    Student_details obj2 = obj1;

    cout << "\n\n\nDisplay through another object" << endl;
    obj2.Display_Details();

    return 0;
}