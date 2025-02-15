#include<stdio.h>
int main()
{
    int a,b,s=1;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    int i=2;
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
    printf("LCM is=%d",s);
    printf("\n");
    return 0;
}