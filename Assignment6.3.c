#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange()  
//
// Description   :  Write a program which accept number from user and return the count of digits
//                  in between 3 and 7
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCnt = 0, iNum = 3, iNum2 = 7;

    while (iNo != 0)
    {
        if((iNo % 10) > iNum && (iNo % 10)< iNum2)
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0 ;
}