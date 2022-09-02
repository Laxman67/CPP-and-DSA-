#include<iostream>
using namespace std;

void display(int  a, int b);


int main(){

	int age[]={22,56,76,78};

	
	display(age[2],age[3]);
	
	
	
}

void display(int a, int b){
	
	 cout<<"The Second element of Array is :";
	 cout<<a;
	 cout<<"\n The Third Element of Array  is: ";
	 cout<<b;
}
