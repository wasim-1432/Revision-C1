#include<stdio.h>
int Print_All_Prime_Factors(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_All_Prime_Factors(n);
    printf("\n");
    return 0;
}
int Print_All_Prime_Factors(int n)
{
    int i=2,s=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n/=i;
            continue;
        }
        i++;
    }
}