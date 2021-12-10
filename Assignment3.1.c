#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PrintEven()  
//
// Description   :   Write a program which accept one number from user and print that number of 
//                   even numbers on screen.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

PrintEven(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for (i = 1; i < 2*iNo; i++)
    {
        if ((i % 2) == 0)
        {
            printf("%d",i);
        }
        
    }  

}

int main()
{

    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",iValue);

    PrintEven(iValue);

    return 0;
}