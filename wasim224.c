#include<stdio.h>
int Check_Whether_A_Given_Digits_In_Present_In_A_Given_Numbers_Or_Not(int n,int d);
int main()
{
    int n,d;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Enter the digits\n");
    scanf("%d",&d);
    if(Check_Whether_A_Given_Digits_In_Present_In_A_Given_Numbers_Or_Not(n,d))
    {
        printf("Present");
    }
    else
    {
        printf("Not Present");
    }
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_Digits_In_Present_In_A_Given_Numbers_Or_Not(int n,int d)
{
    while(n)
    {
        if(n%10==d)
        {
            return 1;
            break;
        }
        n/=10;
    }
    if(n%10!=d)
    {
        return 0;
    }  
}