#include<stdio.h>
#include<string.h>
void Store_A_Given_String_In_2D_Array(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Store_A_Given_String_In_2D_Array(str);
    printf("\n");
    return 0;
}
int Count_Total_Words_In_Given_Strings(char str[])
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
void Store_A_Given_String_In_2D_Array(char str[])
{
    int l,i,j=0,k;
    char str1[l][30];
    l=Count_Total_Words_In_Given_Strings(str);
    for(i=0;i<l;i++)
    {
        k=0;
        while(str[j]!=' ' && str[j]!='\0')
        {
            str1[i][k++]=str[j++];
        }
        str1[i][k]='\0';
        if(str[j]==' ')
        {
            j++;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%s",str1[i]);
    }
}