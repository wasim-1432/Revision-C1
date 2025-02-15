#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is greater",a);
    }
    else if(a==b)
    {
        printf("%d both number same",a);
    }
    else
    {
        printf("%d is greater",b);
    }
    printf("\n");
    return 0;
}