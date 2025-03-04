#include<stdio.h>
int main()
{
    int arr[10],i,brr[10];
    printf("Enter the 10 elements\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        brr[i]=arr[i];
    }
    for(i=0;i<=9;i++)
    {
        printf("%d ",brr[i]);
    }
    printf("\n");
    return 0;
}