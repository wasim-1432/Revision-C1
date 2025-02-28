#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'Z':
            printf("Uppercase Alphabet");
            break;
        case 'a' ... 'z':
            printf("Lowercase Alphabet");
            break;
        case '0' ... '9':
            printf("Digits");
            break;
        default:
            printf("Some Other Special Character");
    }
    printf("\n");
    return 0;
}