#include <stdio.h>
int i = 0;
int temp= 0;
void sumOfDigits(int number){
    if(number == 0){
        printf("%d ",temp);
        return;
    }

    else{
        temp = temp+(number%10);
        number = number/10;
        i++;
        sumOfDigits(number);
    }
}

int main(){
    int number = 111111111;
    sumOfDigits(number);
    return 0;
}