#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ch;
    int i;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            printf("First Occurrence is=%d",i);
        }
    }
    printf("\n");
    return 0;
}