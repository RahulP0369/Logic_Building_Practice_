#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountTwo()  
//
// Description   :  Write a program which accept number from user and count frequency of 2 in it.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

CountTwo(int iNo)
{
    int iCnt = 0, iNum = 2;
    while (iNo != 0)
    {
        if((iNo % 10) == iNum)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);
    iRet = CountTwo(iValue);
    printf("%d",iRet);
    return 0;
}