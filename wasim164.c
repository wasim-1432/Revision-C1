#include<stdio.h>
int main()
{
    int n,t,count=0,r,sum=0,y;
    printf("Enter any number\n");
    scanf("%d",&n);
    t=n;
    while(t)
    {
        count++;
        t=t/10;
    }
    for(y=n;y!=0;y=y/10)
    {
        r=y%10;
        int p=1;
        for(int i=1;i<=count;i++)
        {
            p=p*r;
        }
        sum=sum+p;
    }
    if(sum==n)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstron Number");
    }
    printf("\n");
    return 0;
}