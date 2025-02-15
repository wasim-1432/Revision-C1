#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character\n");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(a>='a' && a<='z')
    {
        printf("Lowercase Alphabet");
    }
    else if(a>='0' && a<='9')
    {
        printf("Digits");
    }
    else
    {
        printf("Special Character");
    }
    printf("\n");
    return 0;
}