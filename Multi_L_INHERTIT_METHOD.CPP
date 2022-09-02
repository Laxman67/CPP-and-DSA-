#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating\n";
    }
};

class Dog : public Animal
{

public:
    void bark()
    {
        cout << "Dog barking....\n";
    }
};

class BabyDog : public Dog
{

public:
    void weep()
    {
        cout << "Babydog Weeping .....";
    }
};

int main()
{

    Dog d; // class Dog and Animal can be called from this class-> inherit
    d.bark();
    d.eat();

    cout << "Calling Again with babydog class inherit all its parents ->\n";
    BabyDog B;
    B.bark();
    B.eat();
    B.weep();

    return 0;
}