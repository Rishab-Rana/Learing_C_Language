#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    printf("enter i if your indian \n or \n enter f if franch \n");
    char a;
    scanf("%c", &a);

    if (a == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("Namaste");
}

void bonjour()
{
    printf("Bonjour");
}
