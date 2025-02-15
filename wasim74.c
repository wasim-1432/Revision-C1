#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a/2*2==a)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    printf("\n");
    return 0;
}