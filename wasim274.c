#include<stdio.h>
int calculate_Sum_Of_Squares_Of_N_Natural_numbers_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Sum of squares of given natural numbers=%d",calculate_Sum_Of_Squares_Of_N_Natural_numbers_Using_Recursion(a));
    printf("\n");
    return 0;
}
int calculate_Sum_Of_Squares_Of_N_Natural_numbers_Using_Recursion(int a)
{
    if(a!=0)
    {
        return a*a+calculate_Sum_Of_Squares_Of_N_Natural_numbers_Using_Recursion(a-1);
    }
}