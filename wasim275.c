#include<stdio.h>
int Sum_Of_Digits_Of_A_Given_Numbers_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Sum of digits=%d",Sum_Of_Digits_Of_A_Given_Numbers_Using_Recursion(a));
    printf("\n");
    return 0;
}
int Sum_Of_Digits_Of_A_Given_Numbers_Using_Recursion(int a)
{
    if(a!=0)
    {
        return a%10+Sum_Of_Digits_Of_A_Given_Numbers_Using_Recursion(a/10);
    }
}