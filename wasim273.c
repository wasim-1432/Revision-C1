#include<stdio.h>
int Print_Sum_of_First_N_Even_Natural_Numbers_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Sum of Even numbers is=%d",Print_Sum_of_First_N_Even_Natural_Numbers_Using_Recursion(a));
    printf("\n");
    return 0;
}
int Print_Sum_of_First_N_Even_Natural_Numbers_Using_Recursion(int a)
{
    if(a!=0)
    {
        return 2*a+Print_Sum_of_First_N_Even_Natural_Numbers_Using_Recursion(a-1);
    }
}