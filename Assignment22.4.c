#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1 
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowel()
//
// Description   :  Write a program which accept string from user and check whether 
//                  it contains vowels in it or not.
//
// Input         :  String
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL index = 0;
    while (*str != '\0')
    {
        
        if((*str == 'a') || (*str =='e') || (*str == 'i') || (*str=='o') || (*str == 'u'))
        {
            index = TRUE;
            break;
        }
        str++;
    }
    if (index == TRUE)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
    
}

int main()
{
char arr[20];
BOOL bRet = FALSE;

printf("Enter string: \n");
scanf("%[^’\n’]s",arr);

bRet = ChkVowel(arr);

if(bRet == TRUE)
{
printf("Contains Vowel");
}
else
{
printf("There is no Vowel");
}
return 0;
}