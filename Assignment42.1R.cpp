#include<iostream>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

using namespace std;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ReadData()
//
// Description   :  Program which accepts file name from user and count number of 
//                  capital characters from that file
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
    public: int fd, iCnt;

    File0X(char *fname, int iNo)
    {
        fd = open(fname, O_RDONLY);

        if (fd == -1)
        {
            cout<<"Unable to open File: \n";
        }
        else
        {
            cout<<"File opened sucessfully: \n";
        }
    }

    int ReadData(int iCnt = 0)
    {
        char Buffer[1024];
        int iRet = 0,i = 0;

        cout<<"Capital letters from file is: \n";

        while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
        {
            for (i = 0; i < iRet; i++)
            {
                if ((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
                {
                    iCnt++;
                }
            }
        }
        return iCnt;      
    }

    ~File0X()
    {
        close(fd);
        cout<<"\n File Closed Sucessfully";
    }
};

int main()
{
    char fname[30];
    int Counter = 0, iRet = 0;
    cout<<"Enter File Name: \n";
    cin>>fname;

    File0X obj(fname, Counter);

    iRet = obj.ReadData();

    cout<<iRet<<"\n";
    
    return 0;
}