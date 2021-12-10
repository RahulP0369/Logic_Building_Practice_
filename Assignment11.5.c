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
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void pattern(int iRow, int iCol)
{
    int i=1,j=1,iCnt=1;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++,iCnt++)
        {
            printf("%d\t",iCnt);
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