#include <stdio.h>
int i = 0;
int point;
void findGratestElement(int array[], int size)
{
    if (size == i)
    {
       printf("%d \n",point);
        return;
    }
    else
    {
        if (point > array[i + 1])
        {

        }
        else
        {
            point = array[i + 1];
            
        }
        i++;
        findGratestElement(array,size);
    }
}

int main()
{
    int array[7] = {1,20,3,10,5,6,7};
    int size = sizeof(array)/sizeof(array[0]);
    point = array[0];
    findGratestElement(array , size);
    return 0;
}