#include<stdio.h>
int main()
{
    int i,j,M[3][3],M1[3][3],M2[3][3],k;
    printf("Enter the first Matrix elements\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("Enter the second Matrix elements\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }
    printf("Multiplication of two given Matrices is\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            int sum=0;
            for(k=0;k<=2;k++)
            {
                sum=sum+M[i][k]*M1[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}