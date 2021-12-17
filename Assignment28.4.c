#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ToogleBit()
//
// Description   : Write a program which accept one number from user and toggle 7th and 
//                 10th bit of that number. Return modified number.
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
    UINT iResult = 0,iMask = 0,iMask1 = 0x00000001,iMask2 = 0x00000001;
    
    iMask1 = iMask1 << (7-1);
    iMask2 = iMask2 <<(10-1);

    iMask = iNo ^ iMask1 ^ iMask2;
    iResult = iMask;

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