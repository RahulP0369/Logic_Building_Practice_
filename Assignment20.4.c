#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkDigit()
//
// Description   :  Accept Character from user and check whether it is 
//                  smallest casr or not (a-z).
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
    if ((ch >= 'a') && (ch <= 'z'))
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
        printf("It is a Small Case Character");
    }
    else
    {
        printf("It is not a Small Case Character");
    }

    return 0;
}