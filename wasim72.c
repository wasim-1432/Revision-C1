#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("Divisible by 5");
    }
    if(a%5!=0)
    {
        printf("Not divisible by 5");
    }
    printf("\n");
    return 0;
}