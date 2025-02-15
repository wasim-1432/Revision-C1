#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter the value of p,r,t\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple interest is=%f",(p*r*t)/100.0);
    printf("\n");
    return 0;
}