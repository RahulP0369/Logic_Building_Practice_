#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CircleArea()  
//
// Description   :   Write a program which accept radius of circle from user and calculate its area. 
//                   Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//
// Input         :  float
//
// Output        :  double
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

#define pi 3.14

double CircleArea(float fRadius)
{
    double area;
    area = pi * fRadius * fRadius;
    return area;
}

int main()
{   
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("%lf",dRet);

    return 0;
}