#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b,i=2,s=1,sum=0,c;
    printf("1 for Calculate LCM of two numbers\n");
    printf("2 for sum of digits\n");
    printf("3 for Volume of cuboid\n");
    printf("4 for checking Prime number\n");
    printf("5 for exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            while(a!=1 || b!=1)
            {
                if(a%i==0 && b%i==0)
                {
                    a=a/i;
                    b=b/i;
                    s=s*i;
                    continue;
                }
                else if(a%i==0)
                {
                    a=a/i;
                    s=s*i;
                    continue;
                }
                else if(b%i==0)
                {
                    b=b/i;
                    s=s*i;
                    continue;
                }
                i++;
            }
            printf("LCM is=%d",s);
            break;
        case 2:
            printf("Enter any number\n");
            scanf("%d",&a);
            while(a)
            {
                sum=sum+a%10;
                a=a/10;
            }
            printf("Sum of digts is=%d",sum);
            break;
        case 3:
            printf("Enter the length,breath & height\n");
            scanf("%d%d%d",&a,&b,&c);
            printf("Volume of cuboid is=%d",a*b*c);
            break;
        case 4:
            printf("Enter any number\n");
            scanf("%d",&a);
            while(i<=a)
            {
                if(a%i==0)
                {
                    break;
                }
                i++;
            }
            if(a==i)
            {
                printf("Prime Number");
            }
            else
            {
                printf("Not Prime Number");
            }
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input. Please Try Again...");
    }
    printf("\n");
    return 0;
}