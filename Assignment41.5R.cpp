//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SizeOfFile()
//
// Description   :  application which accept file name from user and one string from user. Write 
//                  that string at the end of file.
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
    public: 
    int fd = 0;

    public:
    File0X(char *Fname)
    {
        fd = 0;
        fd = open(Fname,O_RDWR | O_APPEND);

        if (fd == -1)
        {
            cout<<"Unable to opened file\n";
            return;
        }

        else
        {
            cout<<"File is opened sucessfully\n";
        }
    }

    void AppendX()
    {   
        char str[10];
        
        cout<<"Enter string to append: \n";
        cin>>str;

        write(fd,str,sizeof(str));
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
    obj.AppendX();

    return 0;
}