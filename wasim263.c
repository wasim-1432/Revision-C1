#include<stdio.h>
int Print_Binary_Number_Of_Given_Decimal_Number_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Print_Binary_Number_Of_Given_Decimal_Number_Using_Recursion(a);
    printf("\n");
    return 0;
}
int Print_Binary_Number_Of_Given_Decimal_Number_Using_Recursion(int a)
{
    if(a!=0)
    {
        Print_Binary_Number_Of_Given_Decimal_Number_Using_Recursion(a/2);
        printf("%d",a%2);
    }
}