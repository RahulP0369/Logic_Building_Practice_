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
// Description   :  program which accepts file name and one character from user and 
//                  count number of occurrences of that characters from that file.
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
    char input;
    File0X(char *fname, char charInput)
    {
        fd = 0;
        input = charInput;

        fd = open(fname, O_RDONLY);
        if(fd == -1)
        {
            cout<<("Unable to open file: ");
            return;
        }
        else
        {
            cout<<"File Opened sucessfully: \n";
        }
    }

    int ReadData(int iCnt = 0)
    {
        char Buffer[1024];
        int iRet = 0, i = 0;

        while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            for(i = 0; i <= iRet; i++)
            {
                if (Buffer[i] == input)
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
        cout<<"Fil closed sucessfully: \n";
    }
};

int main()
{
    char fname[30];
    char charInput = '\0';
    int iRet = 0;

    cout<<"Enter a File Name: \n";
    cin>>fname;

    cout<<"Enter Character To find count: \n";
    cin>>charInput;

    File0X obj(fname, charInput);
    iRet = obj.ReadData();
    cout<<iRet<<"\n";
    return 0;
}