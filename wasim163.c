#include<stdio.h>
int main()
{
    int n,a=0,b=1,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        s=a+b;
        a=b;
        b=s;
        n--;
    }
    printf("Last Fibonacci number=%d",s);
    printf("\n");
    return 0;
}