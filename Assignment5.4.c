#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountFour()  
//
// Description   :  Write a program which accept number from user and count frequency of 4 in it.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iCnt = 0, iNum = 4;
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

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);
    return 0;
}