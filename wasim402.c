#include<stdio.h>
#include<string.h>
void Store_Given_Strings_In_2D_Arrays(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][20];
    Store_Given_Strings_In_2D_Arrays(str,n);
    printf("\n");
    return 0;
}
void Store_Given_Strings_In_2D_Arrays(char str[][20],int n)
{
    int i,l;
    printf("Enter your string\n");
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    for(i=0;i<=n;i++)
    {
        printf("%s",str[i]);
    }
}