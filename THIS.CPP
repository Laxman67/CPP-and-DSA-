#include <iostream>
#include <string.h>
using namespace std;

class demo
{

    char sname[50];
    int age;
    float marks;

public:
    demo(char sname[50], int age, float marks)

    {
        strcpy(this->sname, sname);
        this->age = age;
        this->marks = marks;
    }

    void show()
    {
        cout << sname << " " << age << " " << marks;
    }
};

int main()
{
    demo d1("Ram", 20, 75.7);
    d1.show();
}
