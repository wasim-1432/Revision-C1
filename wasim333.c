#include<stdio.h>
int main()
{
    int i,j,M[3][3],M1[3][3];
    printf("Enter the matrix elements\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("This is your entered matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of given Matrix is\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            M1[j][i]=M[i][j];
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",M1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}