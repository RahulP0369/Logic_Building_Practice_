#include<stdio.h>

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  pattern()  
//
// Description   :   Accept number of rows and number of columns 
//                   from user and display below pattern
//
// Input         :  Integer, Integer
//
// Output        :  Character
//
// Author        :  Rahul Patil
//
////////////////////////////////////////////////////////////////////////////

void pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    char Ch = 'A';
    char ch2 = 'a';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf(" %c\t", ch2);
                ch2++;
            }
            printf("\n");
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf(" %c\t", Ch);
                Ch++;
            }
            printf("\n");
        }
        
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of columns: ");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);
}