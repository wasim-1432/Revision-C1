#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides value of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    printf("\n");
    return 0;
}