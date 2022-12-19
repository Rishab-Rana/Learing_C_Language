#include <stdio.h>
int i= 0;

void reverseString(char ch[], int size){
    if(size+1==0){
        return;
    }
    else {
        printf("%c", ch[size]);
        size--;
        reverseString(ch, size);
    }
}

int main(){
    char ch[]= "hello world";
    int size = sizeof(ch)/sizeof(char);
    printf("%d", size);
    reverseString(ch,size);
    return 0;
}   