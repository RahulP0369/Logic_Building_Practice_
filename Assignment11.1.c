#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()  
//
// Description   :   Accept number of rows and number of columns 
//                   from user and display below pattern
//
// Input         :  Integer, Integer
//
// Output        :  Character
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of column: ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}