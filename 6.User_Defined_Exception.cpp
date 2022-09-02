#include <iostream>
using namespace std;

class arraySizeZeroException // users defined data type
{
};
class arraySizeNegativeException // users defined data type
{
};

int average(int arr[], int n)
{
    if (n == 0)
        throw arraySizeZeroException();
    if (n < 0)
        throw arraySizeNegativeException();

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
int main()
{

    int n;
    cin >> n;

    int *arr = new int[n]; // dynamic memery allocation

    for (int i = 0; i < n; i++)
    {
    	cout<<"Enter "<<i<"th Element:";
        cin >> arr[i];
    }

    // try block
    try
    {

        int Average = average(arr, n);
    }

    catch (arraySizeZeroException &e1)
    {
        cout << "Array size is Zero";
    }
    catch (arraySizeNegativeException &e2)
    {
        cout << "Array size is Negative";
    }

    return 0;
}
