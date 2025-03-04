#include<stdio.h>
int Count_Total_Number_Of_Duplicates_Element_In_The_Given_Array(int arr[],int size);
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
    Count_Total_Number_Of_Duplicates_Element_In_The_Given_Array(arr,size);
    printf("\n");
    return 0;
}
int Count_Total_Number_Of_Duplicates_Element_In_The_Given_Array(int arr[],int size)
{
    int i,round,count=0;
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
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    printf("Total duplicates element=%d",count);
}