#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Check()  
//
// Description   : Accept N numbers from user check whether that 
//                 numbers contains 11 in it or not
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int i = 0;
    bool bAns = false;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == 11)
        {
           bAns = true;
           break;
        }
    }
    return bAns;
}

int main()
{
    int iSize = 0,iCnt = 0;
    bool bRet = false;
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

    bRet = Check(p, iSize);
    if (bRet == true)
    {
        printf("Number is there\n");
    }
    else
    {
        printf("Number is not there");
    }

    free(p);
    return 0;
    
}