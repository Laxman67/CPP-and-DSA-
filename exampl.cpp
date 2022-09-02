#include<iostream>
using namespace std;

int SumofArray(int num[]);


int main(){
	
	int Array[]={20,89,90,89,97};
	
	int result=SumofArray(num);
	cout<<"The sum is : ";
	cout<<result;  
	
}

int SumofArray(int num[]){
	int sum=0;
	
	for(int i=0;i<8;++i){
		
		sum+=num[i];
	}
	return sum;
	
	
}
