#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit()
//
// Description   : Write a program which checks whether 7th & 8th & 9th bit is On or 
//                 OFF.
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
    UINT iMask = 0x000001C0;
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