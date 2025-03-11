#include<stdio.h>
#include<stdlib.h>
float Calculate_Average_Of_Given_N_Numbers();
int main()
{
    printf("Average is=%f",Calculate_Average_Of_Given_N_Numbers());
    printf("\n");
    return 0;
}
float Calculate_Average_Of_Given_N_Numbers()
{
    int *arr,i,n,sum=0;
    float avg,d;
    printf("How many values you want to enter\n");
    scanf("%d",&n);
    d=n;
    arr=(int*)calloc(n,sizeof(int));
    printf("Enter the %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/d;
    return avg;
}