#include<stdio.h>
int c = 0;

void count(int number){
  if(number==0)
  {
    
  printf("%d ",c);
        return;
  }
  number = number / 10;
  c++;
  count(number);
}


int main()
{   
    int number = 1234544444;
    count(number);
    return 0;
}