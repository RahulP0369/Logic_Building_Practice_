#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkChar()
//
// Description   :  Write a program which accept string from user and accept one 
//                  character. Check whether that character is present in string or not.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkChar(char*str, char ch)
{
    BOOL temp = FALSE;

    if (str == NULL)
    {
        return -1;
    }
    while (*str != '\0')
    {
       if (*str == ch)
       {
           temp = TRUE;
           break;
       }
        str++;
    }
    return temp;
    
}
BOOL main()
{
    char arr[20];
    char cValue;
    BOOL iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet = ChkChar(arr,cValue);

    if (iRet == TRUE)
    {
        printf("Charater is there");
    }
    else
    {
        printf("Character is not there");
    }
    

    return 0;
}