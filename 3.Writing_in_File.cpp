#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{



   
    fstream file1;

    file1.open("sampleFile.txt"); // open file

    // creating a string and filling it with string value
     char  arr[100];
    cout << "Enter your Name :";
    cin.getline(arr,100);

    // writing into file 

    file1<<arr;  // write into file 
    file1.close();
    cout<<"\nFile write operation performed successfully";
    

    return 0;
}
