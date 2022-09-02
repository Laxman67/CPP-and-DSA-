#include <iostream>
using namespace std;

struct A
{
    int x; // size ->4 byte ->padding 4
    double z; // size ->8 byte
    short int y; // size ->2 byte ->padding 6
};

int main()
{

A a;

cout<<sizeof(A);

    return 0;
}