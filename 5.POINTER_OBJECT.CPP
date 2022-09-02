#include <iostream>
using namespace std;

class Demo
{
public:

void show(){
    cout<<" \n Hellow from show function";
}
void show1(){
    cout<<" \n Hllow from show1 function";
}


};

int main()
{

Demo d;


Demo *ptr =&d; //pointr  to object

d.show();

ptr->show();
ptr->show1();

//OR 

(&d)->show();
(&d)->show1();

//OR
(*ptr).show();
(*ptr).show1();






    return 0;
}