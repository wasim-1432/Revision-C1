#include<stdio.h>
int main()
{
    int i,arr[10],sum1=0,sum2=0;
    printf("Enter any 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    printf("Sum of Even Number is=%d\n",sum1);
    printf("Sum of Odd Numbers is=%d",sum2);
    printf("\n");
    return 0;
}