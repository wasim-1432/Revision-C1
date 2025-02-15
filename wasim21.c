#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average of given numbers=%f",(a+b+c)/3.0);
    printf("\n");
    return 0;
}