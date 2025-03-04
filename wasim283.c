#include<stdio.h>
int Power_Of_Given_Number_Using_Recursion(int n,int p);
int main()
{
    int n,p;
    printf("Enter the number and power\n");
    scanf("%d%d",&n,&p);
    printf("Required Answer is=%d",Power_Of_Given_Number_Using_Recursion(n,p));
    printf("\n");
    return 0;
}
int Power_Of_Given_Number_Using_Recursion(int n,int p)
{
    if(p!=1)
    {
        return n*Power_Of_Given_Number_Using_Recursion(n,p-1);
    }
}