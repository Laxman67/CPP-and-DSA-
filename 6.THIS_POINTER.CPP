#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{

    int id;
    string name;
    float salary;

public:

// this keyword is used to refer current instance of class 
    Employee(int id, string name, float salary)
    {

       this-> id = id;
       this-> name = name;
       this-> salary = salary;
    }

    void Display(){
        cout<<id<<" "<<name<< " "<<salary<<endl;
    }

private:
};
int main(void)
{

    Employee E1(12,"Laxman",89.00);
    E1.Display();

    return 0;
}