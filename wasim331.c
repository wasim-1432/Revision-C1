#include<stdio.h>
int main()
{
    int M[3][3],M1[3][3],i,j,M2[3][3];
    printf("Enter the first Matrix Elements\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("Enter the second Matrix Elements\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            M2[i][j]=M[i][j]+M1[i][j];
        }
    }
    printf("Required Matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}