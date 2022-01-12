//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  File0X()
//
// Description   :   application which accept file name from user and open that file in read mode
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

    File0X(char *Fname)
    {
        fd = open(Fname,O_RDONLY);

        if (fd == -1)
        {
            cout<<"Unable to open file\n";
        }
        else
        {
            cout<<"File sucessfully opened: "<<fd<<"\n";
        };
    }
    ~File0X()
    {   
        close(fd);
    }
};  

int main()
{
    char Fname[30];
    cout<<"Enter File name to open\n";
    cin >> Fname;

    File0X obj(Fname);

    return 0;
}