#include<stdio.h>
int Calculate_Factorial_Of_A_Given_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Factorial of given number is=%d",Calculate_Factorial_Of_A_Given_Number(n));
    printf("\n");
    return 0;
}
int Calculate_Factorial_Of_A_Given_Number(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}