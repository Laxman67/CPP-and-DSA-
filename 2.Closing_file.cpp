#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    fstream file2;
    fstream file1;

    file1.open("sampleFile.txt"); // open file

    file1.close(); // close file

    return 0;
}