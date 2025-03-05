#include<stdio.h>
int Count_Frequency_Of_Each_Elements(int arr[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array's elements\n");
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    Count_Frequency_Of_Each_Elements(arr,size);
    printf("\n");
    return 0;
}
int Count_Frequency_Of_Each_Elements(int arr[],int size)
{
    int i,round,count;
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
    count=1;
    printf("Frequency of each elements in the array\n");
    for(i=0;i<=size-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else if(arr[i]!=arr[i+1])
        {
            printf("%d-%d\n",arr[i],count);
            count=1;
        }
    }
}