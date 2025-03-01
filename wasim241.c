#include<stdio.h>
int Print_Prime_Numbers_Between_Two_Given_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any starting and ending points\n");
    scanf("%d%d",&a,&b);
    Print_Prime_Numbers_Between_Two_Given_Numbers(a,b);
    printf("\n");
    return 0;
}
int Print_Prime_Numbers_Between_Two_Given_Numbers(int a,int b)
{
    int s;
    for(s=a;s<=b;s++)
    {
        int i=2;
        while(i<=s)
        {
            if(s%i==0)
            {
                break;
            }
            i++;
        }
        if(s==i)
        {
            printf("%d ",s);
        }
    }
}