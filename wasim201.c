#include<stdio.h>
int main()
{
    int m;
    printf("Enter the marks up to 100\n");
    scanf("%d",&m);
    switch(m)
    {
        case 90 ... 100:
            printf("A");
            break;
        case 80 ... 89:
            printf("B");
            break;
        case 70 ... 79:
            printf("C");
            break;
        case 60 ... 69:
            printf("D");
            break;
        case 50 ... 59:
            printf("E");
            break;
        case 1 ... 49:
            printf("F");
            break;
        default:
            printf("Invalid Input. Please Try Again...");
    }
    printf("\n");
    return 0;
}