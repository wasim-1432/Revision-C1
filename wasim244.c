#include<stdio.h>
int Check_Whether_A_Given_Number_Is_Armstrong_Number_Or_Not(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Check_Whether_A_Given_Number_Is_Armstrong_Number_Or_Not(a);
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_Number_Is_Armstrong_Number_Or_Not(int a)
{
    int l,r,t,count=0,sum=0;
    t=a;
    while(t)
    {
        count++;
        t=t/10;
    }
    int s=a;
    while(s)
    {
        r=s%10;
        l=1;
        for(int j=1;j<=count;j++)
        {
            l=l*r;
        }
        sum=sum+l;
        s=s/10;
    }
    if(sum==a)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
}