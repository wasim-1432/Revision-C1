#include<stdio.h>
int Print_N_Rows_Of_Pascals_Triangle(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_N_Rows_Of_Pascals_Triangle(n);
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
int Print_N_Rows_Of_Pascals_Triangle(int n)
{
    int i,j,k,t;
    for(i=1;i<=n;i++)
    {
        k=1;
        t=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i && k)
            {
                printf("%d",Fact(i-1)/Fact(i-1-t)/Fact(t));
                t++;
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}