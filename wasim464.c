#include<stdio.h>
#include<stdlib.h>
int *Merge_Given_Two_Array(int A[],int n1,int B[],int n2);
int main()
{
    int n1,n2,i;
    printf("Enter the size of first array\n");
    scanf("%d",&n1);
    int A[n1];
    printf("Enter the %d first array elements\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d",&n2);
    int B[n2];
    printf("Enter the %d elements of second array\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&B[i]);
    }
    int n3;
    int *Merged_Array=Merge_Given_Two_Array(A,n1,B,n2);
    n3=n1+n2;
    for(i=0;i<n3;i++)
    {
        printf("%d ",Merged_Array[i]);
    }
    printf("\n");
    return 0;
}
int *Merge_Given_Two_Array(int A[],int n1,int B[],int n2)
{
    int *arr,i,n3,k=0;
    n3=n1+n2;
    arr=(int*)calloc(n3,sizeof(int));
    for(i=0;i<n1;i++)
    {
        *(arr+k)=A[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        *(arr+k)=B[i];
        k++;
    }
    return arr;
    free(arr);
}