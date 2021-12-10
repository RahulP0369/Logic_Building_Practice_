#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  NonFact()  
//
// Description   :  Write a program which accept number from user and display all its non factors.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    for(int iCnt=1; iCnt<iNo; iCnt++)
    {
        if ((iNo % iCnt)!= 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}