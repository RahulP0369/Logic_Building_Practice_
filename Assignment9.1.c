#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()  
//
// Description   :  Accept number from user and display below pattern.
//
// Input         :  Integer, Integer
//
// Output        :  Character
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';
    for (i = 1, ch = 'A'; i <= iNo; i++,ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
 int iValue = 0;

 printf("Enter number\n");
 scanf("%d",&iValue);

 Pattern(iValue);

 return 0;
}