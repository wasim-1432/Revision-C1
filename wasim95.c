#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
    {
        printf("Divisible by 7 or 3");
    }
    else 
    {
        printf("Not Divisible by 7 or 3");
    }
    printf("\n");
    return 0;
}