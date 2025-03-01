#include<stdio.h>
int Calculate_HCF_Of_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("HCF is=%d",Calculate_HCF_Of_Given_Two_Numbers(a,b));
    printf("\n");
    return 0;
}
int Calculate_HCF_Of_Given_Two_Numbers(int a,int b)
{
    int i=2,s=1;
    while(a%i==0 || b%i==0)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
            continue;
        }
        i++;
    }
    return s;
}