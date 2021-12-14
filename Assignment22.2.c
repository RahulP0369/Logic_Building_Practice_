#include<stdio.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountSmall()
//
// Description   :  Write a program which accept string from user and count number of 
//                  small characters.
//
// Input         :  String
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']S",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}