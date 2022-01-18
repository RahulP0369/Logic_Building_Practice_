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
// Description   :  Program which accepts file name from user and count number of 
//                  white spaces from that file.
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
    int fd = 0;

    File0X(char *fname)
    {
        fd = 0;
        fd = open(fname, O_RDONLY);

        if (fd == -1)
        {
            cout<<"Unable to open file: ";
            return;
        }
        else
        {
            cout<<"File opened sucessfully: ";
        }
        
    }   

    int ReadData(int iCnt = 0)
    {
        char Buffer[1024];
        int iRet = 0,i = 0;
        cout<<"Data from file is: \n";
        while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            for (i = 0; i < iRet; i++)
            {
                if ((Buffer[i]) == ' ')
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
    }   
};

int main()
{   
    char fname[30];
    int iRet = 0;

    cout<<"Enter File Name: \n";
    cin>>fname;

    File0X obj (fname);
    iRet = obj.ReadData();  
    
    cout<<iRet<<"\n";
    return 0;
}