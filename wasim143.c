#include<stdio.h>
int main()
{
    int n,i=2;
    printf("Enter any number\n");
    scanf("%d",&n);
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
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime number");
    }
    printf("\n");
    return 0;
}