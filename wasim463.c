#include<stdio.h>
#include<stdlib.h>
int Caluculate_The_Sum_Of_N_Numbers_Entered_By_The_User();
int main()
{
    Caluculate_The_Sum_Of_N_Numbers_Entered_By_The_User();
    printf("\n");
    return 0;
}
int Caluculate_The_Sum_Of_N_Numbers_Entered_By_The_User()
{
    int *arr,i,n,sum=0;
    printf("How many values you want to entered\n");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int));
    printf("Enter the %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum is=%d",sum);
    free(arr);
}