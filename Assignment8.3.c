#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeSum()  
//
// Description   :   Write a program which accept range from user and return addition of all numbers 
//                   in between that range. (Range should contains positive numbers only)
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
    for (int i = iStart; iStart <= iEnd; iStart++)
    {
        iSum = iSum + iStart;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter starting point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d",iRet);
    
    return 0;
}