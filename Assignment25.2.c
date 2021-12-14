#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrNcpyX()
//
// Description   :  Write a program which accept string from user and copy the 
//                  contents of that string into another string. (Implement strncpy() 
//                  function)
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void StrNcpyX(char *src, char *dest,int iNo)
{
    if (src == NULL)
    {
        return;
    }

    while ((*src != '\0') && (iNo != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iNo--;
    }
    iNo;
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];
    int iNo = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    printf("Enter the how much containts you want to copy: \n");
    scanf("%d",&iNo);

    StrNcpyX(arr,brr,iNo);

    printf("%s",brr);

    return 0;   
}