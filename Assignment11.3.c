#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  pattern()  
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

void pattern(int iRow, int iCol)
{
    int i = 1, j = 1; 
    int c = 'A';
    for(i=1, c = 'A';i<=iRow;i++,c++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf(" %c ",c);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows");
    scanf("%d",&iValue1);

    printf("Enter number of columns ");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);
}