#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FirstOccCharacter()
//
// Description   :  Write a program which accept string from user and accept one 
//                  character. Return index of first occurrence of that character.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

int LastOcc(char *str, char ch)
{

    int iCnt = 0, index = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            index = iCnt;
        }   
        str++;
        iCnt++;
    }
    return index;    
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet = LastOcc(arr,cValue);

    printf("character frequency is %d",iRet);

    return 0;
}