#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  LastOcc()  
//
// Description   :  Accept N numbers from user and return product of all odd elements
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int i = 0,temp = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) != 0)
        {
            temp = 1;
            temp = temp * Arr[i];
        }
    }
    return temp;
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("product is: %d",iRet);

    free(p);

    return 0;
}