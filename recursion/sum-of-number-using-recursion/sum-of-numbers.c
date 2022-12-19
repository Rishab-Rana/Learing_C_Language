#include <stdio.h>

int printSum(int x, int i, int sum)
{
    if (i == x+1)
    {
        printf("%d ", sum);
    }
    else
    {
        sum = sum + i;
        i++;
       printSum(x, i, sum);
    }
}

int main()
{
    int x = 5;
    int i = 1;
    int sum = 0;
    printSum(x, i, sum);
}