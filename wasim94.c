#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)
    {
        printf("Divisible by 3 and 2");
    }
    else
    {
        printf("Not Divisible by 3 and 2");
    }
    printf("\n");
    return 0;
}