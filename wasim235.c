#include<stdio.h>
int Print_N_Prime_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_N_Prime_Numbers(n);
    printf("\n");
    return 0;
}
int Print_N_Prime_Numbers(int n)
{
    int i,s;
    for(s=2;s<=n;s++)
    {
        i=2;
        while(i<=s)
        {
            if(s%i==0)
            {
                break;
            }
            i++;
        }
        if(s==i)
        {
            printf("%d ",s);
        }
    }
}