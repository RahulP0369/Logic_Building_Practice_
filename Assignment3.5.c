#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowel()  
//
// Description   :  Accept on character from user and check whether that character is vowel 
//                  (a,e,i,o,u) or not.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
# define TRUE 1;
# define FALSE 0;

BOOL ChkVowel(char cValue)
{
    if ((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'u') || (cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == 1)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}