//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ReadData()
//
// Description   :  application which accept file name from user and read all data from that file 
//                  and display contents on screen.
//
// Input         :  String
//
// Output        :  
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

using namespace std;

class File0X
{

    public: int fd;

    File0X(char *fname)
    {
        fd = open(fname, O_RDONLY);

        if (fd == -1)
        {
            cout<<"Unable To Open File: ";
        }
        else
        {
            cout<<"File Opened Succesfully: "<<"\n";
        }
        
    }

    void ReadData()
    {
        char Buffer[1024];
        int iRet = 0;
        
        cout<<"Data from file is: \n";

        while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            write(1,Buffer,iRet);
        }
        
        
    }
    
    ~File0X()
    {   
        close(fd);
        cout<<"\n"<<"File Closed Sucessfully\n";
    }
}; 

int main()
{

    char fname[30];

    cout<<"Enter File name: \n";
    cin>>fname;

    File0X obj(fname);
    
    obj.ReadData();

    return 0;
}