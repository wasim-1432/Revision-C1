#include<stdio.h>
#include<string.h>
int convert_Uppercase_Alphabets_Into_Lowercase(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    convert_Uppercase_Alphabets_Into_Lowercase(str);
    printf("\n");
    return 0;
}
int convert_Uppercase_Alphabets_Into_Lowercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf(str);
}