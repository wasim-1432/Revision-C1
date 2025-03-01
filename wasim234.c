#include<stdio.h>
int Print_Next_Prime_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_Next_Prime_Number(n);
    printf("\n");
    return 0;
}
int Print_Next_Prime_Number(int n)
{
    int i=2,s;
    for(s=n+1;;s++)
    {
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
            printf("Next Prime number is=%d",s);
            break;
        }
    }
}