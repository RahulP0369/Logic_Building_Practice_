#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Frequency()  
//
// Description   : Accept N numbers from user and return frequency of 11 form it
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int i = 0, iCntFrequency = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == 11)
        {
            iCntFrequency++;
        }
    }
    return iCntFrequency;
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

    iRet = Frequency(p, iSize);

    printf("%d",iRet);

    free(p);
    return 0;
    
}