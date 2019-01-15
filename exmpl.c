#include <stdio.h>

int * increment(int *p)
{
    *p = *p +1;
}

int main()
{
    int a = 10;

    increment(&a);

    printf("The value of a is: %d",a);

    return 0;
}
