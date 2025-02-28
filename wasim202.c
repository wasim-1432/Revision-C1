#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,s=1,sum=0;
    printf("1 for Factorial\n");
    printf("2 check for Even and Odd\n");
    printf("3 for Area of Circle\n");
    printf("4 for Sum of first N natural numbers\n");
    printf("5 for exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any number\n");
            scanf("%d",&a);
            while(a)
            {
                s=s*a;
                a--;
            }
            printf("Factorial is=%d\n",s);
            break;
        case 2:
            printf("Enter any number\n");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("Even Number");
            }
            else
            {
                printf("Odd Number");
            }
            break;
        case 3:
            printf("Enter the radius of the circle\n");
            scanf("%d",&a);
            printf("Area of Circle is=%f",3.14*a*a);
            break;
        case 4:
            printf("Enter any number\n");
            scanf("%d",&a);
            while(a)
            {
                sum=sum+a;
                a--;
            }
            printf("Sum of first N natural numbers=%d",sum);
            break;
        case 5:
            exit(0);
    }
    printf("\n");
    return 0;
}