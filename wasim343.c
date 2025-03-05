#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],temp;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int l,round,i,count=1;
    l=strlen(str);
    for(round=1;round<=l-1;round++)
    {
        for(i=0;i<=l-round-1;i++)
        {
            if(str[i]>str[i+1])
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
    for(i=0;str[i];i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            printf("%c - %d\n",str[i],count);
            count=1;
            continue;
        }
    }
    printf("\n");
    return 0;
}