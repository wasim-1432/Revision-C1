#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Next Prime number is=");
    for(int n=a+1;;n++)
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
            break;
        }
    }
    printf("\n");
    return 0;
}