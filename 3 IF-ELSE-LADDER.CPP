#include<stdio.h>

using namespace std;

int main(){
	
	printf("IF-ELSE-LADDER Condition.....!\n");
	printf("\n");
	
	int Marks;
	
	printf("Enter your Marks to check Eligibility ?\n");
	
	scanf("%d",&Marks);
	if(Marks>=200&&Marks<=300 ){
		
		printf("Your Marks Fall Under 200  and  300.\n");
		
	}
    else if(Marks>=300&&Marks<=400 ){
		
		printf("Your Marks Fall Under 300  and  400.\n");
		
	}
	else if(Marks>=400&&Marks<=500 ){
		
		printf("Your Marks Fall Under 400  and  500.\n");
		
	}	
	else{

	printf("Your Marks is INVALID...!\n");
		}

	
}
