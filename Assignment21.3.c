#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
//
// Description   :  Accept character from user. If it is capital then display all the 
//                  characters from the input characters till Z. If input character is small 
//                  then print all the characters in reverse order till a. In other cases return directly
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char iCnt = '\0';
    for (iCnt = ch; iCnt <= 'Z'; iCnt++)
    {
        if ((ch >= 'A') && (ch <= 'Z'))
        {
            printf("%c\t",iCnt);
        }
    }
    for (iCnt = ch; iCnt >= 'a'; iCnt--)
    {
        if ((ch >= 'a') && (ch <= 'z'))
        {
            printf("%c\t",iCnt);
        }   
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
