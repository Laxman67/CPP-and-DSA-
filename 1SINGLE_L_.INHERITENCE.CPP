#include <iostream>
using namespace std;

// iNHERITENCE IN C++
// IS A FEATURE OF OOP  THAT ALLOW CHILD CLASS TO INHERIT THE PROPERTIES OF PARENT CLASS

class Account
{
public:
    float Salary = 60000;
};

class Programmer : public Account
{

public:
    float Bonus = 5000;
};

int main(void)

{
    Account P1;
    cout << " (Base class) Salary  is :" << P1.Salary<<endl;
    Programmer P2;

    cout << " (Child  class) Salary  is :" << P2.Salary<<endl;

    cout<< " (Child  class) Bonus  is :"<<P2.Bonus;

    return 0;
}