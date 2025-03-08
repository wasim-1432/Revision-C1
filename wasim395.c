#include<stdio.h>
#include<string.h>
char *Cancatinate_Of_Two_Given_Strings(char str1[],char str2[]);
int main()
{
    char str[30],ctr[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter second string\n");
    fgets(ctr,30,stdin);
    ctr[strlen(ctr)-1]='\0';
    Cancatinate_Of_Two_Given_Strings(str,ctr);
    printf("\n");
    return 0;
}
char *Cancatinate_Of_Two_Given_Strings(char str1[],char str2[])
{
    int i,k=-1;
    char temp[100];
    for(i=0;str1[i];i++)
    {
        k++;
        temp[k]=str1[i];
    }
    k++;
    temp[k]=' ';
    k++;
    for(i=0;str2[i];i++)
    {
        temp[k]=str2[i];
        k++;
    }
    temp[k]='\0';
    printf(temp);
}