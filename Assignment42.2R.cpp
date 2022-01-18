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
//                  small characters from that file.
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
    int fd;
    File0X(char *fname)
    {
        fd = 0;

        fd = open(fname,O_RDONLY);

        if (fd == -1)
        {
            cout<<"Unable to open a file: \n";
            return;
        }
        else
        {
            cout<<"File opened sucessfully: \n";
        }
    }

    int ReadData(int iCnt = 0)
    {
        char Buffer[1024];
        int iRet = 0, i = 0;

        cout<<"Count of small letters from file is: \n";

        while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            for (i = 0; i <= iRet; i++)
            {
                if ((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
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
        cout<<"File closed Sucessfully: \n";
    }
};

int main()
{   
    char fname[30];
    int iRet = 0;
    cout<<"Enter name of a file: \n";
    cin>>fname;

    File0X obj(fname);
    iRet = obj.ReadData();

    cout<<iRet<<"\n";

    return 0;
}