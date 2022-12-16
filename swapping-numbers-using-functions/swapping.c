#include <stdio.h>
int swap();
int main()
{

    int a = 10;
    int b = 20;

    swap(a, b);
 printf("%d",a);
 printf("%d",b);
 
    return 0;
}

int swap(int a, int b)
{
    a = a + b;
    b = a - b ;
    a = a - b;

    return ( a, b );
}