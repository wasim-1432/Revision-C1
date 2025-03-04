#include<stdio.h>
int Calcualte_HCF_Of_Given_Two_Numbers_Using_Recursion(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("HCF is=%d",Calcualte_HCF_Of_Given_Two_Numbers_Using_Recursion(a,b));
    printf("\n");
    return 0;
}
int Calcualte_HCF_Of_Given_Two_Numbers_Using_Recursion(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
        {
            return b;
        }
        return Calcualte_HCF_Of_Given_Two_Numbers_Using_Recursion(a%b,b);
    }
    else
    {
        if(b%a==0)
        {
            return a;
        }
        return Calcualte_HCF_Of_Given_Two_Numbers_Using_Recursion(a,b%a);
    }
}