#include <iostream>
using namespace std;
int main()
{

    // Pointer is a soecial variabl to store address of another variable

    // normal variable
    int Month = 900;

    // <== Declaration of pointer variabl ==>//

    // datatype * variabl_name;

    int *ptr;

    // Assigning normal varible to ptr by using ampersand operator (&)-> used for accessing address of varible

    ptr = &Month;

    // Accessing address by Pointer variable

    cout << "Acessing address by Pointer variable ";
    cout << endl;

    cout << ptr;
    cout << endl;

    cout << "Acessing address a  variable " << endl;
    cout << (&Month);

    cout << "\nBoth the ADDRESS are same using pointer and simple variable :  " << endl;

    // Accessing vale by Pointer variable

    cout << "\nNow , try to access their value : " << endl;

    cout << "Value of Month using pointer (*ptr) is => " << (*ptr);
    cout << "\nValue of Month using  Variable is=> " << Month;

    cout << "\nBoth the VALUE are same using pointer and simple variable :  " << endl;

    return 0;
}