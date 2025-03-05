#include<stdio.h>
int Merge_Two_Same_Size_Arrays(int arr1[],int arr2[],int size);
int main()
{
    int i,size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    printf("Enter the first array's Elements\n");
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the second array's Elements\n");
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr2[i]);
    }
    Merge_Two_Same_Size_Arrays(arr1,arr2,size);
    printf("\n");
    return 0;
}
int Merge_Two_Same_Size_Arrays(int arr1[],int arr2[],int size)
{
    int i,j,arr3[2*size],round;
    for(i=0;i<=size-1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(j=0;j<=size-1;j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    for(i=0;i<=2*size-1;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\nIn Descending Order\n");
    for(round=1;round<=2*size-1;round++)
    {
        for(i=0;i<=2*size-round-1;i++)
        {
            if(arr3[i]<arr3[i+1])
            {
                int temp;
                temp=arr3[i];
                arr3[i]=arr3[i+1];
                arr3[i+1]=temp;
            }
        }
    }
    for(i=0;i<=2*size-1;i++)
    {
        printf("%d ",arr3[i]);
    }
}