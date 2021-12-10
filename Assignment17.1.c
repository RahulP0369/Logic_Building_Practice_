#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountEven()  
//
// Description   :  Accept N numbers from user and return difference between
//                  frequency of even numbers
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, Count = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: ",iCnt);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p, iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
    
}