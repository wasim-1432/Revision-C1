#include<stdio.h>
#include<string.h>
void Count_Vowels_In_Each_Of_The_5_Strings_Stored_In_Two_Diemensional_Array(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][20];
    Count_Vowels_In_Each_Of_The_5_Strings_Stored_In_Two_Diemensional_Array(str,n);
    printf("\n");
    return 0;
}
void Stored_In_TWo_Diemensional_Array_Of_Given_5_Strings(char str[][20],int n)
{
    int i,l;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
}
void Count_Vowels_In_Each_Of_The_5_Strings_Stored_In_Two_Diemensional_Array(char str[][20],int n)
{
    char V[]="aeiouAEIOU";
    int i,j,k,count;
    Stored_In_TWo_Diemensional_Array_Of_Given_5_Strings(str,n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=0;str[i][j];j++)
        {
            for(k=0;V[k];k++)
            {
                if(str[i][j]==V[k])
                {
                    count++;
                }
            }
        }
        printf("Total Vowels In %s is %d\n",str[i],count);
    }
}