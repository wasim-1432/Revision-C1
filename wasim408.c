#include<stdio.h>
#include<string.h>
void Remove_Duplicates_Names_Stored_In_The_List_Of_Names_Stored_In_A_2D_Char_Array(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][20];
    Remove_Duplicates_Names_Stored_In_The_List_Of_Names_Stored_In_A_2D_Char_Array(str,n);
    printf("\n");
    return 0;
}
int Input_A_String_In_2D_Char_Array(char str[][20],int n)
{
    int i,l;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
}
void Remove_Duplicates_Names_Stored_In_The_List_Of_Names_Stored_In_A_2D_Char_Array(char str[][20],int n)
{
    Input_A_String_In_2D_Char_Array(str,n);
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
        if(i==0 || strcmp(str[i],str[i-1])!=0)
        {
            printf("\n%s",str[i]);
        }
    }
}