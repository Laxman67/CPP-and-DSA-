#include <iostream>
using namespace std;

union Student
{
    int roll;
    char letter;
};

int main()
{

    Student s;
    s.letter = '1';

    cout << s.letter<<endl;
    s.roll = 23;
    cout << s.roll;

    return 0;
}