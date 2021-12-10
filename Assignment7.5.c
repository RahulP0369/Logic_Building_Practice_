#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SqureMeter()  
//
// Description   :   Write a program which accept area in square feet and convert it into square 
//                   meter. (1 square feet = 0.0929 Square meter)
//
// Input         :  Integer
//
// Output        :  double
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int SqFeet)
{
    double SquareMeter = 0.0929, i = 0.0;
    i = (SqFeet * SquareMeter);
    return i;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("%lf",dRet);

    return 0;
}