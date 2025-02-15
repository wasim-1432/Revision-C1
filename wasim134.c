#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        s=s+n*n;
        n--;
    }
    printf("Sm is=%d",s);
    printf("\n");
    return 0;
}