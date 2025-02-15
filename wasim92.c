#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of Physics,Chemistry,Math,English & Hindi\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
    {
        printf("Ypu are passed");
    }
    else
    {
        printf("You are failed");
    }
    printf("\n");
    return 0;
}