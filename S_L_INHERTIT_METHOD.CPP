#include <iostream>
using namespace std;

class Account
{

    int salary = 9000;

public:
    void printAcc()
    {
        cout << "Salary is :" << salary;
    }
};

class Department : public Account
{

    int bonus = 1000;

public:
    void printB()
    {
        cout << "Bonus is :" << bonus;
    }
};

int main()
{

    Account A;
    A.printAcc();

    cout << endl;

    Department D;
    D.printAcc();
    cout << endl;
    D.printB();

    return 0;
}