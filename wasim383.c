#include<stdio.h>
#include<string.h>
int Count_Words_In_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Total Words In A Given String=%d",Count_Words_In_A_Given_String(str));
    printf("\n");
    return 0;
}
int Count_Words_In_A_Given_String(char str[])
{
    int count=0,i;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
        {
            count++;
        }
    }
    return count;
}