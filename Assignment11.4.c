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
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void pattern(int iRow, int iCol)
{
    int i = 1, j = 1; 

    for(i=iRow;i>0;i--)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of columns: ");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);
}