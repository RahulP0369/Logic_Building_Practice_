#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  strlwrx()
//
// Description   :  Write a program which accept string from user and convert it into 
//                  lower case.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    if (str == NULL)
    {
        return;
    }
    
    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
char arr[20];
printf("Enter string: \n");
scanf("%[^'\n']s",arr);
strlwrx(arr);
printf("Modified string is %s",arr);
return 0;
}