#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reverse()
//
// Description   :  Write a program which accept string from user and display it in 
//                  reverse order.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Modified string is: %s\n");

    return 0;
}