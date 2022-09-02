#include<iostream>
#include<stdio.h>
 using namespace std;

int main(){
//	printf("Enter your age:\n");
int age;
	cout<<"====>Enter your age:<==== \n";
	cin>>age;
	cout<<"Your age is "<<age<<"\n";
	
	if(age>=20){
		goto result;
		
		result:
			cout<<"You're Eligible\n";
		
		
	}
	
	else{
		cout<<"Kick Off";
	}
	
}
