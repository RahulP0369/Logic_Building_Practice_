#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OffBit()
//
// Description   : Write a program which accept one number from user and off 7th bit of that 
//                 number if it is on. Return modified number.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;
typedef int BOOL;

BOOL OffBit(UINT iNo)
{
    UINT i = 0, iCnt = 0, iResult = 0;
    UINT iMask = 0x00000001;
    iMask = iMask << (7-1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    printf("%d",iRet);

    return 0;
}