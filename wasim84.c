#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year\n");
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap year");
        }
    }
    else
    {
        if(a%4==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
    printf("\n");
    return 0;
}