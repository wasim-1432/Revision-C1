#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,l;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    for(i=0;str[i];i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}