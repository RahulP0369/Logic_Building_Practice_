#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Frequency()  
//
// Description   : Accept N numbers from user and 
//                 accept one another number as NO,check whether NO is present ot not.
//
// Input         :  Integer, Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Frequency(int Arr[], int iSize, int iNo)
{
    int i = 0, iCntFrequency = 0;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] == iNo)
        {
            iCntFrequency++;
        }
    }
    return iCntFrequency;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unabl to allocate memory");
        return -1;
    }
    
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements: ");
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the Value: \n");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("Numbr is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    free(p);

    return 0;
}