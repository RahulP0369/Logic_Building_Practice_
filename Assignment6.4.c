#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Factorial()  
//
// Description   :  Write a program which accept number from user and return multiplication of all 
//                  digits
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iMult = 1;
    int iCnt = 1;
    int iDigit = 0;
    int iRet = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iNo = 0;
    int  iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    iRet = MultDigits(iNo);

    printf("Factortial is : %ld\n",iRet);
    return 0;
}