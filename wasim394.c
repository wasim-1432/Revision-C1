#include<stdio.h>
#include<string.h>
char *Make_Acronym_Name_A_Given_Name(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Make_Acronym_Name_A_Given_Name(str);
    printf("\n");
    return 0;
}
int Count_Words_In_A_Given_String(char str[])
{
    int i,count=1;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    return count;
}
char *Make_Acronym_Name_A_Given_Name(char str[])
{
    int i,n,k=0,j=1;
    char temp[30];
    n=Count_Words_In_A_Given_String(str);
    if(str[0]>='a' && str[0]<='z')
    {
        temp[k]=str[0]-32;
    }
    else
    {
        temp[k]=str[0];
    }
    for(i=1;str[i];i++)
    {
        if(str[i-1]==' ')
        {
            j++;
            if(j==n)
            {
                k++;
                temp[k]=' ';
                k++;
                if(str[i]>='a' && str[i]<='z')
                {
                    temp[k]=str[i]-32;
                }
                else
                {
                    temp[k]=str[i];
                }
                for(k++,i++;str[i];i++,k++)
                {
                    temp[k]=str[i];
                }
                temp[k]='\0';
            }
            else
            {
                k++;
                temp[k]=' ';
                k++;
                if(str[i]>='a' && str[i]<='z')
                {
                    temp[k]=str[i]-32;
                }
                else
                {
                    temp[k]=str[i];
                }
            }
        }
    }
    printf(temp);
}