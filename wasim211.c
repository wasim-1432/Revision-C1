#include<stdio.h>
float Claculate_Area_Of_Circle(int r);
int main()
{
    int r;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    printf("Area of Circle is=%f",Claculate_Area_Of_Circle(r));
    printf("\n");
    return 0;
}
float Claculate_Area_Of_Circle(int r)
{
    return 3.14*r*r;
}