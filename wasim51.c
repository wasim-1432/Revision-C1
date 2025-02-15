#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit number\n");
    scanf("%d",&a);
    printf("Sum of digits=%d",a/100+a/10%10+a%10);
    printf("\n");
    return 0;
}