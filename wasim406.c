#include<stdio.h>
#include<string.h>
int Store_Each_Word_In_A_2D_Char_Array(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][20];
    Store_Each_Word_In_A_2D_Char_Array(str,n);
    printf("\n");
    return 0;
}
int Store_Each_Word_In_A_2D_Char_Array(char str[][20],int n)
{
    int i,l;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    for(i=0;i<=n;i++)
    {
        printf("\n%s",str[i]);
    }
}