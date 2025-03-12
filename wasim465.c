#include<stdio.h>
#include<stdlib.h>
int Sort_Of_Given_Array(int A[],int n);
int *Merge_Given_Two_Array(int A[],int n1,int B[],int n2);
int main()
{
    int n1,n2,i,n3;
    printf("Enter the size of first array\n");
    scanf("%d",&n1);
    int A[n1];
    printf("Enter the %d elements of first array\n",n1);
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
    n3=n1+n2;
    Sort_Of_Given_Array(A,n1);
    Sort_Of_Given_Array(B,n2);
    int *Merged_Array=Merge_Given_Two_Array(A,n1,B,n2);
    for(i=0;i<n3;i++)
    {
        printf("%d ",Merged_Array[i]);
    }
    printf("\n");
    return 0;
}
int Sort_Of_Given_Array(int A[],int n)
{
    int round,i;
    for(round=0;round<n-2;round++)
    {
        for(i=0;i<n-round-1;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
}
int *Merge_Given_Two_Array(int A[],int n1,int B[],int n2)
{
    int *arr,i,j,n3,k;
    n3=n1+n2;
    arr=(int*)malloc(n3*sizeof(int));
    for(i=0,j=0,k=0;i<n1 && j<n2;k++)
    {
        if(A[i]<B[j])
        {
            *(arr+k)=A[i];
            i++;
        }
        else
        {
            *(arr+k)=B[j];
            j++;
        }
    }
    while(i<n1)
    {
        *(arr+k)=A[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        *(arr+k)=B[j];
        j++;
        k++;
    }
    return arr;
}