#include<stdio.h>
int Count_Digits_In_A_Given_Number_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Total Digits in a given number=%d",Count_Digits_In_A_Given_Number_Using_Recursion(a));
    printf("\n");
    return 0;
}
int Count_Digits_In_A_Given_Number_Using_Recursion(int a)
{
    if(a!=0)
    {
        return Count_Digits_In_A_Given_Number_Using_Recursion(a/10)+1;
    }
}