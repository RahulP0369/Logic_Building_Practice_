#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeDisplayEven()  
//
// Description   :   Write a program which accept range from user and display all 
//                   even numbers in between that range
//
// Input         :  Integer, Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    for (int i = iStart; iStart <= iEnd; iStart++)
    {
        printf("%d\t",iStart);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);
    return 0;
}