#include <stdio.h>
#include <string.h>
struct
{
 unsigned int age : 5;
} Age;


int main( )
{
 Age.age = 4;
 printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
 printf( "Age.age : %d\n", Age.age );
 Age.age = 7;
 printf( "Age.age : %d\n", Age.age );
 Age.age = 31;
 printf( "Age.age : %d\n", Age.age );
 return 0;
}

