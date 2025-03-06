#include<stdio.h>
#include<string.h>
char Swap_Two_Character_Given_Between_Two_Specified_Indices(char str[],int a,int b);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int a,b;
    printf("Enter two indices for swapping\n");
    scanf("%d%d",&a,&b);
    Swap_Two_Character_Given_Between_Two_Specified_Indices(str,a,b);
    printf("\n");
    return 0;
}
char Swap_Two_Character_Given_Between_Two_Specified_Indices(char str[],int a,int b)
{
    int l;
    l=strlen(str);
    if(a<0 && b>l)
    {
        printf("Invalid Index");
    }
    else
    {
        char temp;
        temp=str[a];
        str[a]=str[b];
        str[b]=temp;
    }
    int i;
    for(i=0;str[i];i++)
    {
        if(a<0 && b>l)
        {
            break;
        }
        printf("%c",str[i]);
    }
}