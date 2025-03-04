#include<stdio.h>
int main()
{
    int arr[10],i,round;
    printf("Enter any number\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(round=0;round<=8;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("Second smallest number in the array=%d",arr[1]);
    printf("\n");
    return 0;
}