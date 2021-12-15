#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCatX()
//
// Description   :  Write a program which accept string from user and copy that 
//                  characters of that string into another string in reverse order.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void StrCpyRev(char *src, char *dest)
{
    char *end = src;
    if (src == NULL)
    {
        return;
    }

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (src <= end)
    {
        *dest = *end;
        *dest++;
        *end--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf(" %[^'\n']s",arr);

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;   
}