#include<stdio.h>
#include<string.h>
char Convert_Lowercase_Alphabets_Into_Uppercase(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Convert_Lowercase_Alphabets_Into_Uppercase(str);
    printf("\n");
    return 0;
}
char Convert_Lowercase_Alphabets_Into_Uppercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf(str);
}