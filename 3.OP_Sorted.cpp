#include<iostream>
using namespace std;

bool Sorted_or_not(int arr[] , int n){
	for(int i=1;i<n;i++){ 
		if(arr[i]<arr[i-1])
		return false;
	}
	return true;
}


int main(){
	
	
	int arr[]={1,7,90};
	// no. of elemet
	int size=sizeof(arr)/sizeof(arr[0]);

	
	if(Sorted_or_not( arr , size)==false){
		cout<< "Not Sorted\n";
	}
	
	else{
		cout<<"Sorted";
	}
	
	return 0;
	
	
}
