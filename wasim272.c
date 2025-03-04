#include<stdio.h>
int Print_Sum_Of_N_Odd_Natural_Numbers_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Sum of Odd numbers is=%d",Print_Sum_Of_N_Odd_Natural_Numbers_Using_Recursion(a));
    printf("\n");
    return 0;
}
int Print_Sum_Of_N_Odd_Natural_Numbers_Using_Recursion(int a)
{
    if(a!=0)
    {
        return (2*a-1)+Print_Sum_Of_N_Odd_Natural_Numbers_Using_Recursion(a-1);
    }
}