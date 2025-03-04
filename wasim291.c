#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("Enter any 10 numbers\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum is=%d",sum);
    printf("\n");
    return 0;
}