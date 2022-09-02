#include <iostream>
using namespace std;

struct Student
{
    int roll_No;
    string name;
    string address;
    int age;
    string section; //'7-A'
};

void print(Student S) // OR -> void print(Student S)
{
    cout << "Simple Argument \n";
    cout << "The Details are here below: " << endl;
    cout << S.roll_No << " " << S.name << " " << S.address << " " << S.age << " " << S.section;
}

void print1(Student &S) // OR -> void print(Student S) 
{
    cout << "\n\nusing Reference\n";
    cout << "The Details are here below: " << endl;
    cout << S.roll_No << " " << S.name << " " << S.address << " " << S.age << " " << S.section;
}

void print2(Student *S) // OR -> void print(Student S)
{
    cout << "\n\nusing Pointer\n";
    cout << "The Details are here below: " << endl;
    cout << S->roll_No << " " << S->name << " " << S->address << " " << S->age << " " << S->section;
}

int main()
{

    Student P = {21, "Laxman", "Batala", 21, "7-A"};

    print(P);
    print1(P);

    // Student *P = {21, "Laxman", "Batala", 21, "7-A"};

    Student *ptr = &P;
    print2(ptr);

    return 0;
}