//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SizeOfFile()
//
// Description   :  application which accept file name from user and display size of file.
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
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

using namespace std;

class File0X
{   
    int fd;

    public:
    File0X(char *Fname)
    {
        fd = 0;
        fd = open(Fname, O_RDONLY);

        if (fd == -1)
        {
            printf("Unable to open file\n");
            return;
        }
        else
        {
            printf("File Opened Sucessfully");
        }
    }
    void SizeOfFile()
    {
        int iRet = 0;
        iRet = lseek(fd,0,2);
        cout<<"Total Number Of Size is: "<<iRet;
    }
    ~File0X()
    {
        close(fd);
    }
};

int main()
{   
    char Fname[20];

    cout<<"Enter File Name: \n";
    cin>>Fname;

    File0X obj (Fname);
    obj.SizeOfFile();

    return 0;
}