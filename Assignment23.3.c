#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  strtoogleX()
//
// Description   :  Write a program which accept string from user and toggle the case.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void strtoogleX(char *str)
{

    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
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
strtoogleX(arr);
printf("Modified string is %s",arr);
return 0;
}