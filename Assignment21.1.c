#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayASCII()
//
// Description   :  Write a program which displays ASCII table. Table contains symbol, 
//                  Decimal, Hexadecimal and Octal representation of every member from 
//                  0 to 255.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;
    printf("ASCII Table is \n");
    printf("************************************\n");
    printf("Dec\t Hex\t Octal\t Char\t\n");
    printf("************************************\n");

    for (i = 0; i <= 127; i++)
    {
        printf("%d\t %x\t %o\t %c\n",i,i,i,i);
    }
    printf("***********************************\n");
}

int main()
{
    DisplayASCII();
    return 0;
}