#include<stdio.h>
int main()
{
    int n,s=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        s=s*n;
        n--;
    }
    printf("Factorial is=%d",s);
    printf("\n");
    return 0;
}