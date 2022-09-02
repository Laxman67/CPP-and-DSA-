#include <iostream>
using namespace std;
int main()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // WE CAN USE SAME AS ARRAY

    cout << "Using Loop " << endl;

    // int size = sizeof(greeting) / greeting[0];

    // cout<<size;

    int size=6;

    for (int i = 0; i < size; i++)
    {
        cout << greeting[i] << " \'  " ;
    }

    return 0;
}