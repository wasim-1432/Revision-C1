#include<stdio.h>
#include<string.h>
int Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(str);
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(char str[])
{
    int i,IsAlpha=0,IsDigit=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            IsAlpha=1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            IsDigit=1;
        }
    }
    if(IsAlpha==1 && IsDigit==1)
    {
        printf("Alphanumeric");
    }
    else
    {
        printf("Not Alphanumeric");
    }
}