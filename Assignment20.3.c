#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkDigit()
//
// Description   :  Accept Character from user and check whether it is 
//                  digit or not (0-9).
//
// Input         :  Integer, String
//
// Output        :  Integer, String
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the digit: ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);
    
    if (bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}