#include<stdio.h>
#include<string.h>

int main(){
    char ch[10];
    char occ;
    int count=0;
    printf("enter the string \n");
    gets(ch);
    printf("Enter the character to find occarance \n");
    scanf("%c",&occ);

//cecking the occarance
int limit = strlen(ch);
printf("limit %d \n", limit);
    for(int i=0;i<=limit;i++)
    {
        if(occ == ch[i])
        {
            count++;
        }
        else{
           continue;
        }
    }
    printf("occur %d times\n",count);
    return 0;
}