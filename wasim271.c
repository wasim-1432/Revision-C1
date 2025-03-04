#include<stdio.h>
int Calculate_Sum_Of_First_N_Namtural_Numbers_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Sum is=%d",Calculate_Sum_Of_First_N_Namtural_Numbers_Using_Recursion(a));
    printf("\n");
    return 0;
}
int Calculate_Sum_Of_First_N_Namtural_Numbers_Using_Recursion(int a)
{
    if(a!=0)
    {
        return a+Calculate_Sum_Of_First_N_Namtural_Numbers_Using_Recursion(a-1);
    }
}