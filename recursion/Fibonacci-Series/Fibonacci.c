#include <stdio.h>
void Fibonacci(int i, int firstnumber, int secondnumber,int nextnumber){
    if(i==9)
    {
        return;
    }
    else{
        nextnumber = firstnumber + secondnumber;
        i++;
        secondnumber = firstnumber;
        firstnumber = nextnumber;
        printf("%d ",nextnumber);
        Fibonacci(i,firstnumber,secondnumber,nextnumber);
        
    }
}

int main(){
    
    int limit = 10;
    int i = 1;
    int firstnumber = 1;
    int secondnumber = 1;
    int nextnumber;
     printf("%d %d " , firstnumber ,secondnumber  );
    Fibonacci(i,firstnumber,secondnumber,nextnumber);
    return 0;
}