#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Maximum()  
//
// Description   :  Accept N numbers from user and return the largest number.
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

BOOL Maximum(int Arr[], int iLength)
{
    BOOL i = 0, index = 0;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] > index)
        {
            index = Arr[i];
        }
    }
    return index;
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
    
    iRet = Maximum(p, iSize);
    printf("Largest Number is: %d",iRet);
    free(p);

    return 0;
}