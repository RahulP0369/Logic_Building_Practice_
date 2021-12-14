#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCatX()
//
// Description   :  Write a program which 2 strings from user and concat second string 
//                  after first string. (Implement strcat() function).
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void StrCatX(char *src, char *dest)
{
    if (src == NULL)
    {
        return;
    }

    while (*src != '\0')
    {
        *src++;
    }
    while (*dest != '\0')
    {
        *src = *dest;
        *src++;
        *dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter first string to concat: ");
    scanf(" %[^'\n']s",arr);

    printf("Enter first string to concat: ");
    scanf(" %[^'\n']s",brr);

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;   
}