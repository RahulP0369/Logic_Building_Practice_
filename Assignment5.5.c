#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Count()  
//
// Description   :  Write a program which accept number from user and count frequency of such a 
//                  digits which are less than 6.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iCnt = 0;
    while (iNo != 0)
    {
        if((iNo % 10) < 6)
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);
    return 0;
}