#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference()
//
// Description   :  Accept N numbers from user and return the difference 
//                  between largest and smallest number..
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Difference(int Arr[], int iLength)
{
    BOOL i = 0, iSumMax = 0, iSumMin = Arr[i];

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] > iSumMax)
        {
            iSumMax = Arr[i];
        }
        else if (Arr[i] < iSumMin)
        {
            iSumMin = Arr[i];
        }
        
    }
    return iSumMax - iSumMin;
}

BOOL main()
{
    BOOL iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    BOOL *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Difference(p, iSize);
    printf("Largest Number is: %d",iRet);
    free(p);

    return 0;
}