#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        count++;
        n/=10;
    }
    printf("Total Digits in a given number=%d",count);
    printf("\n");
    return 0;
}