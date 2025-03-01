#include<stdio.h>
int Calculate_LCM_Of_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two number\n");
    scanf("%d%d",&a,&b);
    printf("LCM is=%d",Calculate_LCM_Of_Two_Numbers(a,b));
    printf("\n");
    return 0;
}
int Calculate_LCM_Of_Two_Numbers(int a,int b)
{
    int i=2,s=1;
    while(a!=1 || b!=1)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
            continue;
        }
        if(a%i==0)
        {
            a=a/i;
            s=s*i;
            continue;
        }
        if(b%i==0)
        {
            b=b/i;
            s=s*i;
            continue;
        }
        i++;
    }
    return s;
}