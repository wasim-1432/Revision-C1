#include<stdio.h>
int Print_Unique_Elements_In_The_Given_Array(int arr[],int size);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for(int i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    Print_Unique_Elements_In_The_Given_Array(arr,size);
    printf("\n");
    return 0;
}
int Print_Unique_Elements_In_The_Given_Array(int arr[],int size)
{
    int i,round;
    for(round=0;round<=size-1;round++)
    {
        for(i=0;i<=size-round-1;i++)
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
    for(i=0;i<=size-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
}