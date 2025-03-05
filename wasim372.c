#include<stdio.h>
#include<string.h>
int Find_First_Occurrence_Of_Given_Character_In_A_Given_String(char str[],char ch);
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    if(Find_First_Occurrence_Of_Given_Character_In_A_Given_String(str,ch)!=-1)
    {
        printf("Index is=%d",Find_First_Occurrence_Of_Given_Character_In_A_Given_String(str,ch));
    }
    else
    {
        printf("Not Found");
    }
    printf("\n");
    return 0;
}
int Find_First_Occurrence_Of_Given_Character_In_A_Given_String(char str[],char ch)
{
    int i;
    for(i=0;str[i];i++)
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