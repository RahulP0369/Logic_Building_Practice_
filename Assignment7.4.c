#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FhoToCs()  
//
// Description   :    Write a program which accept temperature in Fahrenheit and convert it into 
//                    celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//
// Input         :  float
//
// Output        :  double
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

double FhoToCs(int fTempNo)
{
    double celsius = 1.0;
    celsius = (fTempNo - 32) * 5/9;
    return celsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhoToCs(fValue);

    printf("%lf",dRet);
    return 0;
}