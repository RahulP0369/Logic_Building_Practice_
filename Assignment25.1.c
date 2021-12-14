#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrcpyX()
//
// Description   :  Write a program which accept string from user and copy the 
//                  contents of that string into another string. (Implement strcpy() 
//                  function)
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

    if (str == NULL)
    {
        return;
    }
    
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;   
}