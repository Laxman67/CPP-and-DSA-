#include <iostream>
using namespace std;

#include<bits/stdc++.h>

struct Employee
{
    string name; // name of person
    int age; // age of person
    double salary; // in lakhs
    bool remote;  // is remote or not 


};


using namespace std;
int main()
{

// initialisation-cum-declaration

Employee e={"Laxman",21,2,true};

cout<<"Name :"<<e.name<<endl;
cout<<"Age :"<<e.age<<endl;
cout<<"Salary :"<<e.salary<<endl;
cout<<"Is remote :"<<e.remote<<endl;

cout<<"\n\n Acxcess through Pointer\n ";

Employee *eptr =&e;
cout<<"Name of Employee from Pointer is :"<<(eptr->name);


return 0;
}