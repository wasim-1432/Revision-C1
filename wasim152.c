#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the starting and ending points of prime number\n");
    scanf("%d%d",&a,&b);
    for(int n=a;n<=b;n++)
    {
        int i=2;
        while(i<=n)
        {
            if(n%i==0)
            {
                break;
            }
            i++;
        }
        if(n==i)
        {
            printf("%d ",n);
        }
    }
    printf("\n");
    return 0;
}