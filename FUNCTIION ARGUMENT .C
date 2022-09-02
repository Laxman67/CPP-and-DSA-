#include <stdio.h>
#include <string.h>
struct Books
{
 char title[50];
 char author[50];
 char subject[100];
 int book_id;
};

/* function declaration */
void printBook( struct Books parameter );


int main( )
{
 struct Books Book1,Book2; 
 
 printf("Printing Book 1 Details:\n");
 
 
 strcpy( Book1.title, " C Programming");
 strcpy( Book1.author, "Nuha Ali");
 strcpy( Book1.subject, "C Programming Tutorial");
 Book1.book_id = 6495407;
 
  printBook( Book1 );
 
 
  printf("Printing Book 2 Details:\n");
  
  
 strcpy( Book2.title, "Telecom Billing");
 strcpy( Book2.author, "Zara Ali");
 strcpy( Book2.subject, "Telecom Billing Tutorial");
 Book2.book_id = 6495700;
 


 printBook( Book2 );
 return 0;
}


void printBook( struct Books parameter )
{
 printf( "Book title : %s\n",  parameter.title);  //parameter.title = Book1.title
 printf( "Book author : %s\n", parameter.author);
 printf( "Book subject : %s\n",  parameter.subject);
 printf( "Book book_id : %d\n",  parameter.book_id);

}
