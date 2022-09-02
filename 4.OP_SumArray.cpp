#include<iostream>
using namespace std;

int Sum(int arr[],int n){
	int sum;
	for(int i=0;i<n;i++){
		
		sum=sum+arr[i];	
		}
		
		return sum;
}

int main(){
	
	
	int arr[]={50,50,50,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum= Sum( arr,size);
	
	cout<<sum;
		
		
	

	
	return 0;
	
	
}
