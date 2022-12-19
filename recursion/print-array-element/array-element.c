#include <stdio.h>

int i = 0;
void printarr(int arr[])
{
    if (i == 10)
    {
        return;
    }
    else
    {
        printf("%d ", arr[i]);
        i++;
        printarr(arr);
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 44, 85, 6, 7, 88, 9, 10};
    printarr(arr);
    return 0;
}