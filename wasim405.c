#include<stdio.h>
#include<string.h>
void Input_A_String_Into_Two_Dimensinal_Array(char str[][20],int n);
void Sort_City_Names_stored_In_Two_Dimensional_Char_Array(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][20];
    Sort_City_Names_stored_In_Two_Dimensional_Char_Array(str,n);
    printf("\n");
    return 0;
}
void Input_A_String_Into_Two_Dimensinal_Array(char str[][20],int n)
{
    int i,l;
    printf("Enter %d string\n",n);
    for(i=0;i<n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
}
void Sort_City_Names_stored_In_Two_Dimensional_Char_Array(char str[][20],int n)
{
    Input_A_String_Into_Two_Dimensinal_Array(str,n);
    int i,round;
    char temp[20];
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<=n-round-1;i++)
        {
            if(strcmp(str[i],str[i+1])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%s",str[i]);
    }
}