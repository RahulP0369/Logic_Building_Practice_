#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountWhite()
//
// Description   :  Write a program which accept string from user and count number of 
//                  white spaces
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    if (str == NULL)
    {
        return -1;
    }

    int iCnt = 0;
    while (*str != '\0')
    {
        if(*str == ' ')
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
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("%d",iRet);

return 0;
}