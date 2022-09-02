#include<stdio.h>
#include<string.h>

struct student_records{
	char Name[20];
	char Course[10];
	int Roll_No;
	long int Year;
}BCA,B_TECH;

void printrecords(struct student_records BCAS);

int main(){
	
	strcpy(BCA.Name,"LAXMAN");
	strcpy(BCA.Course,"BCA");
	BCA.Roll_No=22003805007;
	BCA.Year=2021-2;
	
	
	strcpy(B_TECH.Name,"ROHIT");
	strcpy(B_TECH.Course,"B.TECH");
	B_TECH.Roll_No=22078705007;
    B_TECH.Year=202-2;
	
	//ACCESS THE STRING MEMBER
printrecords( BCA );
printrecords( 	B_TECH );	
}
void printrecords(struct student_records BCAS ){
	
printf("BCA : FIRST NAME: %s\n",BCAS.Name);
printf("BCA	 : COURSE NAME: %s\n",BCAS.Course);
printf("BCA :ROLL NO: %ld\n",BCAS.Roll_No);
}




