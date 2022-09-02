

#include <iostream>
using namespace std;
int main()
{

    // Pointer to array

    int arr[4];    // variable of int type
    int *ptr;      // pointer variable
    ptr = &arr[4]; // assigning array to pinter

    //

    // an array with 5 elements.
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    p = balance;

    int sizeofArray = sizeof(balance) / sizeof(balance[0]);

    // output each array element's value

    cout << "Array values using pointer " << endl;

    
    
    for (int i = 0; i < sizeofArray; i++)
    {

        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }


    cout << "Array values using balance as address " << endl;
    for (int i = 0; i < sizeofArray; i++)
    {

        cout << "*(balance + " << i << ") : ";
         cout << *(balance + i) << endl;
       // cout << balance[i] << endl;
    }
    return 0;
}
