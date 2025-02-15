#include<stdio.h>
int main()
{
    float inr;
    printf("Enter the INR value\n");
    scanf("%f",&inr);
    printf("Convert in USD=%f",inr/84.23);
    printf("\n");
    return 0;
}