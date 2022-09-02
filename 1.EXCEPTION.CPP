#include <iostream>
using namespace std;
int main()
{


int x, y, mul;

cout<<"Enter x and y "<<endl;

cin>>x >>y;


try
{
   if(y==0)
   throw 0;
   
   cout<<"Multipication of x and y is : "<<(x*y)<<endl;

}
catch(int &a)
{
   cout<<"Y should  not ne Zero\n";
}


	

return 0;


}
