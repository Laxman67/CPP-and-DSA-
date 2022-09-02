

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    void setClass(int cls);

    int getClass();

    Student(string str);
    ~Student();
};
// Constructor 
Student::Student(string str):name(str)
{

    

    cout << "Name => default is :" << name;
}

/// Destructor 

Student::~Student()
{

    

    cout << "\nObjct deleted bcos its used  being done " << name;
}

void Student::setClass(int rol)
{
    roll_no = rol;
};

int Student::getClass()
{

    return roll_no;
}

int main()

{

    Student student1("Laxman");
    student1.setClass(9);
    cout<<"\n Class of student is :" << student1.getClass();

    return 0;
}