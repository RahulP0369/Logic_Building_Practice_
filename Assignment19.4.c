#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Digits()
//
// Description   :   Accept N numbers from user and display all such 
//                   numbers which contains 3 digits in it.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////


void Digits(int Arr[], int iLength)
{
    int i = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] > 99) && (Arr[i] <= 999))
        {
            printf("%d\t",Arr[i]);
        }
        
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
    
    Digits(p, iSize);

    free(p);

    return 0;
}