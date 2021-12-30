//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FindFirstOcc()
//
// Description   :   program which accept N numbers from user and accept 
//                   one another number as NO , return index of first occurrence of that 
//                   NO
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment34X2R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0, iRet = 0;

        System.out.println("Enter the size: ");
        iLength = sobj.nextInt();

        FirstOcc01 fobj = new FirstOcc01(iLength);
        fobj.Accept();
        fobj.Display();
        iRet = fobj.FindFirstOcc();

        System.out.println("Number is found on index : "+iRet);
    }    
}

class Array07R
{
    public int iNo;
    public int Arr[];

    public Array07R(int iSize)
    {
        iNo = 0;
        Arr = new int[iSize];
    }   

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter elements: ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter No to Find: ");
        iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Elements are: ");
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class FirstOcc01 extends Array07R
{
    public FirstOcc01(int iValue)
    {
        super(iValue);
    }

    public int FindFirstOcc()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
        }
        if(iCnt == Arr.length)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }

}
