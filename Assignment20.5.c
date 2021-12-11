#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkDigit()
//
// Description   :  Accept division of student from user and depends on the division 
//                  display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
//                  of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
//                  (Application should be case insensitive)
//
// Input         :  Integer, String
//
// Output        :  Integer, String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if ((chDiv == 'a') || (chDiv == 'A'))
    {
        printf("Your exam at 7 AM");
    }
    if ((chDiv == 'b') || (chDiv =='B'))
    {
        printf("Your exam at 8:30 AM");
    }
    if ((chDiv == 'c') || (chDiv =='C'))
    {
        printf("Your exam at 9 AM");
    }
    if ((chDiv == 'd') || (chDiv == 'D'))
    {
        printf("Your exam at 10:30 AM");
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter your Division: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}