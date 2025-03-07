#include<stdio.h>
#include<string.h>
int Convert_First_Word_Capital_In_A_Given_string(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Convert_First_Word_Capital_In_A_Given_string(str);
    printf("\n");
    return 0;
}
int Convert_First_Word_Capital_In_A_Given_string(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(i==0)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
        if(str[i]==' ')
        {
            i++;
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
    }
    printf(str);
}