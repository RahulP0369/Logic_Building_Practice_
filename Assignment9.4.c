#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()  
//
// Description   :  Accept number from user and display below pattern.
//
// Input         :  Integer, Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# \t %d \t *\t",iCnt);
    }
    
}

int main()
{
 int iValue = 0;

 printf("Enter number\n");
 scanf("%d",&iValue);

 Pattern(iValue);
}