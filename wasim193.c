#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float a,b;
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            printf("Addition is=%d\n",a+b);
            break;
        case 2:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            printf("Subtraction is=%d\n",a-b);
            break;
        case 3:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            printf("Multiplication is=%d\n",a*b);
            break;
        case 4:
            printf("Enter any two numbers\n");
            scanf("%f%f",&a,&b);
            printf("Division is=%f\n",a/b);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input Please Try Again...\n");
    }
    printf("\n");
    return 0;
}