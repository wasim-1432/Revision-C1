#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int l;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    for(l=0;str[l];l++);
    printf("Length of given string is=%d",l);
    printf("\n");
    return 0;
}