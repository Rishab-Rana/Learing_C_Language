#include <stdio.h>
#include <math.h>

void printNumbers(int x, int i){
    
if(i==50){
    return;
}
else{
    printf("%d \n", i+1);
    i++;
    printNumbers(x, i);
}
}

int main(){
    int a=50;
    int i=0;
    printNumbers(a,i);
    return 0;
}

