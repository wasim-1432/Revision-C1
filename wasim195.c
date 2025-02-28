#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    int n;
    printf("1 for check isosceles\n");
    printf("2 for check right angle triangle or not\n");
    printf("3 for check equilateral traingle or not\n");
    printf("4 for Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter the length of the triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || a==c || b==a || b==c)
            {
                printf("Isosceles Triangle\n");
            }
            else
            {
                printf("Not Isosceles Triangle\n");
            }
            break;
        case 2:
            printf("Enter the length of the triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            {
                printf("Right Angle triangle\n");
            }
            else
            {
                printf("Not Right Angle Triangle\n");
            }
            break;
        case 3:
            printf("Enter the length of the triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && b==c && c==a)
            {
                printf("Equilateral Traingle");
            }
            else
            {
                printf("Not Equilateral Triangle\n");
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Input. Please Try Again.");
    }
    printf("\n");
    return 0;
}