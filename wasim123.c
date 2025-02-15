#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        printf("%d\n",n);
        n--;
    }
    printf("\n");
    return 0;
}