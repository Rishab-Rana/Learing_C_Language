#include <stdio.h>
int sqareNumber;
int cubeNumber;

int square(int number)
{
    sqareNumber = (number * number);
    return sqareNumber;
}
int cube(int number)
{
    cubeNumber = (number * number * number);
    return cubeNumber;
}
int main()
{
    int number;
    int a;
    scanf("%d", &number);
    a = square(number);
    printf("square is : %d \n", sqareNumber);
    int b = cube(number);
    printf("Cube is : %d \n", b);
    return 0;
}
