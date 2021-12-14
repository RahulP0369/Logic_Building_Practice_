#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayDigit()
//
// Description   :  Write a program which accept string from user and display only 
//                  digits from that string.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    if (str == NULL)
    {
        return;
    }
    
    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
char arr[20];
printf("Enter string: \n");
scanf("%[^'\n']s",arr);

DisplayDigit(arr);

return 0;
}