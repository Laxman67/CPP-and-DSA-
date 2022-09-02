#include <iostream>
using namespace std;


class A{

    int x, y;
    public:
     A(int a, int b){
        x=a;
        y=b;

     }

    A(A &obj_ref){

        x =obj_ref.x; // setting though reference 
        y=obj_ref.y;



    }

    void display(){
        cout<< "value of x and y is : "<<x<<" "<<y<<endl;
    }

};

int main()
{


A obj(200,900);
obj.display(); // default constructor 

A obj2=obj; // copy one object to another object


obj2.display();







return 0;
}