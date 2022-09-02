#include <iostream>
using namespace std;

double getAverage(int arr[], int size)
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
    {

        sum = sum + arr[i];
    }

    
    avg = double(sum) / size;
    return avg;
}

int main()
{
    // an int array with 5 elements.
    int balance[5] = {50, 50, 50, 50};
    double avg;
    int size=sizeof(balance)/sizeof(balance[0]);
    // pass pointer to the array as an argument.
    avg = getAverage(balance, size);
    // output the returned value
    cout << "Average value is: " << avg << endl;
    return 0;
}
