#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OnBit()
//
// Description   : Write a program which accept one number from user and on its first 4 
//                 bits. Return modified number.
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

BOOL OnBit(UINT iNo)
{
    UINT iResult = 0,iMask = 0x0000000f;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);
    printf("%d",iRet);

    return 0;
}