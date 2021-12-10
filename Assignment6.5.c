#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountDiff()  
//
// Description   :  Write a program which accept number from user and return difference between 
//                  summation of even digits and summation of odd digits
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iEven = 0,iNeven = 0, diff = 0, rem = 0;
    while (iNo != 0)
    {
        rem = iNo % 10;
		if((rem%2) == 0)
		{
			iEven = iEven + rem;
		}
        else
        {
            iNeven = iNeven + rem;
        }

		iNo = iNo /10;
    }
        diff = iEven - iNeven;
        return diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);
    return 0;
}