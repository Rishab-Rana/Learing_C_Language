#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int *ptr;
    ptr = arr;

    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
   int sum= 0;
    while( i != size)
    {
        sum = sum + ptr[i];
        i++;
    }
    printf("%d\n",sum);
}