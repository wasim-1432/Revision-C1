#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter the selling and cost price\n");
    scanf("%d%d",&sp,&cp);
    printf("Profit or loss is=%f",(sp-cp)/12.0*25);
    printf("\n");
    return 0;
}