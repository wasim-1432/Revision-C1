#include<stdio.h>
int Print_Armstrong_Number_Between_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    Print_Armstrong_Number_Between_Given_Two_Numbers(a,b);
    printf("\n");
    return 0;
}
int Print_Armstrong_Number_Between_Given_Two_Numbers(int a,int b)
{
    int s,count,t,m,l,r,sum;
    for(s=a;s<=b;s++)
    {
        t=s;
        count=0;
        while(t)
        {
            count++;
            t=t/10;
        }
        m=s;
        sum=0;
        while(m)
        {
            l=1;
            r=m%10;
            for(int j=1;j<=count;j++)
            {
                l=l*r;
            }
            sum=sum+l;
            m=m/10;
        }
        if(sum==s)
        {
            printf("%d ",sum);
        }
    }
}