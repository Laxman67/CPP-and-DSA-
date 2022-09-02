#include <iostream>
using namespace std;

struct Student

{

    // POINT TO BE REMEMBER = Struct Data Member are stored in Sequence always that's why we vcan use {109, "Laxman", "Batala"}; in LINE 19
    int roll_no;
    string name;
    string address;
};

int main()
{

    // initialization on sequence

    Student S = {109, "Laxman", "Batala"}; // initialization of struct-> Must Be In Seqence

    cout << S.name << " "
         << S.address << " "
         << S.roll_no << endl;

    return 0;
}