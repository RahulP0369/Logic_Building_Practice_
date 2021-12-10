#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  KMtoMeter()  
//
// Description   :   Write a program which accept distance in kilometre and convert it into meter. 
//                   (1 kilometre = 1000 Meter)
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int meter = 1000;
    meter = iNo * meter;
    return meter;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);
    return 0;
}