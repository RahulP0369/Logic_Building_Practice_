#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeDisplay()  
//
// Description   :  Write a program which accept accept range from user and display
//                  all numbers in between that range in reverse order
//
// Input         :  Integer, Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    for (int i = iEnd; iEnd > iStart; iEnd--)
    {
        printf("%d\t",iEnd);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter startig point: ");
    scanf("%d",&iValue1);

    printf("Enter Enfing point: ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);
}