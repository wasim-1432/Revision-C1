#include<stdio.h>
#include<string.h>
char Sort_10_City_Names_Stored_In_Two_Diemensional_Arrays(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    printf("Enter any %d strings\n",n);
    char str[n][20];
    Sort_10_City_Names_Stored_In_Two_Diemensional_Arrays(str,n);
    printf("\n");
    return 0;
}
void Stored_In_TWo_Diemensional_Array_Of_Given_5_Strings(char str[][20],int n)
{
    int l,i;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
}
char Sort_10_City_Names_Stored_In_Two_Diemensional_Arrays(char str[][20],int n)
{
    Stored_In_TWo_Diemensional_Array_Of_Given_5_Strings(str,n);
    int i,l,j;
    printf("Sorted Cities is: ");
    for(i=0;i<=n;i++)
    {
        for(j=0;str[i][j];j++)
        {
            l=0;
            l=strlen(str[i]);
            int round;
            for(round=1;round<=l-2;round++)
            {
                for(j=0;j<=l-round-1;j++)
                {
                    if(str[i][j]>str[i][j+1])
                    {
                        char temp;
                        temp=str[i][j];
                        str[i][j]=str[i][j+1];
                        str[i][j+1]=temp;
                    }
                }
            }
            printf("%s\n",str[i]);
            break;
        }
    }
}