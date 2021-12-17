#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ToogleBit()
//
// Description   : Write a program which accept one number from user and toggle 7th bit of 
//                 that number. Return modified number.
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

BOOL ToogleBit(UINT iNo)
{
    UINT i = 0, iCnt = 0, iResult = 0,iMask = 0x00000001;
    
    iMask = iMask << (7-1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = ToogleBit(iValue);
    printf("%d",iRet);

    return 0;
}