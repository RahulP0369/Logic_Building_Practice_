#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RectArea()  
//
// Description   :   Write a program which accept width & height of rectangle from user and 
//                   calculate its area. (Area = Width * Height)
//
// Input         :  float, float
//
// Output        :  double
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double area = 0.0;
    area = fWidth * fHeight;
    return area;
}

int main()
{

    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter height: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("%lf",dRet);

    return 0;
}