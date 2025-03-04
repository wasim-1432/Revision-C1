#include<stdio.h>
int Print_Sum_Of_Given_Number_Like_Factorial_Upon_Simple_Number(int a);
int Fact_Of_Given_Number(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Required Answer is=%d",Print_Sum_Of_Given_Number_Like_Factorial_Upon_Simple_Number(a));
    printf("\n");
    return 0;
}
int Fact_Of_Given_Number(int a)
{
    int s=1;
    while(a)
    {
        s=s*a;
        a--;
    }
    return s;
}
int Print_Sum_Of_Given_Number_Like_Factorial_Upon_Simple_Number(int a)
{
    int sum=0,i=1;
    while(i<=a)
    {
        sum=sum+Fact_Of_Given_Number(i)/i;
        i++;
    }
    return sum;
}