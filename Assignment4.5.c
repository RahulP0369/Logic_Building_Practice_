#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactDiff()  
//
// Description   :  Write a program which accept number from user and return difference between 
//                  summation of all its factors and non factors.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iSumF = 0,iSumNF = 0, iDiff = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSumF = iSumF + iCnt;
        }
        else
        {
            iSumNF = iSumNF + iCnt; 
        }
    }
    return iSumF - iSumNF;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}