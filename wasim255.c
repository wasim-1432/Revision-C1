#include<stdio.h>
int Print_First_N_Even_Natural_Numbers_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any numbers\n");
    scanf("%d",&a);
    Print_First_N_Even_Natural_Numbers_Using_Recursion(a);
    printf("\n");
    return 0;
}
int Print_First_N_Even_Natural_Numbers_Using_Recursion(int a)
{
    if(a!=0)
    {
        Print_First_N_Even_Natural_Numbers_Using_Recursion(a-1);
        printf("%d ",2*a);
    }
}