#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyCap()
//
// Description   : Write a program which accept string from user and copy that 
//                 characters of that string into another string by converting all small 
//                 characters into capital case.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void StrCpyCap(char *src, char *dest)
{   
    if (src  == NULL)
    {
        return;
    }
    

    while (*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src-32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf(" %[^'\n']s",arr);

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;   
}