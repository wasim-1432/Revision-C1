#include<stdio.h>
int main()
{
    int n,s=0,a=0,b=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(int t=0;t<=n;t++)
    {
        printf("%d ",s);
        s=a+b;
        a=b;
        b=s;
    }
    printf("\n");
    return 0;
}