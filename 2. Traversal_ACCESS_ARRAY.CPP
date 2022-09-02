#include <iostream>
using namespace std;
int main()
{
    // Array can be access by their index number

    int arr[4] = {10, 20, 30, 40};

    // lenght =4
    // first index=0
    // last index= (4-1) = 3

    // TRAVERSAL : Is a method/ process to visit each and every element in an  container

    // SIMPLE ACCESS

    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    // Traversal can be done using 2 methods

    // 1)  Using -> Normal Loop
    // 2) Using -> Rang Based Loop

    // 1)  Using -> Normal Loop

    // sizze of array
   int n1 =sizeof(arr)/sizeof(arr[0]);

       for (int  i = 0; i < n1 ; i++)
        {
         cout<<"\nNew Using Loop : "<<arr[i]<<" ";
       }



// 2) Using -> Rang Based Loop

cout<<"\nUsing Range Based:\n ";

for(int x:arr){
	cout<<x<<" ";
}







    return 0;
}
