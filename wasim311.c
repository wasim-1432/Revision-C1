#include<stdio.h>
int Find_Greatest_Number_From_The_Array(int arr[],int size);
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
    printf("Greatest Number is=%d",Find_Greatest_Number_From_The_Array(arr,size));
    printf("\n");
    return 0;
}
int Find_Greatest_Number_From_The_Array(int arr[],int size)
{
    int i;
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
    return arr[size-1];
}