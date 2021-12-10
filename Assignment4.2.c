#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactRev()  
//
// Description   :  Write a program which accept number from user and display its factors in 
//                  decreasing order.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int FactRev(int iNo)
{
    int i = 0;
    for (i = iNo-1; i > 0; i--)
    {
        if ((iNo % i) == 0)
        {
            printf("%d\t",i);
        }   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}