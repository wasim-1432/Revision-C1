#include<stdio.h>
#include<string.h>
int Compare_Two_Given_String(char str[],char ctr[]);
int main()
{
    char str[30],ctr[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter second string\n");
    fgets(ctr,30,stdin);
    ctr[strlen(ctr)-1]='\0';
    printf("%d",Compare_Two_Given_String(str,ctr));
    printf("\n");
    return 0;
}
int Compare_Two_Given_String(char str[],char ctr[])
{
    return strcmp(str,ctr);
}