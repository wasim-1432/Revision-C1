#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the selling and cost price\n");
    scanf("%d%d",&sp,&cp);
    if(sp>cp)
    {
        printf("Profit is=%f",(sp-cp)*100.0/cp);
    }
    else if(sp<cp)
    {
        printf("Loss is=%f",(cp-sp)*100.0/cp);
    }
    printf("\n");
    return 0;
}