#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Non positive number");
    }
    printf("\n");
    return 0;
}