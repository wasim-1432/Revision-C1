#include<stdio.h>
int Print_Squares_Of_First_N_Natural_Numbers_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Print_Squares_Of_First_N_Natural_Numbers_Using_Recursion(a);
    printf("\n");
    return 0;
}
int Print_Squares_Of_First_N_Natural_Numbers_Using_Recursion(int a)
{
    if(a!=0)
    {
        Print_Squares_Of_First_N_Natural_Numbers_Using_Recursion(a-1);
        printf("%d ",a*a);
    }
}