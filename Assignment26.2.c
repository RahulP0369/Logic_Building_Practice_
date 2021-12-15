#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyX()
//
// Description   : program which accept string from user and copy that 
//                 characters of that string into another string by removing all white 
//                 spaces
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src, char *dest)
{
    while (*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf(" %[^'\n']s",arr);

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;   
}