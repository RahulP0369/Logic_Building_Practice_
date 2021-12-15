#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit()
//
// Description   : Write a program which checks whether 5th & 18th bit is On or OFF.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010;
    UINT iResult = 0;
    iResult = iNo & iMask;
    if (iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;
    printf("%d",&iValue);

    bRet = ChkBit(iValue);
    if (bRet == TRUE)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF");
    }
    return 0;
}