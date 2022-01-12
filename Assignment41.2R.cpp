//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  File0X()
//
// Description   :  application which accept file name from user and create that file.
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
        fd = creat(Fname,0777);

        if (fd == -1)
        {
            cout<<"Unable To Create File\n";
        }
        else
        {
            cout<<"File Sucessfully created: "<<fd<<"\n";
        }
        
    }

    ~File0X()
    {
        
    }
};

int main()
{

    char Fname[30];
    cout<<"Enter File name to create: \n";
    cin>>Fname;

    File0X obj(Fname);

    return 0;
}