#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

using namespace std;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ReadData()
//
// Description   :  program which accepts file name and one count from user and read 
//                  that number of characters from starting position.
//
// Input         :  String
//
// Output        :  
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

class File0X
{
    public:

    int fd, iInput;

    File0X(char *fname, int iNo)
    {
        fd = 0;
        fd = open(fname,O_RDONLY);
        iInput = iNo;

        if (fd == -1)
        {
            cout<<"Unable to open a file: \n";
        }
        else
        {
            cout<<"File opened sucessfully: ";
        }
    }   

    void ReadData()
    {   
        char Buffer[1024];
        int iRet = 0, i = 0;
        while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
                write(1,Buffer,iRet);
        }
    }

    ~File0X()
    {
        close(fd);
    }
};

int main()
{   
    char fname[30];
    int iValue = 0;

    cout<<"Enter File Name: \n";
    cin>>fname;

    cout<<"Enter Number of bytes to count from a File: \n";
    cin>>iValue;

    File0X obj (fname,iValue);
    obj.ReadData();

    return 0;
}