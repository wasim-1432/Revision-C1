#include<stdio.h>
int Print_Octal_Number_Of_Given_Decimal_Number_Using_Recursion(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Print_Octal_Number_Of_Given_Decimal_Number_Using_Recursion(a);
    printf("\n");
    return 0;
}
int Print_Octal_Number_Of_Given_Decimal_Number_Using_Recursion(int a)
{
    if(a!=0)
    {
        Print_Octal_Number_Of_Given_Decimal_Number_Using_Recursion(a/8);
        printf("%d",a%8);
    }
}