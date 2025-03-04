#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter any 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    printf("Max number is=%d",arr[9]);
    printf("\n");
    return 0;
}