#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayFactor()  
//
// Description   :   Write a program which accept number from user and print even factors of that 
//                   number.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for (i = 1; i < iNo; i++)
    {
        if ((iNo % i ) == 0 && (i % 2) == 0);
        {
            printf("%d",i);
        }
        
    }
    

}

int main()
{
    int iValue = 0;
    
    printf("Enter Number: ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}