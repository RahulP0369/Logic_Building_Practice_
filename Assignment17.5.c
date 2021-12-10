#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Frequency()  
//
// Description   : Accept N numbers from user and 
//                 accept one another number as NO,RETURN FREQUENCY OF no from it.
//
// Input         :  Integer, Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize,int iNo)
{
    int i = 0, iCntFrequency = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)   
        {   
            iCntFrequency++;
        }
    }
    return iCntFrequency;
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
    
    printf("Enter the Vlue\n");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency is: %d",iRet);

    free(p);

    return 0;
}
    