#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character\n");
    scanf("%c",&a);
    printf("Next Character of given character=%c",++a);
    printf("\n");
    return 0;
}