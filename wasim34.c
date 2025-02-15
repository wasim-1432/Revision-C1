#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Last digit of given number=%d",a%10);
    printf("\n");
    return 0;
}