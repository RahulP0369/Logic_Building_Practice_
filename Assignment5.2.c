#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  chkZero()  
//
// Description   :  Write a program which accept number from user and check whether it contains 0 
//                  in it or not.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int rem = 0;
    while (iNo > 0)
    {
        rem = iNo % 10;
        if (rem == 0)
        {
            return TRUE;
        }
        
        iNo = iNo /10;
    }
    return(rem);
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: \n");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    if (bRet == 1)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    
    return 0;
}