#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase Alphabet");
    }
    printf("\n");
    return 0;
}