#include<stdio.h>
int Print_First_N_Natural_Odd_Numbers_In_Reverse_Order_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Print_First_N_Natural_Odd_Numbers_In_Reverse_Order_Using_Recursion(a);
    printf("\n");
    return 0;
}
int Print_First_N_Natural_Odd_Numbers_In_Reverse_Order_Using_Recursion(int a)
{
    if(a!=0)
    {
        printf("%d ",2*a-1);
        Print_First_N_Natural_Odd_Numbers_In_Reverse_Order_Using_Recursion(a-1);
    }
}