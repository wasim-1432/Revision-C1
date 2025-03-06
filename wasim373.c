#include<stdio.h>
#include<string.h>
int Find_Character_Between_Given_Specified_Indeces(char str[],char ch,int a,int b);
int main()
{
    char str[30],ch;
    int a,b;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    printf("Enter starting and ending specified indeces\n");
    scanf("%d%d",&a,&b);
    if(Find_Character_Between_Given_Specified_Indeces(str,ch,a,b)!=-1)
    {
        printf("First Occurrence index is=%d",Find_Character_Between_Given_Specified_Indeces(str,ch,a,b));
    }
    else
    {
        printf("Not found");
    }
    printf("\n");
    return 0;
}
int Find_Character_Between_Given_Specified_Indeces(char str[],char ch,int a,int b)
{
    int i;
    for(i=a;i<=b;i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    if(str[i]!=ch)
    {
        return -1;
    }
}