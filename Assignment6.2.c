#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountOdd()  
//
// Description   :  Write a program which accept number from user and return the count of 
//                  odd digits
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iCnt = 0, iDigit = 0;
    if (iNo == 0)
    {
        return 1;
    }
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue= 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Number of even digits are : %d\n",iRet);
    return 0;
}