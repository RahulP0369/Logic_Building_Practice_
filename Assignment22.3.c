#include<stdio.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference()
//
// Description   :  Write a program which accept string from user and return 
//                  difference between frequency of small characters and frequency of 
//                  capital characters.
//
// Input         :  String
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSumC = 0, iSumS = 0;
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSumS++;
        }
        else if ( (*str >= 'A') && (*str <= 'Z'))
        {
            iSumC++;
        }
        
        str++;
    }
    if (iSumC > iSumS)
    {
        return iSumC - iSumS;
    }
    else if (iSumS > iSumC)
    {
        return iSumS - iSumC;
    }
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']S",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}