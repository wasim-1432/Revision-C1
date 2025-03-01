#include<stdio.h>
float Calculate_Simple_Interest(int P,int R,int T);
int main()
{
    int P,R,T;
    printf("Enter the principle amount,Rate & Time(in Years)\n");
    scanf("%d%d%d",&P,&R,&T);
    printf("Simple Interset is=%f",Calculate_Simple_Interest(P,R,T));
    printf("\n");
    return 0;
}
float Calculate_Simple_Interest(int P,int R,int T)
{
    return P*R*T/100.0;
}