#include<stdio.h>
int calculate_Arrangement(int n,int r);
int Fact(int n);
int main()
{
    int n,r;
    printf("Enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    printf("Combination is=%d",calculate_Arrangement(n,r));
    printf("\n");
    return 0;
}
int Fact(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}
int calculate_Arrangement(int n,int r)
{
    if(n>r)
    {
        return Fact(n)/Fact(n-r);
    }
    else
    {
        return 0;
    }
}