#include<stdio.h>
int Calculate_Factorial_Of_A_Given_Number_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Factorial of a given number is=%d",Calculate_Factorial_Of_A_Given_Number_Using_Recursion(a));
    printf("\n");
    return 0;
}
int Calculate_Factorial_Of_A_Given_Number_Using_Recursion(int a)
{
    if(a!=1)
    {
        return a*Calculate_Factorial_Of_A_Given_Number_Using_Recursion(a-1);
    }
}