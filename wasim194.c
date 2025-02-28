#include<stdio.h>
int main()
{
    int n;
    printf("Enter the day number\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuseday\n");
            break;
        case 3:
            printf("Wednessay\n");
            break;
        case 4:
            printf("Thurseday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Suterday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Input. Please Try Again...\n");
    }
    printf("\n");
    return 0;
}