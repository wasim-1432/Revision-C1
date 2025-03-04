#include<stdio.h>
int Find_Smallest_Number_From_The_Given_Array(int arr[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter a element of the array\n");
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Smallest Number in the given array is=%d",Find_Smallest_Number_From_The_Given_Array(arr,size));
    printf("\n");
    return 0;
}
int Find_Smallest_Number_From_The_Given_Array(int arr[],int size)
{
    int i,round;
    for(round=0;round<=size-1;round++)
    {
        for(i=0;i<=size-1;i++)
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
    return arr[0];
}