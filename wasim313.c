#include<stdio.h>
int Sort_The_Given_Array_Of_Any_Size(int arr[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    Sort_The_Given_Array_Of_Any_Size(arr,size);
    printf("\n");
    return 0;
}
int Sort_The_Given_Array_Of_Any_Size(int arr[],int size)
{
    int round,i;
    for(round=0;round<=size-2;round++)
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
        printf("%d ",arr[i]);
    }
}