#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int result;
int Add(int a, int b)
{
    result = a + b;
    return result; 
}
int Subtract(int a, int b)
{
    result = a-b ;
    return result;
}
int Divide(int a, int b)
{
    result = a/b ;
    return result;
}
int Multiply(int a, int b)
{
    result = a*b ;
    return result;
}

int main(){
 int firstnumber, secondnumber, breaking=0;
   
 while(breaking==0){
    system("cls");
printf("enter the  first number \n");
scanf("%d",&firstnumber);
printf("enter the  secound number \n");
scanf("%d",&secondnumber);

printf("choose the operation \n");
printf(" press 1  for ADD \n");
printf("press 2  for SUBTRACT \n");
printf("press 3 for DIVIDE \n");
printf("press 4  for MULTIPLY \n");

int operation;
scanf("%d",&operation);

if(operation==1)
{
    Add(firstnumber, secondnumber);
}
else if(operation==2)
{
    Subtract(firstnumber, secondnumber);
}
else if(operation==3)
{
    Divide(firstnumber, secondnumber);
}
else if(operation==4)
{
    Multiply(firstnumber, secondnumber);
}
else
{
    printf("Enter operation is invalid");
}

printf("the result is : %d \n",result);
getch();

}
 getch();
 return 0;
}

