#include<stdio.h>
int Print_Reverse_Of_A_Given_Number_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Print_Reverse_Of_A_Given_Number_Using_Recursion(a);
    printf("\n");
    return 0;
}
int Print_Reverse_Of_A_Given_Number_Using_Recursion(int a)
{
    if(a!=0)
    {
        printf("%d",a%10);
        Print_Reverse_Of_A_Given_Number_Using_Recursion(a/10);
    }
}