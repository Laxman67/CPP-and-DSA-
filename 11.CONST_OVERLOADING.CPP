#include <iostream>
using namespace std;

// Constructor  overloading is similar to Function overloading , is  a concept of c++ OOPs -> Polymorphism
//  Polymorphism means MANY FORMS

class Construtor
{

public:
    Construtor();         // constructor 1 =>Declaration
    float Area;           // Data Member
    Construtor(int, int); // constructor 2=>Declaration
    void Show();          //  Member function
};

Construtor::Construtor()
{
    cout << "\n Constrctor 1 Called\n";
    Area = 0; // set the value of (Area) through constructor
}

Construtor::Construtor(int a, int b)
{
    cout << "\n Constrctor 2 Called\n";

    Area = a * b; // set the value of a and b  through constructor  in to Area
    cout << "Hello a*b";
}

void Construtor::Show()
{
    cout << "\nArea is : " << Area;
}

int main()
{

    Construtor C(10, 20); // Construtor(int a, int b) called depending upon parameter
    Construtor C1;        // Construtor() called depending upon parameter

    cout << endl
         << "Area is : " << C1.Area; // Construtor() called

    C.Show();

    return 0;
}