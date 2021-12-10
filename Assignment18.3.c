#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  LastOcc()  
//
// Description   : Accept N numbers from user and accept one another 
//                 number as NO,return index of last occurrence of that NO.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for (i = iLength-1; i >= 0; i--)
    {
        if (Arr[i] == iNo)
        {
            break;
        }
    }
    if (i == iLength)
    {
        return -1;
    }
    else
    {
        return i;
    }
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
    
    printf("Enter the Value: \n");
    scanf("%d",&iValue);

    iRet = LastOcc(p, iSize, iValue);

    printf("Index is: %d",iRet);

    free(p);

    return 0;
}