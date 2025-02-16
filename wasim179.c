#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=64+i;
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}