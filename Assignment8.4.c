#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeSum()  
//
// Description   :  Write a program which accept range from user and return addition of all even 
//                  numbers in between that range. (Range should contains positive numbers only)
//
// Input         :  Integer, Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    if ((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }

    for (int i = iStart; iStart <= iEnd; iStart++)
    {
        if ((iStart % 2) == 0)
        {
            iSum = iSum + iStart;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition is %d",iRet);
    }
    return 0;
}