#include<stdio.h>
int main()
{
    int i;
    printf("Prime Number is\n");
    for(int n=0;n<=100;n++)
    {
        i=2;
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