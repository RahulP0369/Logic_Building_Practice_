#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
//
// Description   :   Accept character from user and display its ASCII value in decimal, 
//                   octal and hexadecimal format.
//
// Input         :  Integer, String
//
// Output        :  Integer, String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char iCnt = '\0';

    if ((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        printf("Decimal: %d\n",ch);
        printf("Octal: %o\n",ch);
        printf("Hexadecimal: %x\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: \n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}
