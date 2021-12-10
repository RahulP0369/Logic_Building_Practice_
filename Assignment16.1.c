#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()  
//
// Description   :  Accept N numbers from user and return difference between 
//                  summation of even elements and summation of odd elements.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

int Display(int Arr[],int iLength)
{
    int iCnt = 0, iEven = 0, iOdd = 0, iSumE = 0, iSumO = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        Arr[iCnt];
        if ((Arr[iCnt] % 2) == 0)
        {
           iSumE = iSumE + Arr[iCnt];
        }
        else
        {
            iSumO = iSumO + Arr[iCnt];
        }
    }
    return iSumE - iSumO;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Display(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}