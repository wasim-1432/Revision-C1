#include<stdio.h>
int Print_First_N_Fibonacci_Series(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_First_N_Fibonacci_Series(n);
    printf("\n");
    return 0;
}
int Print_First_N_Fibonacci_Series(int n)
{
    int a=0,b=1,s=0;
    while(s<=n)
    {
        printf("%d ",s);
        a=b;
        b=s;
        s=a+b;
    }
}