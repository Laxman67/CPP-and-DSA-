#include <iostream>
using namespace std;

void swap(int *x, int *y)
{

    int temp = *x; // temp=10
    *x = *y;       // x=y
    *y = temp;     // y=temp
}
int main()
{

    int a = 10, b = 90;

    cout << "BEFORE SWAP\n ";

    cout << "Value of a and b Before SWap is : " << a << " " << b;

    

    cout << "\nAFTER SWAP\n ";

    swap(a,b);

    cout << "\nValue of a and b Before SWap is : " << a << " " << b;

    return 0;
}