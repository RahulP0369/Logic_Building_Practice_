#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DigitSum()
//
// Description   :   Accept N numbers from user and display summation of 
//                   digits of each number
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////


void DigitSum(int Arr[], int iLength)
{
    int i = 0, iSum = 0, iDigit = 0;

    for (i = 0; i < iLength; i++)
    {
        iSum = 0;

        while (Arr[i] > 0)
        {
            iDigit = Arr[i] % 10;
            iSum = iSum + iDigit;
            Arr[i] = Arr[i]/10;
        }
        printf("%d\t",iSum);
    }
    
}

int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

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
    
    DigitSum(p, iSize);

    free(p);

    return 0;
}