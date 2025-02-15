#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        printf("%d\n",2*n-1);
        n--;
    }
    printf("\n");
    return 0;
}