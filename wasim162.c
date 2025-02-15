#include<stdio.h>
int main()
{
    int n,s=0,a=0,b=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(int t=0;t<=n;t++)
    {
        if(s==n)
        {
            printf("Yes! Fibonacci series");
            break;
        }
        s=a+b;
        a=b;
        b=s;
    }
    if(s!=n)
    {
        printf("Not Fibonacci series");
    }
    printf("\n");
    return 0;
}