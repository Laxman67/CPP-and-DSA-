#include <stdio.h>
#include <string.h>

union Data
{
 int i;
 float f;
 char str[20];
};


int main( )

{
 union Data data; 

 
  strcpy( data.str, "C Programming");
  
printf( "LENGTH : %d\n", sizeof(data));
  data.i = 10;
 printf( "data.i : %d\n", data.i);
 data.f = 220.5;
 printf( "data.f : %f\n", data.f);

 printf( "data.str : %s\n", data.str);
 return 0;
}
