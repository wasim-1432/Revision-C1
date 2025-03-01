#include<stdio.h>
int Check_Prime_Number_Or_Not(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(Check_Prime_Number_Or_Not(n))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime number");
    }
    printf("\n");
    return 0;
}
int Check_Prime_Number_Or_Not(int n)
{
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
        {
            break;
        }
        i++;
    }
    if(n==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}