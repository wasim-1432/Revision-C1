#include<stdio.h>
int Swap_Two_Elements_Of_Given_Array_With_Specified_Indeces(int arr[],int size,int a,int b);
int main()
{
    int size,a,b;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element of the array\n");
    for(int i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the two indeces for swapping two numbers\n");
    scanf("%d%d",&a,&b);
    Swap_Two_Elements_Of_Given_Array_With_Specified_Indeces(arr,size,a,b);
    printf("\n");
    return 0;
}
int Swap_Two_Elements_Of_Given_Array_With_Specified_Indeces(int arr[],int size,int a,int b)
{
    int temp,i;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    for(i=0;i<=size-1;i++)
    {
        printf("%d ",arr[i]);
    }
}