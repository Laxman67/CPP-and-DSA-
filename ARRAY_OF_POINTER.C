#include <stdio.h>
const int MAX = 3;


int main()
{
    int var[] = {10, 100, 200};
    int i=0;

    int size=sizeof(var)/sizeof(var[0]);

    for (i ; i <size; i++)
    {
        printf("Value of var[%d] = %d\n", i, var[i]);
    }
    return 0;
}
