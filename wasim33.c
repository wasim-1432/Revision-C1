#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter any three character\n");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c-%d\n%c-%d\n%c-%d\n",a,a,b,b,c,c);
    printf("\n");
    return 0;
}