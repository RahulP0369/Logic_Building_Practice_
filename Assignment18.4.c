#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Range()  
//
// Description   : Accept N numbers from user and accept Range,
//                 Display all elements from that range
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0, j = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter %d elements: \n",iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("Enter the starting point: ");
    scanf("%d",&iStart);

    printf("Enter the ending point: ");
    scanf("%d",&iEnd);

    Range(p, iSize, iStart, iEnd);
    free (p);
    return 0;
}