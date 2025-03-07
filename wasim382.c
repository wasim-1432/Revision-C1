#include<stdio.h>
#include<string.h>
int Remove_Trim_Spaces(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Remove_Trim_Spaces(str);
    printf("\n");
    return 0;
}
int Remove_Trim_Spaces(char str[])
{
    int i,l1,l;
    char temp[50];
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
        {
            break;
        }
    }
    if(str[i]!='\0')
    {
        strcpy(temp,str+i);
    }
    for(i=0;temp[i];i++);
    while(temp[i]==' ')
    {
        i--;
    }
    temp[i]='\0';
    strcpy(str,temp);
    printf(str);
}