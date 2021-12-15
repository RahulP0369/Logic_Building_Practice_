#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyToogle()
//
// Description   : Write a program which accept string from user and copy that 
//                 characters of that string into another string by toggling the case.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void StrCpyToogle(char *src, char *dest)
{   
    if (src  == NULL)
    {
        return;
    }

    while (*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src+32;
            dest++;
            src++;
        }
        else if ((*src >= 'a') && (*src < 'z'))
        {
            *dest = *src-32;
            dest++;
            src++;
        }
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf(" %[^'\n']s",arr);

    StrCpyToogle(arr,brr);

    printf("%s",brr);

    return 0;   
}