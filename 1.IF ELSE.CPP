#include<stdio.h>

using namespace std;

int main(){
	
	printf("If-Else Condition.....!\n");
	printf("\n");
	
	
	//10th = 10, 12th=12, Dca=13, 2nd sem= 14, bca=15;
	
	int age=21,Qualification_code=15;
	
	if(age>18 && Qualification_code>13 ){
		
		printf("  .....Hey <candidate Name> Congrats...\n\n ");
		
		printf("You're Eligible to Apply for TCS Job Vacancy...'");
	}
	else{
		printf("You're  (NOT) Eligible to Apply for TCS Job Vacancy...'");
	}
	
}
